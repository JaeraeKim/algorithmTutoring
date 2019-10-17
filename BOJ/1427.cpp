#include <stdio.h>

int temp[2000002];
int main(void)
{
	int n, num;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);
		temp[num + 1000000]++;
	}
	for (int i = 0; i < 2000002; i++) {
		if (temp[i] == 0)
			continue;
		printf("%d\n", i - 1000000);
	}
	return 0;
}