#include<stdio.h>
int main()
{
  int n,k;
  int i,f,t;
  int joy=0,max_joy=-999999999;

  scanf("%d %d", &n, &k);

   for(i=0;i<n;i++)
   {
     scanf("%d %d", &f, &t);

     if(t>k)
        joy= f-(t-k);

     else
        joy =f;

      if ( joy > max_joy)
      max_joy = joy;
   }

   printf("%d\n",max_joy);
  return 0;
}
