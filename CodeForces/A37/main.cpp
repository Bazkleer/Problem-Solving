#include <iostream>
#include <algorithm>    // std::sort

using namespace std;



int main()
   {
       const int n =5;
       int arr [n];
       for (int i = 0 ;i < n ;i++)
       {
           cin>>arr[i];
       }

       for (int i = 0 ; i <n ;i++)
       {
           int cnt = 0;
           for (int j =i ; j < n && arr[i] == arr[j] ;j++)
           {
               cnt++;
           }
        cout<<arr[i]<<"\t"<<cnt<<endl;
           i+=cnt;
       }
   return 0;
   }
