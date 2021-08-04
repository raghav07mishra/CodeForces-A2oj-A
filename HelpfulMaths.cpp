#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
if(s.length()==1)
cout<<s<<"\n";
else
{

string res;
for(int i=0;i<s.length();i++)
{
if(s[i]!='+')
res+=s[i];
}
sort(res.begin(),res.end());
string ans;
for(int i=0;i<res.length()-1;i++)
{
ans+=res[i];
ans+="+";
}
ans+=res[res.length()-1];
cout<<ans<<"\n";
}
}
