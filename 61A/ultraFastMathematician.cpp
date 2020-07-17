#include "iostream"
using namespace std;

/*
ultraFastMathematician
GNU G++ 11 5.1.0
*/

int main()
{
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < a.length(); i++)
        a[i] == b[i] ? cout<<0 : cout<<1;
    return 0;
}