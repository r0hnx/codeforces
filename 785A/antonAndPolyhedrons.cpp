#include "iostream"
using namespace std;

/*
antonAndPolyhedrons
GNU G++ 11 5.1.0
*/

int main()
{
    int n, c(0);
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if(s[0] == 'T') c+= 4;
        else if(s[0] == 'C') c+=6;
        else if(s[0] == 'O') c+=8;
        else if(s[0] == 'D') c+=12;
        else c+=20;
    }
    cout<<c;
    return 0;
}