    #include <iostream>

    using namespace std;

    int main()
    {
        int N;
        int walls[50]={0};
        int sum;
        int blocks;
        int sets=0;
        int hight;
        while(cin>>N&&N!=0)
        {   sets++;
            sum=0;
            blocks=0;
            for(int i=0; i <N; i++)
            {
                cin>>walls[i];
                sum+=walls[i];
            }
            hight=sum/N;
            for(int i=0;i<N;i++)
            {
                if(walls[i]>hight)
                {
                blocks+=(walls[i]-hight);
                }
            }
            cout<<"Set #"<<sets<<endl;
            cout<<"The minimum number of moves is "<<blocks<<"."<<endl;
            cout<<endl;
        }

        return 0;
    }
