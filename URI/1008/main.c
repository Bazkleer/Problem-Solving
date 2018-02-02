#include <stdio.h>

int main()
{
       int NUM,HOURS;
       float Salperhour;
       scanf("%d",&NUM);
       scanf("%d",&HOURS);
       scanf("%f",&Salperhour);
       printf("NUMBER = %d\n",NUM);
       printf("SALARY = U$ %.2f\n",Salperhour*HOURS);

    return 0;
}
