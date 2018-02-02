#include <stdio.h>
int main()
{
  long long int num;
  int dgt,cnt=0;
  scanf("%lld",&num);
  while(num!=0)
  {
    dgt=num %10;
    num /=10;
    if(dgt == 4 || dgt==7)
    cnt ++;
  }
  if (cnt ==4 || cnt == 7)
  printf("YES\n");
  else
  printf("NO\n");

  return 0;
}
