#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void reverse(ll arr[],ll s,ll e)
{
	if(s>e)
	return ;
	ll temp=arr[s];
	arr[s]=arr[e];
	arr[e]=temp;
	return reverse(arr,s+1,e-1);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll arr[5]={1,2,3,4,5};
reverse(arr,0,4);
for(ll i=0;i<5;i++)
{
	cout<<arr[i]<<endl;
}
return 0;
}

