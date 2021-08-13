#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll binarySearch(ll arr[],ll up,ll low,ll num)
{
	static int pos=-1;
	if(up>low)
	return pos;
	ll mid = (up+low)/2;
	if(arr[mid]==num)
	return mid;
	else if(arr[mid]>num)
	{
		return  binarySearch(arr,up,mid-1,num);
	}
	else
	{
		return binarySearch(arr,mid+1,low,num);
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll arr[7]={1,2,3,4,5,20,135};
cout<<binarySearch(arr,0,6,111)<<endl;
}

