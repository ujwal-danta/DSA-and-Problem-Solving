#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll power(ll b,ll p)
{
	if(p==0)
	return 1;
	ll ans=power(b,p/2);
	ans = (ans*ans)%MOD;
    if(p&1)
	return (b*ans)%MOD;
	else
	return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<power(12,21)<<endl;
return 0;
}

