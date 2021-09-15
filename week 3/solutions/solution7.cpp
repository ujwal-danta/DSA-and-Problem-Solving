#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll minimise(int arr[],int n,int k)
{
	sort(arr,arr+n);
	ll res = arr[n-1]-arr[0];
    ll maxx=0,minn=0;
    for(ll i=1;i<n;i++)
    {
    	if(arr[i]>=k)
    	{
    	maxx = max(arr[n-1]-k,arr[i-1]+k);
    	minn = min(arr[0]+k,arr[i]-k);
    	res=min(res,maxx-minn);
		}
	}
	return res;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll arr[6]={3,5,1,7,12,8};
cout<<minimise(arr,6,3)<<endl;
return 0;
}

