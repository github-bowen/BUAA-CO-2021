#include <bits/stdc++.h>
int ans[10][10];
int m1,n1,m2,n2;
int core[10][10],matrix[10][10];
void Convolution();
void print();
int main() {
	scanf("%d %d %d %d",&m1,&n1,&m2,&n2);
	for(int i=0; i<m1; i++) 
		for(int j=0; j<n1; j++)
			scanf("%d",&matrix[i][j]);

	for(int i=0; i<m2; i++)
		for(int j=0; j<n2; j++)
			scanf("%d",&core[i][j]);

	Convolution();
	print();
	return 0;
}
//本题不需要翻转，也不需要填充
//下面用变量i,j控制卷积核的移动，k,l作为数据运算时的卷积核中元素行列标号
//分析可知:0<=i<=m1-m2   0<=j<=n1-n2
//分析可知:0<=k<m2       0<=l<n2
//计算规则:ans[i][j]+=core[k][l]*matrix[i+k][j+l]
void Convolution() {
	for(int i=0; i<=m1-m2; i++) 
		for(int j=0; j<=n1-n2; j++) 
			for(int k=0; k<m2; k++) 
				for(int l=0; l<n2; l++) 
					ans[i][j]+=core[k][l]*matrix[i+k][j+l];
}
void print() {
	for(int i=0; i<=m1-m2; i++) {
		for(int j=0; j<=n1-n2; j++) 
			printf("%d ",ans[i][j]);
		printf("\n");
	}
}