#include<stdio.h>
int main()
{
  int N,cnt=0,sum=0;
  int p;
  int i=0,j=0;

scanf("%d",&N);
 for( i=0;i<N;i++)
  {
    sum=0;
    for( j=0;j<3;j++)
    {  scanf("%d",&p);
      if(p==1)
      sum++;
    }

    if(sum>=2)
    cnt++;
  }
    printf("%d \n",cnt);
  return 0;
}
