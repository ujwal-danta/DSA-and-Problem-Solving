#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void merge(ll A[],ll low,ll mid,ll high)
{
ll B[high+1];
ll i=low,j=mid+1,k=low;
while(i<=mid && j<=high)
{
if(A[low]>A[high])
{
	B[k]=A[i];
	k++;
	i++;
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
	B[i]=A[i];
}
for(;j<=high;j++)
{
	B[j]=A[j];
}
for(ll i=low;i<=high;i++)
{
A[i] = B[i];
}

}

void mergeSort(ll A[],ll low,ll high)
{
if(low<high)
{
	ll mid=(low+high)/2;
	mergeSort(A,0,mid);
	mergeSort(A,mid+1,high);
	merge(A,low,mid,high);
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
ll A[6]={5,71,2,-21,22,0};
mergeSort(A,0,5);
for(ll i=0;i<6;i++)
{
	cout<<A[i]<<" ";
}
cout<<endl;


return 0;
}
