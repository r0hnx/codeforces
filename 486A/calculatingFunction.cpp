#include "iostream"
using namespace std;

/*
calculatingFunction
GNU G++ 11 5.1.0
*/

int main()
{
    long long int n;
    cin >> n;
    cout<< (n%2 == 0 ? n/2 : ((-1) * ((n+1)/2)));
    return 0;
}