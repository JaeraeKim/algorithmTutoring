#include <cstdio>
#include <queue>
using namespace std;

int main(void)
{
	int c = '0';
	priority_queue<int> q;

	while (c != '\n') {
		scanf("%c", &c);
		if (c >= '0' && c <= '9')
			q.push((int)(c - 48));
	}
	while(!q.empty()) {
		printf("%d", (int)q.top());
		q.pop();
	}
	return 0;
}