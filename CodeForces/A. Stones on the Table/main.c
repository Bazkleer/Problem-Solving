#include<stdio.h>
int main()
{
  int N;
  int i;
  char word[53];

  char current=0,next=1;
  int cnt=0;
  scanf("%d\n",&N);
  scanf("%s",word);
  for( i=current;i<N;i++)
  {
    if(word[current]==word[next])
    {
      cnt++;
    }

    current=next;
    next++;
  }
  printf("%d\n",cnt );

  return 0;
}
