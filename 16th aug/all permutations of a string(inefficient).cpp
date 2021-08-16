#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void permute(string data,ll arr[],vector<string>ans,string str)
{
    if(data.length()==str.length()){
    cout<<data<<endl;
    ans.pb(data);
    return ;
    }
    for(ll i=0;i<str.length();i++)
    {
        if(!arr[i]){
        data+=str[i];
        arr[i]=1;
        permute(data,arr,ans,str);
        arr[i]=0;
        data.pop_back();
		}
        
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string str="abc";
ll arr[3];
memset(arr,0,sizeof(arr));
string data="";
vector<string>ans;
permute(data,arr,ans,str);
for(ll i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return 0;
}
