#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll maxSubsequenceSum(ll arr[],ll n)
{
	ll maxsum = INT_MIN , currsum = 0;
	for(ll i=0;i<n;i++)
	{
		currsum+=arr[i];
		maxsum = max(maxsum,currsum);
		if(currsum<0)
		currsum=0;
	}
	return maxsum;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll arr[8] = {-1,-3,2,-1,1,-1,13,4};
cout<<maxSubsequenceSum(arr,8)<<endl;
return 0;
}

