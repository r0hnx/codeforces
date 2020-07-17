#include "iostream"
using namespace std;

/*
expression
GNU G++ 11 5.1.0
*/

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a+b+c, max(a*b*c, max(a*b+c, max(a+b*c, max(a*(b+c),(a+b)*c)))));
    return 0;
}