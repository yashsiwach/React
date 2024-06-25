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
	string s;cin>>s;
	ll n=s.size();
	vector<ll>dp(n+1,0);
	dp[0]=(s[0]-'0')%4==0?1:0;

	for(ll i=1;i<n;i++)
	{
		if((s[i]-'0')%4==0)dp[i]=dp[i]+1;
		string str;
		str.pb(s[i-1]);str.pb(s[i]);
		ll num=stoi(str);
		if(num%4==0)dp[i]+=i;
		dp[i]+=dp[i-1];
		
		debug(dp[i],num);
	}
	debug(dp);
	ll ans=accumulate(all(dp),0LL);
	cout<<ans<<nl;
	
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
    ll t=1;
    while (t--)solve();
}
