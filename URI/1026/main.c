#include <stdio.h>
int main()
{
    unsigned long int  A,B,sum;
    while(scanf("%li %li",&A,&B)==2)
        {
        sum=((~A&B)|(A&~B));
        printf("%d\n",sum);
        }
    return 0;
}
