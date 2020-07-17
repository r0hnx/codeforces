#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, sum=0, t=0, coins=0;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin>>num[i]; 
        sum += num[i];  
    }
    sort(num, num+n);
    for (int i = n-1; i >= 0 && t <= sum/2 ; i--)
    {
        t += num[i];
        coins++;
    }
    cout << coins << endl;
    return 0;
}