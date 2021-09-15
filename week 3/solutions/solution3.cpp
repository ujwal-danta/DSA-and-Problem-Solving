#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

// Time Complexity - O(n)
// Space Complexity - O(n)
// array is modified
    int findDuplicate(vector<int>& nums) {
    int n = nums.size(),ans=-1;
        for(int i=0;i<n;i++)
        {
            int pos = nums[i];
            if(nums[abs(pos)] > 0)
               nums[abs(pos)] *= -1;
            else
            {
                ans = abs(pos);
            }
        }
        
        return ans;
    }
    
    
    
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>nums = {1,2,3,4,5,5};
cout<<findDuplicate(nums)<<endl;
return 0;
}

