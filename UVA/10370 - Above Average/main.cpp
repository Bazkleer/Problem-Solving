#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int N;
    int stu_grade[1000]={0};
    int stu_num;
    double sum=0;
    double avg;
    double cnt=0.0;

    while(cin>>N)
    {
        for(int i=0;i<N;i++)
        {   sum=0;
            cnt=0;
            avg=0;
            cin>>stu_num;
            for(int j=0;j<stu_num;j++)
            {
                cin>>stu_grade[j];
                sum +=stu_grade[j];
            }
        avg = sum/stu_num;
        for(int i=0;i<stu_num;i++)
        {
            if(stu_grade[i]>avg)
                cnt++;
        }
        printf("%.3lf%%\n",(cnt/stu_num)*100.0);
        }

    }
    return 0;
}
