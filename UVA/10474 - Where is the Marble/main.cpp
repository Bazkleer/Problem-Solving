#include <iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int marbles[1005];
int qary[1005];

int main()
{
    int N,Q;
    int idx;
    int cases=0;
    while(scanf("%d%d",&N,&Q)==2)
    {
        if(N==0&&Q==0)
            break;
        cases++;
     for(int i =0;i<N;i++)
     {
        scanf("%d",marbles+i);
     }

     sort(marbles,marbles+N);
     cout<<"CASE# "<<cases<<":"<<endl;

     for(int i=0;i<Q;i++)
     {
         scanf("%d",qary+i);
    }

    for(int i=0;i<Q;i++)
    {
        idx = lower_bound(marbles,marbles+N,qary[i]) - marbles;

        cout<<"idx:"<<idx<<endl;
        if(idx <N)
        {
            if(marbles[idx]==qary[i])
            {
              cout<< qary[i]<<" found at "<<idx+1<<endl;
              continue;
            }
        }
        else if(marbles[idx+2]>qary[i])
        {

            cout<< qary[i]<<" not found"<<endl;
        }

       /*  for(int j =0;j<N;j++)
         {
             if(qary[i]== marbles[j])
             {
                 idx=j;
                 cout<< qary[i]<<" found at "<<idx+1<<endl;
                 break;
             }
             else if(qary[i]<marbles[j])
                {
                        cout<< qary[i]<<" not found"<<endl;
                        break;
                }

         }*/
         }
    }
    return 0;
}

