#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	priority_queue< pair<int, int> > q;
	int result[5];
	int score = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &score);
		q.push(make_pair(score, i + 1) );
	}

	int total = 0;
	for (int i = 0; i < 5; i++) {
		total += q.top().first;
		result[i] = q.top().second;
		q.pop();
	}
	printf("%d\n", total);
	sort(result, result + 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", result[i]);
	}

	return 0;
}