#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
  int k,cnt=0,i=0,sum=0,size=0,j=0,rem=0;
  char num[1000003]={0};

  scanf("%d",&k);
  scanf("%s",num);
  while(num[i] != '\0')
  {
    num[i] -= '0';
    sum+=num[i];
    i++;
    size++;
  }

  i=0;

  if(sum>=k)
  {
  printf("%d\n",0);
  return 0;
  }

  sort(num,num+size);
  rem=k-sum;

  while(i<size && rem>0)
  {
    cnt++;
    rem -= (9-num[i]);
    i++;
  }

printf("%d\n",cnt);
  return 0;
}
