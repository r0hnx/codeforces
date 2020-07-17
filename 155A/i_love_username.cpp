#include "iostream"
using namespace std;

/*
i_love_username
GNU G++ 11 5.1.0
*/

int main()
{
    int n, min, max, c(0), t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (i == 0) min = max = t;
        else {
            if (t > max) {
                max = t;
                c++;
            } else if (t < min) {
                min = t;
                c++;
            }            
        } 
    }
    cout << c;
    return 0;
}