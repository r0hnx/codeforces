#include "iostream"
using namespace std;

/*
hulk
GNU G++ 11 5.1.0
*/

int main()
{
    int n;
    cin >> n;
    cout<<"I hate ";
    for (int i = 1; i < n; i++)
        i%2==0 ? cout<<"that I hate " : cout<<"that I love ";
    cout<<"it";
    return 0;
}