#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n);
int sum=0;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
v[i]=x;
sum+=v[i];
}
sort(v.begin(),v.end());
int count=1;
int val=0;
sum/=2;
for(int i=n-1;i>=0;i--)
{
val+=v[i];
if(val<=sum)
{
count++;
}
else
break;
}
cout<<count<<"\n";
}
