#include <iostream>

using namespace std;

int main()
{
   int N;
   int num;
   int digit;
   while(cin>>N)
   {
       for(int i=0;i<N;i++)
       {
           cin>>num;
           num*=567;
           num/=9;
           num+=7492;
           num*=235;
           num/=47;
           num-=498;
           digit=num%10;
           num/=10;
           digit=num%10;
           if(digit<0)
            digit*=-1;
           cout<<digit<<endl;
       }

   }
    return 0;
}
