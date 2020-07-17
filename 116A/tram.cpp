#include<iostream>

using namespace std;

int main()
{
    int n, in, out, max, tram = 0;
    max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>out>>in;
        tram -= out;
        tram += in;
        if(tram > max){
            max = tram;
        }
    }
    cout<<max;
    return 0;
}
