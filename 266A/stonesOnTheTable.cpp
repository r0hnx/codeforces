#include "iostream"
#include "string"

using namespace std;

int main()
{
    int n, sum =0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n-1; i++)
    {
        int ctr = 0;
        if(s[i] == s[i+1])
            ctr++;
        sum += ctr;
    }
    cout<<sum;
    return 0;
}

