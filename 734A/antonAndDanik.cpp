#include "iostream"
using namespace std;

/*
antonAndDanik
GNU G++ 11 5.1.0
*/

int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    char s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        s == 'A' ? a++ : d++;
    }
    a==d ? cout<<"Friendship" : a>d ? cout<<"Anton" : cout<<"Danik";
    return 0;
}