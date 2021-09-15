#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007


// using extra space

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp;
        while(k>(n-1))
        {
            k = k - n;
        }
        for(auto it=nums.begin()+(n-k);it!=nums.end();it++)
        {
            temp.push_back(*it);
        }
        for(auto it=nums.begin();it!=nums.begin()+(n-k);it++)
        {
             temp.push_back(*it);
        }
        for(int i=0;i<n;i++)
        {
            nums[i] = temp[i];
        }
    }

    //without using extra space
    //using reverse method


    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE

ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>nums = {1,2,3,4,5};
ll k = 1 ; // Rotate an array by k elements . Here k = 1
rotate(nums,k);
for(ll i=0;i<5;i++)
{
	cout<<nums[i]<<" ";
}
cout<<endl;
return 0;
}
