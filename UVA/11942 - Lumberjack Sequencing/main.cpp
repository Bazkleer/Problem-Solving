#include <iostream>

using namespace std;

int main()
{
    int N;
    int nums[10];
    int cnt=0;
    bool been_there=false;
    while(cin>>N)
    {
        for(int i=0; i<N; i++)
        {
            cnt=0;
            been_there=false;
            for(int j=0;j<10;j++)
            {
                cin>>nums[j];
            }
            if(i==0)
                cout<<"Lumberjacks:"<<endl;

            for(int j=0;j<9;j++)
            {
                if(nums[j]<nums[j+1])
                {
                    cnt++;
                    been_there=true;
                }

                else
                {   if(cnt>0&&been_there)
                    cnt--;

                    if(nums[j]>nums[j+1])
                        cnt++;
                }
            }

            if(cnt==9)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;

        }
    }
    return 0;
}
