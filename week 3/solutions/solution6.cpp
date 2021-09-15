#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007

/*

// recursive
ll minMoves(ll arr[],ll n,ll curr)
{
	if(curr>=n-1)
	return 0;
	ll ms = arr[curr];
	ll mj=INT_MAX;
	while(ms>0)
	{
		mj=min(mj,1+minMoves(arr,n,curr+ms));
		ms=ms-1;
	}
return mj;
}

*/



/*
METHOD-2
//using memorization technique
TIME COMPLEXITY - O(n*n)
ll minimumMoves(ll arr[],ll n)
{
	ll minSteps[n];
	memset(minSteps,-1,sizeof(minSteps));
	minSteps[0]=0;
	for(ll i=1;i<n;i++)
	{
		for(ll j=0;j<i;j++)
		{
			if(j+arr[j]>=i)
			{
				minSteps[i]=minSteps[j]+1;
				break;
			}
		}
		if(minSteps[i]==-1)
		{
			return -1;
		}
	}
	return minSteps[n-1];
}
*/



//METHOD-3
//optimised greedy O(n) approach

 int minMoves(int arr[], int n){
        int maxPos = arr[0];
        if(maxPos==0)
        return -1;
        int jumps = 1;
        int steps = arr[0];
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            return jumps;
            if(arr[i]+i>maxPos)
            maxPos = arr[i]+i;
            steps--;
            if(steps==0)
            {
                if(i>=maxPos)
                return -1;
                jumps++;
                steps = maxPos - i;
            }
            
        }
        return maxPos;
    }

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)
{
	cin>>arr[i];
}
ll ans=minMoves(arr,n,0);
cout<<ans<<endl;
return 0;
}

