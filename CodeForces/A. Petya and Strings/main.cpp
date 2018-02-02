#include <iostream>
#include<string>

using namespace std;

int main()
{
int lnth;
string word_1,word_2;
cin>>word_1;
cin>>word_2;

lnth=word_1.length();

for(int i=0;i<lnth;i++)
{
    if(word_1[i] >='A' &&word_1[i]<='Z')
        word_1[i]+=32;
    if(word_2[i] >='A' &&word_2[i]<='Z')
        word_2[i]+=32;

    if(word_1[i]>word_2[i])
    {
        cout<<1<<endl;
        return 0;
    }
    else if(word_1[i]<word_2[i])
    {
        cout<<-1<<endl;
        return 0;
    }
}
    cout<<0<<endl;
    return 0;
}
