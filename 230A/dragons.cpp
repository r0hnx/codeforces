#include "iostream"
#include "algorithm"
using namespace std;

/*
dragons
GNU G++ 11 5.1.0
*/

int main()
{
    int s, n;
    bool die = false;
    cin >> s >> n;
    pair <int, int> p[n];
    for (int i = 0; i < n; i++)
        cin>>p[i].first>>p[i].second;
    sort(p, p+n);
    for (int i = 0; i < n; i++) 
       (s > p[i].first) ? s += p[i].second : die = true;
    cout<<(die?"NO":"YES");
    return 0;
}