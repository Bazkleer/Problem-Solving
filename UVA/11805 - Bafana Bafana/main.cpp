#include <iostream>

using namespace std;

int main()
{
    int N,players,k,pass;
    while(cin>>N)
    {
        for(int i=0; i<N;i++)
        {
            cin>>players>>k>>pass;
            int j=0;
            while(j < pass)
            {
                if(k == players)
                  {
                      k=1;
                      j++;
                      continue;
                  }

             k++;
             j++;
            }
            cout<<"Case "<<i+1<<": "<<k<<endl;
        }
    }
    return 0;
}
