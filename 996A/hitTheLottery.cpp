#include "iostream"
using namespace std;

/*
hitTheLottery
GNU G++ 11 5.1.0
*/

int main()
{
    int n, c(0);
    cin >> n;
    c += n/100;
    n %= 100;
    c += n/20;
    n %= 20;
    c += n/10;
    n %= 10;
    c += n/5;
    n %= 5;
    c += n;
    cout << c;
    return 0;
}