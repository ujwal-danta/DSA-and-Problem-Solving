#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

/*


// time complexity - ( size of arr 1 * log (size of arr2) )
void merge(vector<ll>& v1,vector<ll>& v2)
{
	ll n = v1.size();
	for(ll i=0;i<n;i++)
	{
		if(v1[i]>v2[0])
		{
			swap(v1[i],v2[0]);
			sort(v2.begin(),v2.end());
		}
	
	}
} 


*/




//using the gap algorithm
//time complexity - (log (m+n) base 2) * (n+m) 

void merge(vector<ll>& v1,vector<ll>& v2)
{
	ll n = v1.size();
	ll m = v2.size();
	ll gap = ceil((n+m)/2);
	while(gap>1)
	{
	ll i;
	for(i=0;i+gap<n;i++)
	{
		if(v1[i]>v1[i+gap])
		swap(v1[i],v1[i+gap]);
	}
	for(ll j = gap > n ? gap - n : 0 ; j<m && i<n;j++,i++)
	{
		if(v1[i]>v2[j])
		swap(v1[i],v2[j]);
	}
	for(ll j=0;j+gap<m;j++)
	{
		if(v2[j]>v2[j+gap])
		swap(v2[j],v2[j+gap]);
	}
	gap=ceil(gap/2);
} 

}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<ll>arr1={12,15,18,21};
vector<ll>arr2={4,6,7,20};
merge(arr1,arr2);
for(ll i=0;i<arr1.size();i++)
{
	cout<<arr1[i]<<" ";
}
for(ll i=0;i<arr2.size();i++)
{
	cout<<arr2[i]<<" ";
}
cout<<endl;
return 0;
}

