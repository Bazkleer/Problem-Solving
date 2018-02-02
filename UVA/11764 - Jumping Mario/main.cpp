#include <iostream>

using namespace std;

int main()
{
    int N;
    int num_walls;
    int walls[50];
    int hig_jmp=0,low_jmp=0;
    while(cin>>N)
    {
        for(int i=0;i<N;i++)
        {
            hig_jmp=0,low_jmp=0;
            cin>>num_walls;

            for(int j=0;j<num_walls;j++)
            {   cin>>walls[j];

                if(j>=1)
                {
                    if(walls[j]>walls[j-1])
                    {
                        hig_jmp++;
                    }
                    else if(walls[j]<walls[j-1])
                    {
                        low_jmp++;
                    }
                    else
                    continue;
                }

            }
            cout<<"Case "<<i+1<<": "<<hig_jmp<<" "<<low_jmp<<endl;
        }
    }
    return 0;
}
