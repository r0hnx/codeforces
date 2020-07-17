#include "iostream"
using namespace std;

/*
gameWithSticks
GNU G++ 11 5.1.0
*/

int main()
{
    int n, m;
    cin >> n >> m;
    cout<<((n < m ? n : m)%2 == 0 ? "Malvika" : "Akshat"); 
    return 0;
}