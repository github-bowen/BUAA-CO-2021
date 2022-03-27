#include <stdio.h>
int m1, n1;  // m1: row of arr1,   n1: column of arr1
int m2, n2;  // m2: row of arr2,   n2: column of arr2
int arr1[10][10], arr2[10][10];
int res[10][10];

int main() {
	int i, j;
	int k, l;
	scanf("%d %d %d %d", &m1, &n1, &m2, &n2);
	for(i = 0; i < m1; i++)
		for(j = 0; j < n1; j ++)
			scanf("%d", &arr1[i][j]);
	for(k = 0; k < m2; k++)
		for(l = 0; l < n2; l++)
			scanf("%d", &arr2[k][l]);
	
	// do convolution
	for(i = 0; i <= m1 - m2; i++)
		for(j = 0; j <= n1 - n2; j++)
			// now arr2(the convolution core) is fixed
			// do res[i][j] = sigma( arr1[i + k][j + l] * arr2[k][l] )
			// sigma for k, l; i, j are fixed
			for(k = 0; k < m2; k++)
				for(l = 0; l < n2; l++)
					res[i][j] += arr1[i + k][j + l] * arr2[k][l];
	// convolution end
	
	for(i = 0; i <= m1 - m2; i++) {
		for(j = 0; j <= n1 - n2; j++)
			printf("%d ", res[i][j]);
		printf("\n");
	}
	return 0;
}