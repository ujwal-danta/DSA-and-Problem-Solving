#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	unordered_map<ll,ll>m;
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		m[a]++;
	}
	ll ms=m.size();
	auto it=m.begin();
	if(ms==1)
	cout<<0<<endl;
		else if(ms==2)
		{
			auto temp=m.begin();
			ll f=temp->second;
			temp++;
			ll s=temp->second;
			if(f==1 &&s==1)
			{
				cout<<0<<endl;
			}
			else
			{
			ll ma=0;
			for(;it!=m.end();it++)
			{
				ma=max(ma,it->second);
			}
			cout<<n-ma<<endl;
			}
		}
		else
		{
			ll ma=0;
			for(;it!=m.end();it++)
			{
				ma=max(ma,it->second);
			}
			if(ma==1)
			cout<<n-2<<endl;
			else
			cout<<n-ma<<endl;
		}
}
return 0;

}

