#include "iostream"
#include "map"
using namespace std;

/*
registrationSystem
GNU G++ 11 5.1.0
*/

int main()
{
    int n;
    cin >> n;
    map<string, int> db;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if(db.count(s) == 0)
        {
            cout << "OK" << endl;
            db[s]++;
        }
        else
        {
            cout << s << db[s] << endl;
            db[s]++;
        }
    }
    return 0;
}