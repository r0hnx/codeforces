#include "iostream"
#include "math.h"
using namespace std;

/*
pheonixAndBalance
GNU G++ 11 5.1.0
*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k(0), n;
        cin >> n;
        int sum = pow(2,n);
        for (int i = 1; i < n/2; i++)
            sum += pow(2,i);
        for (int i = n/2; i < n; i++)
            k += pow(2,i);
        cout << sum-k << endl;
    }
    return 0;
}