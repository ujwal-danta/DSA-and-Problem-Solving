#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void permute(string str,ll l,ll r)
{
	if(l==r)
	{
		cout<<str<<endl;
		return ;
	}
	for(ll i=l;i<=r;i++)
	{
		swap(str[i],str[l]);
		permute(str,l+1,r);
		swap(str[i],str[l]);
    } 
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str;
cin>>str;
permute(str,0,str.length()-1);
return 0;
}

