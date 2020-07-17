#include "iostream"
using namespace std;

int main()
{
    string w;
    bool c = true;
    cin >> w;
    for (int i = 1; i < w.length(); i++)
    {
        if(islower(w[i])) c = false;
    }
    if(c)
    {
        if(islower(w[0])) w[0] = toupper(w[0]);
        else w[0] = tolower(w[0]);
        for (int i = 1; i < w.length(); i++)
        {
            w[i] = tolower(w[i]);
        }
    }
    cout << w << endl;
    return 0;
}
