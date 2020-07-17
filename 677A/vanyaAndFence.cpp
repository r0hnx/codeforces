#include "iostream"
using namespace std;

/*
vanyaAndFence
GNU G++ 11 5.1.0
*/

int main()
{
    int n, h, k, c = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        k <= h ? c++ : c+=2;
    }
    cout<<c;
    return 0;
}