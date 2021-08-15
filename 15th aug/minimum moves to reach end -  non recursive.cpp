#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
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
ll ans[n];
ans[0]=0;
memset(ans,0,sizeof(ans));
for(ll i=1;i<n;i++)
{
	for(ll j=0;j<n;j++)
	{
		if(j>=i)
		{
			cout<<-1<<endl;
			return 0;
		}
		if(arr[j]+j>=i)
		{
			ans[i]=ans[j]+1;
			break;
		}
	}
}
cout<<ans[n-1]<<endl;
return 0;

}

