#include "iostream"
#include "algorithm"
using namespace std;

/*
amusingJoke
GNU G++ 11 5.1.0
*/

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    a += b;
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());
    cout<<(a==c?"YES":"NO");
    return 0;
}