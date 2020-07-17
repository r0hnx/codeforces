#include "iostream"
using namespace std;

/*
arrivalOfTheGeneral
GNU G++ 11 5.1.0
*/

int main()
{
    int n, mini = 0, maxi = 0, a;
    cin>>n>>a;
    int max = a, min = a;
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        if(a > max) {
            max = a;
            maxi = i;
        }
        if(a <= min) {
            min = a;
            mini = i;
        }
    }
    int steps = ((n - 1 - mini) + maxi);
    cout << steps - (mini < maxi) ? 1 : 0;
    return 0;
}