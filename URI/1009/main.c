#include <stdio.h>

int main()
{
    char Name[100];
    double SAL,Total,FINAL;
    scanf("%s",Name);
    scanf("%lf %lf",&SAL,&Total);
    FINAL=(Total*0.15)+SAL;
    printf("TOTAL = R$ %.2f\n",FINAL);


    return 0;
}
