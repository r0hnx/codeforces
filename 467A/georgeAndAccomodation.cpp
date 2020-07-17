#include "iostream"
using namespace std;

/*
georgeAndAccomodation
GNU G++ 11 5.1.0
*/

int main()
{
    int n, p ,q, c = 0;
    cin >> n;
    while(n != 0){
        cin >> p >> q;
        if(q-p>1) c++;
        n--;
    }
    cout << c;
    return 0;
}