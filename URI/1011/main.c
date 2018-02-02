#include <stdio.h>

int main()
{
    double R;
    double pi=3.14159;
    double VOLUME;
    scanf("%lf",&R);
    VOLUME=(4.0/3.0)*pi*R*R*R;
    printf("VOLUME = %.3f\n",VOLUME);
    return 0;
}
