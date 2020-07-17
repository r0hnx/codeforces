#include "iostream"
using namespace std;

/*
divisibilityProblem
GNU G++ 11 5.1.0
*/

int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(a%b == 0) {
            cout << 0 << endl;
        } else if (a < b) {
            cout << b-a << endl;
        } else {
            cout<< b - (a%b) << endl;
        }
    }
    return 0;
}