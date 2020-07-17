#include "iostream"
#include "algorithm"
using namespace std;

/*
iWannaBeTheGuy
GNU G++ 11 5.1.0
*/

int main()
{
    int n, p ,q, t;
    cin >> n;
    int c[n+1] = {0};
    c[0] = 1;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin>>t;
        c[t] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin>>t;
        c[t] = 1;
    }
    sort(c, c+n+1);
    c[0] == 1 ? cout<<"I become the guy." : cout<<"Oh, my keyboard!";
    return 0;
}