#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string x;
cin>>x;
string y="hello";
int n=x.length();
int m=y.length();
int t[n+1][m+1];
for(int i=0;i<n+1;i++)
for(int j=0;j<m+1;j++)
if(i==0||j==0)
t[i][j]=0;
for(int i=1;i<n+1;i++)
for(int j=1;j<m+1;j++)
if(x[i-1]==y[j-1])
t[i][j]=1+t[i-1][j-1];
else
t[i][j]=max(t[i-1][j],t[i][j-1]);
if(m==t[n][m])
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}
