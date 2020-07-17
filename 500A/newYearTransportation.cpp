#include "iostream"
#define int long long
using namespace std;

/*
newYearTransportation
GNU G++ 11 5.1.0
*/

main()
{
    int n, t, x(1);
    cin >> n >> t;
    int a[n];
    for (int i = 1; i < n; i++) cin >> a[i];
    while (x < t) x += a[x];
    cout << (x==t ? "YES" : "NO");
    return 0;
}