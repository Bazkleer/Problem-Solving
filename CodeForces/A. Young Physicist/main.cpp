#include <iostream>

using namespace std;

int main()
{
    int N,x[103],y[103],z[103];
    int sumX=0,sumY=0,sumZ=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }

     for(int i=0;i<N;i++)
    {
        sumX+=x[i];
        sumY+=y[i];
        sumZ+=z[i];
    }
    if(sumX==0 && sumY==0 && sumZ==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
