#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
   int maxSubArray(vector<int>& nums) {
      int csum=0,msum=INT_MIN,n=mums.length();
      for(int i=0;i<n;i++)
      {
      	csum+=nums[i];
      	if(csum>msum)
      	msum=csum;
      	if(csum<0)
      	csum=0;
	  }
      return msum;
    }


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>nums{-1,2,3,-3,4,-1,2,-3,-1,5,-1};
cout<<maxSubArray(nums)<<endl;
return 0;
}


