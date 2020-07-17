#include "iostream"
using namespace std;

/*
newYearCandles
GNU G++ 11 5.1.0
*/

int main()
{
    int a, b, c(0);
    cin >> a >> b;
    c = a;
    while (a >= b)
    {
        c += a/b;
        a = (a/b)+(a%b);
    }
    cout << c;
    return 0;
}