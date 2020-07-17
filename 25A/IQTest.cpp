#include "iostream"
using namespace std;

/*
IQTest
GNU G++ 11 5.1.0
*/

int main()
{
    int n, p, e(0), even, odd;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin>>p;
        if (p%2 == 0)
        {
            e++;
            even = i;
        } else {
            e--;
            odd = i;
        }
    }
    cout << ( e < 0 ? even : odd);
    return 0;
}