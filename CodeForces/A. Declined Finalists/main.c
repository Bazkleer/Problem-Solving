#include<stdio.h>
int main()
{
  int k,num;
  int max=0,i=0;
  scanf("%d",&k);

   for(i=0;i<k;i++)
   {
     scanf("%d",&num);
     if(num>max)
     max=num;
   }
   if(max-25 > 0)
   printf("%d\n",max-25);
   else
   printf("%d\n", 0 );
  return 0;
}
