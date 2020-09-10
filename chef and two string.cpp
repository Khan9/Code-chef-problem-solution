#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char s1[1000];
    char s2[1000];
    int i,s1l,s2l,tc,count=0,j,max=0,min=0;
    cin >> tc;
    getchar();
    for(i=1; i<=tc; i++)
    {
        gets(s1);
        gets(s2);
        s1l=strlen(s1);
        s2l=strlen(s2);
        // cout << s1l <<endl;
        for(j=0; j<=s2l; j++)
        {
            if(s1[j]!='?')
            {
                if(s1[j]==s2[j])
                {

                }

                else if (s2[j]=='?')
                {
                    max++;
                }
                else min++;

            }
            else max++;


        }


        cout << min <<" "  << max+min << endl;
        min=0;max=0;

    }
    return 0;

}
