#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
int n=s.length();
if(n<=10)
cout<<s<<"\n";
else
{
string res;
int x=n-2;
res+=s[0]+to_string(x)+s[n-1];
cout<<res<<"\n";
}
}
}
