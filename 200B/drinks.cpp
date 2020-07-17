#include "iostream"
using namespace std;

/*
drinks
GNU G++ 11 5.1.0
*/

int main()
{
    int n, p, t(0);
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        t += p;
    }
    cout<<static_cast<double>(t)/static_cast<double>(n);
    return 0;
}