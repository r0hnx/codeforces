#include "iostream"
using namespace std;

/*
beautifulYear
GNU G++ 11 5.1.0
*/

int main()
{
    int n;
    cin >> n;
    while (true)
    {
        n++;
        int a = n/1000;
        int b = n/100 % 10;
        int c = n/10 % 10;
        int d = n%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d) break;
    }
    cout<<n;
    return 0;
}