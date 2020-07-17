#include "string"
#include "iostream"
#include "unordered_set"
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<char> name;
    int c = 0;
    for(auto ch : s)
    {
        if (name.find(ch) == name.end())
        {
            c++;
        }
        name.insert(ch);
    }

    if (c%2 == 0)
    {
        cout<< "CHAT WITH HER!";
    }
    else
    {
        cout<< "IGNORE HIM!";
    }
    
    
    
    return 0;
}
