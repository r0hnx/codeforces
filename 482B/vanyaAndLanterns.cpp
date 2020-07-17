#include "iostream"
#include "algorithm"
using namespace std;

/*
vanyaAndLanterns
GNU G++ 11 5.1.0
*/

int main()
{
    int n, l;
    cin >> n >> l;
    double num[n+1], sum[n+1];
    for (int i = 1; i <= n; i++)
        cin >> num[i];
    num[0] = 0, num[n+1] = l;
    sort(num, num+n+1);
    for (int i = 1; i < n; i++)
        sum[i] = (num[i+1] - num[i])/2.0;
    sum[0] = (num[1] - num[0]);
    sum[n] = (num[n+1] - num[n]);
    sort(sum, sum+n+1);
    double ans = sum[n]*1.0;
    printf("%.91f", ans);
    return 0;
}