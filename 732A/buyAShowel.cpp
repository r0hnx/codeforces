#include "iostream"
using namespace std;

/*
buyAShowel
GNU G++ 11 5.1.0
*/

int main()
{
    int k, r, i(1);
    cin >> k >> r;
    while (true)
    {
        if ((k * i) % 10 == 0 || (k * i - r) % 10 == 0)
        {
            cout << i;
            break;
        }
        i++;       
    }    
    return 0;
}