#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void reverse(string &str,ll l,ll r)
{
	if(l>=r)
	return ;
	reverse(str,l+1,r-1);
	swap(str[l],str[r]);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str="abcd";
reverse(str,0,3);
cout<<str<<endl;
return 0;
}

