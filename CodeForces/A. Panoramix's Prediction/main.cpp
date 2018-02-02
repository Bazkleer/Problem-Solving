#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for(int i = x-1; i!=1;i--)
    {
      if(x%i==0)
      return false;
    }
return true;
}
int main()
{
int num1,num2;
cin>>num1>>num2;
while(num1 <= 50)
{
  num1++;
  if(isPrime(num1))
    break;
}
if(num1==num2)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
  return 0;
}
