#include <stdio.h>

int pair[101][101];
int visit[101];
int n, m;

int dfs(int idx)
{
	visit[idx] = 1;

	int ret = 0;
	for (int i = 1; i <= n; i++)
		if (pair[idx][i] == 1 && visit[i] == 0)
			ret += dfs(i);
    
	return ret + 1;
}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		pair[x][y] = pair[y][x] = 1;
	}
	printf("%d\n", dfs(1) - 1);

	return 0;
}