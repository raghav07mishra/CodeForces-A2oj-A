#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
int max_val=INT_MIN;
int min_val=INT_MAX;
for(int i=0;i<n;i++)
{
cin>>a[i];
max_val=max(max_val,a[i]);
min_val=min(min_val,a[i]);
}
int posmax;
int posmin;
for(int i=0;i<n;i++)
{
if(a[i]==min_val)
posmin=i;
}
for(int i=n-1;i>=0;i--)
{
if(a[i]==max_val)
posmax=i;
}
if(posmax==posmin)
cout<<0<<"\n";
else if(posmin>posmax)
{
int time1=n-1-posmin;
int time2=posmax;
cout<<time1+time2<<"\n";
}
else
{
int time1=n-1-posmin;
int time2=posmax-1;
cout<<time1+time2<<"\n";
}
}
