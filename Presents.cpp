#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
map<int,int>mp;
for(int i=0;i<n;i++)
{
mp[a[i]]=i+1;
}
for(auto it=mp.begin();it!=mp.end();it++)
cout<<it->second<<" ";
}
