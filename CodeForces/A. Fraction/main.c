#include <stdio.h>
int have_cd(int n1,int n2)
{
  int i;

    for(i=2; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            return 1;
    }
    return 0;
  }
int main()
{
  int num,j=0,i=0,frag1[1003]={0},frag2[1003]={0};
  int max1,max2;
  scanf("%d",&num);

  for (i=1;i<1001;i++)
  {
    frag1[j]=i;
    frag2[j]=num-i;

    if(have_cd(frag1[j],frag2[j]))
      continue;

    if(frag1[j] >=frag2[j])
    {
      frag1[j]=0;
      frag2[j]=0;
      break;}
    j++;
  }
  j=0;

while(frag1[j]!=0)
{
  max1=frag1[j];
  max2=frag2[j];
j++;
}
printf("%d %d\n",max1,max2);
  return 0;
}
