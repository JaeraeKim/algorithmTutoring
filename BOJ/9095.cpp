#include <iostream>
using namespace std;
int num[12];

void tothree(int n)
{
	if (n == 1) {
		num[n] = num[0];
		return;
	}
	if (n == 2) {
		tothree(1);
		num[n] = num[1] + num[0];
		return;
	}
	if (num[n] != 0) {
		return;
	}

	tothree(n - 1);
	tothree(n - 2);
	tothree(n - 3);

	num[n] = num[n - 1] + num[n - 2] + num[n - 3];
}

int main()
{
	int t, n, i;

	scanf("%d", &t);

	num[0] = 1;

	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		tothree(n);
		printf("%d\n", num[n]);
	}

	return 0;
}