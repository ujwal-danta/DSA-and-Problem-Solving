#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int ptr1=0,ptr2=0,ptr3=0;
            vector<int>ans;
            while(ptr1<n1 && ptr2<n2 && ptr3<n3)
            {
                while(ptr1<n1-1 && A[ptr1]==A[ptr1+1])
                ptr1++;
                while(ptr2<n2-1 && B[ptr2]==B[ptr2+1])
                ptr2++;
                while(ptr3<n3-1 && C[ptr3]==C[ptr3+1])
                ptr3++;
                if(A[ptr1]==B[ptr2] && A[ptr1]==C[ptr3])
                {
                    ans.push_back(A[ptr1]);
                    ptr1++;
                    ptr2++;
                    ptr3++;
                }
                else if(A[ptr1]<B[ptr2])
                ptr1++;
                else if(B[ptr2]<C[ptr3])
                ptr2++;
                else 
                ptr3++;
                }
            return ans;
        }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int arr1[5]={4,6,9,10};
int arr2[3]={4,10,12};
int arr3[6]={4,10,12,16,20,24};
vector<int>ans=commonElements(arr1,arr2,arr3,5,3,6);
for(int i=0;i<ans.size();i++)
{
	cout<<ans[i]<<endl;
}
return 0;
}

