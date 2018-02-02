#include <iostream>
#include <string>
#include<cstdio>
#include<locale>

using namespace std;

int main()
{
    char x;
    x=getchar();
    while(x!='\n')
    {
        if (x >='A' && x <='Z')
            x=x+32;

        if (x=='i' ||x=='o'||x=='u'||x=='a' || x=='e' ||x=='y')
        {
            x=getchar();
            continue;
        }

        else
            cout << '.'<<x;
        x=getchar();
    }
    return 0;
}
