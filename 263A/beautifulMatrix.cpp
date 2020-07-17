#include "iostream"
#include "cmath"

using namespace std;
int main()
{
    int x = 0;
    int move = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                move = abs(i-2)+abs(j-2);
            }
            
        }
    }
    cout<< move;
    return 0;
}
