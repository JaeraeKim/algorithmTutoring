#include <cstdio>
#include <queue>
using namespace std;

int main(void)
{
    int n;
    priority_queue<int> pq;
    
    scanf("%d", &n);
    int temp;
    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        pq.push(-temp);
    }
    for(int i=0; i<n; i++) {
        printf("%d\n", -pq.top());
        pq.pop();
    }
    return 0;
}