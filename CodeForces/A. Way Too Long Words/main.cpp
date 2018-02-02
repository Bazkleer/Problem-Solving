#include <iostream>
#include<string>
using namespace std;

int main()
{
    int N,lnth;
    string word;
    cin>>N;
    cin.ignore(256,'\n');
    for(int i=0;i<N;i++)
    {
        getline(cin,word);
        lnth=word.length();
        if(lnth<=10)
        {
            cout<<word<<endl;
        }
     else
        {
         cout<<word[0]<<lnth-2<<word[lnth-1]<<endl;
        }
    }

    return 0;
}
