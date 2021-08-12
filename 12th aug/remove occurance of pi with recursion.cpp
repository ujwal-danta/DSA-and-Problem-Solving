#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
string removeOcc(string str,ll len,ll i)
{
	static string ans="";
	if(len==i)
	{
		return "";
	}
	if(str[i]=='p' && str[i+1]=='i')
	{
		ans="3.14" + removeOcc(str,len,i+2);
	}
	else
	{
		ans=str[i] + removeOcc(str,len,i+1);
	}
	return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str;
getline(cin,str);
cout<<removeOcc(str,str.length(),0)<<endl;
return 0;
}

