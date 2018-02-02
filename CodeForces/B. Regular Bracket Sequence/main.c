#include<stdio.h>

int main()
{
  int i=0,open=0,cnt=0;
  char inp[1000003]={0};
  scanf("%s",inp);

  while(inp[i]!=0)
  {
    if(inp[i]=='(')
      open++;
    else if(inp[i]==')'&& open !=0)
    {
      open--;
      cnt+=2;
    }

    i++;
  }
  printf("%d\n",cnt);
  return 0;
}
