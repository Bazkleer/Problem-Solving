#include<stdio.h>
int main()
{
  int N;
  int scr[1003];
  int best,wrst,i,cnt=0;
  scanf("%d", &N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&src[i]);
  }
  best=wrst=scr[0];

  for(i=1;i<N;i++)
  {
    if( scr[i]<wrst)
    {
      cnt++;
      wrst=scr[i];
    }
    else if (scr[i]>best)
    {
      cnt++;
      best=scr[i];
    }
  }
printf("%d\n",cnt );
  return 0;
}
