#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll minMoves(ll arr[],ll n,ll curr)
{
	if(curr>=n-1)
	return 0;
	ll ms = arr[curr];
	ll mj=INT_MAX;
	while(ms>0)
	{
		mj=min(mj,1+minMoves(arr,n,curr+ms));
		ms=ms-1;
	}
return mj;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)
{
	cin>>arr[i];
}
ll ans=minMoves(arr,n,0);
if(ans==INT_MAX)
cout<<-1<<endl;
else
cout<<ans<<endl;
return 0;
}
