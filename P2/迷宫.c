#include <stdio.h>
int n, m;  // n = row, m = column
int puzzle[9][9];  // 1: passable,  0: barriers or flag(has gone) !!!
int start_row, start_col, end_row, end_col;
int cnt;

void dfs(int i, int j) {
	if(i == end_row && j == end_col) {
		cnt++;
		return;
	}
	if(puzzle[i - 1][j]) {
		puzzle[i - 1][j] = 0;
		dfs(i - 1, j);
		puzzle[i - 1][j] = 1;
	}
	if(puzzle[i + 1][j]) {
		puzzle[i + 1][j] = 0;
		dfs(i + 1, j);
		puzzle[i + 1][j] = 1;
	}
	if(puzzle[i][j - 1]) {
		puzzle[i][j - 1] = 0;
		dfs(i, j - 1);
		puzzle[i][j - 1] = 1;
	}
	if(puzzle[i][j + 1]) {
		puzzle[i][j + 1] = 0;
		dfs(i, j + 1);
		puzzle[i][j + 1] = 1;
	}
	return;
}



int main() {
	int t;
	int i, j;
	scanf("%d %d", &n, &m);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= m; j++) {
			scanf("%d", &t);
			puzzle[i][j] = !t;
		}
	}
	n++;
	m++;
	scanf("%d %d %d %d", &start_row, &start_col, &end_row, &end_col);
	dfs(start_row, start_col);
	printf("%d", cnt);
	return 0;
}
