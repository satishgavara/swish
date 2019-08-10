#include<bits/stdc++.h>
using namespace std;


int main()
{

long long  p,d, temp;
cin>>p>>d;
long long ans = p;

while(1)
{
temp=(p*d)/100;
if(temp==0)
      break;
p-=temp;
ans+= p;
}
cout<<ans<<'\n';
}
