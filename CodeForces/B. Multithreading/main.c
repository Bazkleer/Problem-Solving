#include<stdio.h>
int main()
{
  int N,i,j=0,new=0,max=0;
  int pos[100003]={0};
  int nums[100003];
  scanf("%d",&N);

  for(i=0;i<N;i++)
    {
      scanf("%d",&nums[i]);
      if(max < nums[i])
      max=nums[i];
    }
  for(i=0;i < max;i++)
  {
    if((nums[i] > nums[i+1]) && (i+1) != max)
    {
      pos[j] = i+1;
      if(pos[j] > new)
        new=pos[j];
      j++;
    }
  }

    printf("%d\n",new);
  return 0;
}
