#include <iostream>

using namespace std;

int main()
{
    int H1,M1,H2,M2;
    int mints;
    while(cin>>H1>>M1>>H2>>M2)
    {   mints=0;
        if (H1==0 && M1==0 && H2==0&&M2==0)
            return 0;
        if(H1==0)
        H1=24;
        if(H2==0)
        H2=24;
        if((H1==H2)&&(M1>M2))
        {
            H2=24;
            H1=0;
        }
        if(H1>H2)
            H2+=24;
        mints=60*(H2-H1)+(M2-M1);
        cout<<mints<<endl;
    }
    return 0;
}
