#include "iostream"
using namespace std;

/*
choosingTeams
GNU G++ 11 5.1.0
*/

int main()
{
    int n, k, p(0);
    cin >> n >> k;
    for (int a, i = 0; i < n; i++)            
        if(cin >> a, a+k <= 5) p++;    
    cout << p/3 << endl;
    return 0;
}