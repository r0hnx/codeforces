#include<iostream>
using namespace std;
int main()
{
    unsigned long long int k,n,w,cost = 0;
    cin>>k>>n>>w;
    cost = (w*(w+1)*k)/2;
    if(n >= cost) cout<<0;
    else cout<< (cost-n);
    return 0;
}
