#include "iostream"
#include "math.h"
#define ll unsigned long long
using namespace std;

/*
T-Primes
GNU G++ 11 5.1.0
*/

const int N = 1e6;
bool prime[N];

int main()
{
    int n;
    scanf("%I64d", &n);
    ll a, x;

    prime[0] = prime[1] = true;
    for (int i = 2; i * i <= N; i++)
        if (!prime[i])
            for (int j = i * i; j <= N; j += i)
                prime[j] = true;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        x = (ll)sqrt(a);
        cout << ((x * x) == a && !prime[x] ? "YES\n" : "NO\n");
    }

    return 0;
}