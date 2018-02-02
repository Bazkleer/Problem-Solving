#include <iostream>

using namespace std;
char arr[350]={0};
int main()
{
    int ones=0,twoes=0,threes=0,j=0;
    char x;
    x=getwchar();
    while(x!='\n')
    {
        if(x=='1')
            ones++;
        else if (x=='2')
            twoes++;
        else if (x=='3')
            threes++;
        x=getwchar();
    }
        for (int i=0; i<ones;i++)
        {
                arr[i]='1';
        }
        for (int i=ones ;i<ones+twoes;i++)
        {
               arr[i]='2';
        }
        for (int i=ones+twoes; i<ones+twoes+threes;i++)
        {
                arr[i]='3';
        }

    while(arr[j]!=0)
    {
        cout<<arr[j];
        if (arr[j+1]==0)
            return 0;
        cout<<"+";
        j++;
    }
    return 0;
}
