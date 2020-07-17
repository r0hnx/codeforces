#include "iostream"
using namespace std;

/*
kefaAndFirstSteps
GNU G++ 11 5.1.0
*/

int main()
{
    int n, c = 1, max = 0;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++)
        cin >> list[i];
    for (int i = 0; i < n-1; i++)
    {
        if(list[i] > list[i+1])
        {
            if(c > max) max = c;
            c = 1;
        } else c++;
    }
    if (c > max) max = c;
    cout<<max;
    return 0;
}