#include "iostream"
using namespace std;

/*
newYearAndHurry
GNU G++ 11 5.1.0
*/

int main()
{
    int n, k, t(0), c(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {        
        t += (i*5);
        if(t <= (240-k)) c++;
        else break;  
    }
    cout<<c;
    return 0;
}