#include "iostream"
#include "vector"
#define int long long
#define N 1e5+1
using namespace std;
/*
boredom
GNU G++ 11 5.1.0
*/

signed main()
{
    int n;
    cin >> n;

    vector<int> dp(N, 0);

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        dp[x]++;
    }

    for (int i = 2; i <= N; i++)
        dp[i] = max(dp[i-1], dp[i-2]+dp[i]*i);

    cout << dp[N];
    return 0;
}