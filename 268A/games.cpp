#include "iostream"
using namespace std;

/*
games
GNU G++ 11 5.1.0
*/

int main()
{
    int n, c(0);
    cin >> n;
    int h[n], g[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> g[i];
        for (int j = 0; j < i; j++)
        {
            if (h[j] == g[i])
                c++;
            if (h[i] == g[j])
                c++;
        }
    }
    cout << c;
    return 0;
}