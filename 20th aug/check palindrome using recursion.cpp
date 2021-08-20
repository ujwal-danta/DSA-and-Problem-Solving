#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll check(string str,ll i,ll r)
{
	static int flag=1;
	if(i>=r)
	return flag;
	ll ans=check(str,i+1,r-1);
	if(str[i]!=str[r])
	flag=0;
	//cout<<i<<" "<<r<<" "<<flag<<endl;
	return flag;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll flag=check("madam",0,4);
if(flag)
cout<<"palindrome"<<endl;
else
cout<<"Not palindrome"<<endl;
return 0;
}

