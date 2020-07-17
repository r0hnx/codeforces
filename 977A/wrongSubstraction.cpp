#include "iostream"
using namespace std;

/*
wrongSubstraction
GNU G++ 11 5.1.0
*/

int main()
{
    long long num;
    int n;
    cin >> num >> n;
    while (n)
    {
        num%10 == 0 ? num /= 10 : num--;
        n--;
    }
    cout<<num;
    return 0;
}