#include<iostream>
using namespace std;
int main()
{
    int k, n, taxi=0, s[5] = {0};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        s[k]++;
    }
    taxi += s[4]; // handle 4's
    taxi += s[3]; // handle 3's
    
    taxi += (s[2]/2 + s[2]%2); //handle 2's
    s[2] = s[2]%2;
    
    s[1] = s[1] - s[3];
    s[1] = s[1] < 0 ? 0 : s[1];
    s[1] = s[1] - 2*s[2];
    if(s[1] > 0) {
        taxi += s[1]/4; // handle 1's
        if(s[1]%4 > 0) taxi++;
    }
    cout<<taxi;
    return 0;
}