#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
	int helper(int num)
	{
	    static int rev=0;
	    if(num==0)
	    return rev;
	    int rem=num%10;
	    rev=rev*10+rem;
	    int temp=helper(num/10);
	    return rev;
	}
		string is_palindrome(int n)
		{
		    int ans=helper(n);
		    if(ans==n)
		    return "Yes";
		    else
		    return "No";
		}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout<<is_palindrome(555555)<<endl;
return 0;
}

