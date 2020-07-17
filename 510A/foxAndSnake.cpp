#include "iostream"
using namespace std;

/*
foxAndSnake
GNU G++ 11 5.1.0
*/

int main()
{
    int n, m;
    bool s = true;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i%2 == 0) cout << "#";
            else
            {
                if( !s && j == m-1) cout << "#";
                else if(s && j == 0) cout << "#";
                else cout<< ".";
            } 
        }
        if(i%2 == 0) s = !s;
        cout<< endl;
    }
    return 0;
}