#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void reverseStack(stack<ll>&s,ll len)
{
	if(len==0)
	return;
	ll temp=s.top();
	s.pop();
	reverseStack(s,len-1);
	s.push(temp);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
stack<ll>s;
for(ll i=0;i<5;i++)
{
	s.push(i);
	cout<<i<<endl;
}
reverseStack(s,5);
cout<<"Reversed stack"<<endl;
for(ll i=0;i<5;i++)
{
 cout<<s.top()<<endl;
 s.pop();	
}
return 0;
}

