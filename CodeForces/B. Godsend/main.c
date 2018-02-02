#include<stdio.h>
int main()
{
  int N,i;
   unsigned long long int sum=0,sum_r=0;
   unsigned long long int nums[1000003];
  scanf("%d",&N);

  for(i=0;i<N;i++)
  {
    scanf("%lld",&nums[i]);
    sum+=nums[i];
  }

  if (sum %2==1)
  printf("First\n");
  else
  {
    i=N-1;
    do
    {
      sum   -= nums[i];
      sum_r +=nums[i];
      i--;
    } while(sum %2 != 1 && sum!=0);

    if ( sum_r%2==0)
    printf("Second\n");
    else
    printf("First\n");
  }
  return 0;
}
