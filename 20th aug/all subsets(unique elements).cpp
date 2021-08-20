#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void helper(string ans,ll i,string str)
{
	if(i==str.length())
	{
		cout<<"["<<ans<<"]"<<endl;
		return;
	}
	ans+=str[i];
	helper(ans,i+1,str);
	ans.pop_back();
	helper(ans,i+1,str);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
helper("",0,"abc");
return 0;
}

