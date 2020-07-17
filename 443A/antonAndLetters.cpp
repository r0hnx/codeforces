#include "iostream"
#include "set"
using namespace std;

/*
antonAndLetters
GNU G++ 11 5.1.0
*/

int main()
{
    set<char> c;
    string s;
    getline(cin, s);
    for (int i = 1; i < s.length(); i+=3)
        if(s[i] != '}') 
            c.insert(s[i]);
    cout<<c.size();
    return 0;
}