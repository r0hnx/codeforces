The registration confirms that you:

* have read the contest rules  by the links http://codeforces.com/blog/entry/456 and http://codeforces.com/blog/entry/4088
* will not violate the rules described on http://codeforces.com/blog/entry/456 and/or http://codeforces.com/blog/entry/4088
* will not communicate with other participants, share ideas of solutions and hacks
* will not use third-party code, except stated in http://codeforces.com/blog/entry/8790
* will not attempt to deliberately destabilize the testing process and try to hack the contest system in any form
* will not use multiple accounts and will take part in the contest using your personal and the single account.

# Resource

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<set>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
 
using namespace std;
 
/*------------------------------Data types in C++-----------------------------*/
typedef  long long int ll;
 
/*--------------------------------Containers----------------------------------*/
//Deque
#define Di deque<int>
#define Dlli deque<long long int>
#define Dc deque<char>
#define Df deque<float>
//List
#define Li list<int>
#define Llli list<long long int>
#define Lc list<char>
#define Lf list<float>
//Queue
#define Qi queue<int>
#define Qlli queue<long long int>
#define Qc queue<char>
#define Qf queue<float>
//Set
#define Si set<int>
#define Slli set<long long int>
#define Sc set<char>
#define Sf set<float>
//Stack
#define Ki stack<int>
#define Klli stack<long long int>
#define Kc stack<char>
#define Kf stack<float>
//Vector
#define Vi vector<int>
#define Vlli vector<long long int>
#define Vc vector<char>
#define Vf vector<float>
 
/*-------------------------Miscllaneous-----------------------------*/
 
#define rep(a,n) for(int i=0;i<n;++i)
#define f(a,i,n,k) for( int a=i;a<n;a=a+k)
#define s(a,n)  sort(a,a+n)
 
#define si(a) scanf("%d",&a)
#define sc(a) scanf("%c",&a)
#define sf(a) scanf("%f",&a)
#define sd(a) scanf("%lf",&a)
#define slli(a) scanf("%l64d",&a)
#define ss(a) scanf("%s",&a)
 
#define pi(a) printf("%d",a)
#define pc(a) printf("%c",a)
#define pf(a) printf("%f",a)
#define pd(a) printf("%lf",a)
#define plli(a) printf("%l64d",a)
#define ps(a) printf("%s",a)
#define p puts
#define debug(a) cout<<a<<endl
#define w while
 
#define pb push_back
#define mp make_pair
#define bs binary_search
#define ins insert
#define it iterator
 
#define MAX 100005