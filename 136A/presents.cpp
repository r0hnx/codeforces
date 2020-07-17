#include "iostream"
using namespace std;

/*
presents
GNU G++ 11 5.1.0
*/

int main()
{
    int n, m;
    cin >> n;
    int l[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        l[m] = i;
    }
    cout<<l[1];
    for (int i = 2; i <= n; i++)
        cout<<" "<<l[i];
    return 0;
}