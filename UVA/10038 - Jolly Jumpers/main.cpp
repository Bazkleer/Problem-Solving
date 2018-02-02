#include <iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main()
{   int nums[3000];
    int N;
    int ans[3000];
   while(cin>>N)
   {
       bool J =true;
       for (int i=0;i<N;i++)
       {
           cin>>nums[i];
       }
       if (N==1)
       {
           cout<<"Jolly"<<endl;
           continue;
       }

       for(int j=1;j<N;j++)
       {
            ans[j-1]= abs(nums[j]-nums[j-1]);
       }
      sort(ans,ans+N-1);
      int cnt = 1 ;
      for (int i=0;i<N-1;i++)
      {

         if(ans[i] != cnt++)
            J = false;
      }

      if(J)
        cout<<"Jolly"<<endl;
      else
        cout<<"Not jolly"<<endl;
   }
    return 0;
}
