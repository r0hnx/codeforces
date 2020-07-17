#include "iostream"
using namespace std;

/*
magnets
GNU G++ 11 5.1.0
*/

int main()
{
    int n, num = 0;
    cin >> n;
    char in[3], c = '\0';
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if(in[0] != c) num++;
        c = in[0];
    }
    cout<<num;
    return 0;
}