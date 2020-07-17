#include "iostream"
#include "algorithm"
using namespace std;

/*
cutRibbon
GNU G++ 11 5.1.0
*/

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n+1];
    dp[0] = 0;
    fill(dp+1, dp+(n+1), -1e4);
    for (int i = 1; i <= n; i++)
    {
        if (i >= a) dp[i] = max(dp[i], dp[i-a]+1);
        if (i >= b) dp[i] = max(dp[i], dp[i-b]+1);
        if (i >= c) dp[i] = max(dp[i], dp[i-c]+1);
    }
    cout << dp[n];
    return 0;
}