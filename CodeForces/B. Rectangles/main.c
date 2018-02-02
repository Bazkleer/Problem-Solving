#include <stdio.h>

int main()
{
  int n,m;
  int table[53][53];
  int i,j,ones=0,zeros=0;
 long long int the_one=0,the_zero=0,total=0;
  scanf("%d %d",&n,&m);

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&table[i][j]);
    }
  }

  for (i=0;i<n;i++)
  {
    ones=0;
    zeros=0;
    for(j=0;j<m;j++)
    {
      if(table[i][j]==1)
      ones++;
      if(table[i][j]==0)
      zeros++;
    }
  the_one += ((1LL << ones)-1);
  the_zero +=((1LL << zeros)-1);
  }

for(i =0;i<m;i++)
{
  ones=0;
  zeros=0;
  for(j=0;j<n;j++)
  {

    if(table[j][i]==1)
    ones++;
    if(table[j][i]==0)
    zeros++;
  }
  the_one +=((1LL << ones)-1);
  the_zero +=((1LL<< zeros)-1);
}

  total = the_zero+the_one -(n*m);

  printf("%lld\n",total);

  return 0;
}
