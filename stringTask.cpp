#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
string res;
for(int i=0;i<s.length();i++)
{
if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
{
if(s[i]>='A' && s[i]<='Z')
{
char c=s[i];
c+=32;
s[i]=c;
}
if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='y')
continue;
else
{
res+=".";
res+=s[i];
}
}
else
res+=s[i];
}
cout<<res<<"\n";
}
