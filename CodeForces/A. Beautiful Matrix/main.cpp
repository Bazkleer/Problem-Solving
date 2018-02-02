#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mat[5][5];
    int idxC,idxR,moves=0;
    for (int j=0;j<5;j++)
    {
       for(int i=0;i<5;i++)
       {
           cin>> mat[j][i];
           if (mat[j][i]==1)
           {
               idxR=j;
               idxC=i;
           }
       }
    }
    idxR+=1;
    idxC+=1;
    if (idxR >3|| idxR<3)
    {
        moves+= abs(idxR-3);
    }
    if (idxC>3 || idxC<3)
        moves+= abs(idxC-3);

        cout <<moves<<endl;
    return 0;
}
