#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4;
    int N;
    while(cin >>N)
    {
        for(int i =0; i<N;i++)
        {
            cin>>n1>>n2>>n3>>n4;

            if(n1==n2&&n3==n4&&n1==n3)
            {
                cout<<"square"<<endl;
            }
            else if((n1==n2&&n3==n4)||(n1==n3&&n2==n4)||(n1==n4&&n2==n3))
            {
                cout<<"rectangle"<<endl;
            }

            else if((n1<=(n2+n3+n4)&&(n2<=(n1+n3+n4)&&(n3<=(n1+n2+n4)&&(n4<=(n2+n3+n1))))))
            {
                cout<<"quadrangle"<<endl;
            }
            else
            {
                cout<<"banana"<<endl;
            }

        }
    }
    return 0;
}
