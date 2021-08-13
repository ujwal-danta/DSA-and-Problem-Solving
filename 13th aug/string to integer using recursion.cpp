#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll stringToInt(string num,ll len,ll i)
{
	static ll ans=0;
	if(i>len)
	return ans;
    ans=stringToInt(num,len,i+1);
	ll pos=len-i;
	ll n = num[i] - '0';
	ans+=n*pow(10,pos);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string num;
cin>>num;
ll len=num.length();
cout<<stringToInt(num,len-1,0)<<endl;
return 0;
}

