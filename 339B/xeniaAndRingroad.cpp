#include "iostream"
using namespace std;

/*
xeniaAndRingroad
GNU G++ 11 5.1.0
*/

int main()
{
    int n, m, step(0), a, b;
    cin >> n >> m >> a;
    while (--m)
    {
        cin >> b;
        if (a > b)
            step++;
        a = b;
    }
    cout<<((static_cast<long long>(n)*static_cast<long long>(step))+a-1);
}