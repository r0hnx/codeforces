#include "iostream"
using namespace std;

/*
vasyaTheHipster
GNU G++ 11 5.1.0
*/

int main()
{
    int a, b, c(0), d(0);
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        a--;
        b--;
        c++;
    }
    d += a ? a/2 : b/2;
    cout << c << " " << d;
    return 0;
}