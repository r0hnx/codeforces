#include "iostream"
using namespace std;

/*
translation
GNU G++ 11 5.1.0
*/

int main()
{
    string s, t;
    cin >> s >> t;
    int size = s.size()-1;
    for (int i = 0, j = size; i <= size, j >= 0; i++, j--)
        if(s[i] != t[j]){ cout << "NO"; return 0;}
    cout<<"YES";
    return 0;
}