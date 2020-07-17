#include "iostream"
using namespace std;

/*
dubstep
GNU G++ 11 5.1.0
*/

int main() {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            c++;
            if (i!=0 && i!=s.length()-3 && c < 2) cout<<" ";
            i+=2;
            continue;
        } else {
            c = 0;
            cout<<s[i];
        }
    }
    return 0;
}