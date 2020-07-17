#include "iostream"
#include "algorithm"
using namespace std;

/*
puzzles
GNU G++ 11 5.1.0
*/

int main()
{
    int n, m, l[1000];
    cin>>n>>m;
    for (int i = 0; i < m; i++)
        cin>>l[i];
    sort(l, l+m);
    int min = l[n-1] - l[0], t;
    for (int i = 1; i <= m-n; i++)
    {
        t = l[i+n-1] - l[i];
        if (t < min) min = t;
    }
    cout<<min;
    return 0;
}