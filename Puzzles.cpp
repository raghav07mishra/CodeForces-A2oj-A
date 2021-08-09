#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)
cin>>a[i];
sort(a,a+m);
int res=a[n-1]-a[0];
for(int i=0;i<=m-n;i++)
res=min(res,a[i+n-1]-a[i]);
cout<<res<<"\n";
}
