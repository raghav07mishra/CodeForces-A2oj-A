#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a,b,c;
cin>>a>>b>>c;
int val1=a+b+c;
int val2=max(val1,(a+b)*c);
int val3=max(val2,(a*b)+c);
int val4=max(val3,a+(b*c));
int val5=max(val4,a*(b+c));
int val6=max(val5,a*b*c);
cout<<val6<<"\n";
}
