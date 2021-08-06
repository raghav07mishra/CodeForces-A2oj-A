#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[5][5];
int posx,posy;
for(int i=0;i<5;i++)
for(int j=0;j<5;j++)
{
cin>>a[i][j];
if(a[i][j]==1)
{
posx=i;
posy=j;
}
}
int midx=2;
int midy=2;
int x=abs(midx-posx);
int y=abs(midy-posy);
cout<<x+y<<"\n";
}
