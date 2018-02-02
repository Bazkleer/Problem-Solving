#include <stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C;
    int MaiorAB,maior;
    scanf("%d %d %d",&A,&B,&C);
    MaiorAB=(((A+B)+abs(A-B))/2);
    maior=((MaiorAB+C+abs(MaiorAB-C))/2);
    printf("%d eh o maior\n",maior);
    return 0;
}
