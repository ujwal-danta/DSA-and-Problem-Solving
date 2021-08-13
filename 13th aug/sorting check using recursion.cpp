#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
bool check(ll arr[],ll i,ll len)
{
	static bool ans=true;
	if(i==len)
	return ans;
	if(arr[i]>arr[i+1])
	{
		ans=false;
	}
	return  check(arr,i+1,len);
	
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
cout<<check(arr,0,n-1)<<endl;
return 0;
}

