#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    
    scanf("%d", &n);
    int temp[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &temp[i]);
    }
    sort(temp, temp + n);
    for(int i=0; i<n; i++) {
        printf("%d\n", temp[i]);
    }
    return 0;
}