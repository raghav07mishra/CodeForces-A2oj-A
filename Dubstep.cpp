#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
string t="WUB";
vector<int>v;
for(int i=0;i<s.length();i++)
{
if(s[i]==t[0])
{
if(s.substr(i,t.length())==t)
{
v.push_back(i);
i+=t.length()-1;
}
}
}
string res;
for(int i=0;i<v.size()-1;i++)
{
int len=v[i+1]-v[i]-t.length();
if(len!=0)
res+=(s.substr(v[i]+t.length(),len))+" ";
}
cout<<res<<"\n"<<endl;
}
