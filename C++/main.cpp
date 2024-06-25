#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#ifdef ONLINE_JUDGE
#define DISABLE_STACK_SIZE_CHANGE
#endif
#ifndef DISABLE_STACK_SIZE_CHANGE
#include <sys/resource.h>
#endif
typedef long long ll;
const int MOD = 1000000007;
#define pb push_back
#define ff first
#define ss second
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(ll i=(a);i<(b);i++)
#define print(x) for(auto it:(x)) cout<<(it)<<" "; cout<<endl;

void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    loop(i,0,n)cin>>v[i];
    vector<ll>a{INT_MAX},b{INT_MAX};
    
    loop(i,0,n)
    {
        int x=min(a.back(),b.back());
        int y=max(a.back(),b.back());
        if(v[i]<=x)
        {
            if(x==a.back())a.pb(v[i]);
            else b.pb(v[i]);
        }
        else if(v[i]>y)
        {
             if(x==a.back())a.pb(v[i]);
            else b.pb(v[i]);
        }
        else 
        {
             if(y==a.back())a.pb(v[i]);
            else b.pb(v[i]);
        }
    }
    ll count1=0,count2=0;
    if(a.size()>1)loop(i,0,a.size()-1){if(a[i]<a[i+1])count1++;}
    if(b.size()>1)loop(i,0,b.size()-1){if(b[i]<b[i+1])count2++;}
    debug(a,b,count2,count1);
    cout<<count1+count2<<nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef DISABLE_STACK_SIZE_CHANGE
    rlimit rlim;
    if (getrlimit(RLIMIT_STACK, &rlim) != 0) { return 1; }
    rlim.rlim_cur = 1024 * 1024 * 1024;
    if (setrlimit(RLIMIT_STACK, &rlim) != 0) { return 2; }
#endif
    ll t=1;cin >> t;
    while (t--)
        {
            
            solve();}
}
