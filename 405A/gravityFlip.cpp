#include "iostream"
#include "algorithm"
using namespace std;

/*
gravityFlip
GNU G++ 11 5.1.0
*/

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    return 0;
}