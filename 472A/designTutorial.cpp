#include "iostream"
#include "math.h"
using namespace std;

/*
designTutorial
GNU G++ 11 5.1.0
*/

bool prime(int n)
{
    for (int i = 2; i <= (int)sqrt(n); i++)
        if (n%i == 0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (!prime(i) && !prime(n-i))
        {
            cout<< i << ' ' << n-i;
            break;
        }
    }
    return 0;
}