#include "iostream"
using namespace std;

/*
inSearchOfAnEasyProblem
GNU G++ 11 5.1.0
*/

int main()
{
    int n, x;
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> x; 
        if(x == 1)
        {   
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}