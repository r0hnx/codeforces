#include "iostream"
#include "algorithm"
using namespace std;

/*
word
GNU G++ 11 5.1.0
*/

int main()
{
    int l = 0,u = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i])) l++;
        else u++;
    }
    if(u>l) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower); 
    cout<<s;
    return 0;
}