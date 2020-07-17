#include "iostream"
using namespace std;

/*
mishkaAndGame
GNU G++ 11 5.1.0
*/

int main()
{
    int n, x(0), y(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a > b) x++;
        else if(b > a) y++;
    }
    if(x == y) cout << "Friendship is magic!^^" << endl;
    else cout << (x > y ? "Mishka" : "Chris") << endl;
    return 0;
}