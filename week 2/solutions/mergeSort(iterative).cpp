#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

void merge(ll low,ll mid,ll high,ll A[])
{
	ll B[high+1];
	ll i=low,k=low,j=mid+1;
	while(i<=mid && j<=high)
	{
		if(A[i]<=A[j])
		{
			B[k]=A[i];
			i++;
			k++;
		}
		else
		{
			B[k]=A[j];
			j++;
			k++;
		}
	}
	for(;i<=mid;i++)
	{
		B[k]=A[i];
		k++;
	}
	for(;j<=high;j++)
	{
		B[k]=A[j];
		k++;
	}
	for(ll i=low;i<=high;i++)
	{
		A[i]=B[i];
	}
}

void mergeSort(ll A[],ll n)
{
ll p;
for(p=2;p<=n;p*=2)
{
	for(ll i=0;i+p-1<n;i+=p)
	{
		ll low=i,high=i+p-1,mid=(low+high)/2;
		merge(low,mid,high,A);
	}
}
if(p/2<n)
{
merge(0,(p/2)-1,n-1,A);
}
}




int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll A[6]={77,22,-2,21,4,11};
mergeSort(A,6);
for(ll i=0;i<6;i++)
{
	cout<<A[i]<<" ";
}
cout<<endl;
return 0;
}
