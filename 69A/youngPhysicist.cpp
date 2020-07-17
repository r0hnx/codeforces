#include "iostream"
typedef long long LL;

using namespace std;
int main()
{
    int n;
    cin >> n;
    LL a = 0,b = 0,c = 0;
    LL a1,a2,a3;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> a2 >> a3;
        a += a1;
        b += a2;
        c += a3;
    }
    if(a == 0 && b == 0 && c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
