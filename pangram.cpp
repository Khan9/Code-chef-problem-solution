#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin >>n;
    string a;
    int flag[26];
    memset(flag,0,sizeof flag);
    cin>>a;

        for(i=0;i<n;i++)
        {
           if(a[i]>=97 && a[i]<=122)
           {
               a[i]=a[i]-'a';
               flag[a[i]]= 1;
           }
           else if(a[i]>=65 && a[i]<=90)
           {
               a[i]=a[i]-'A';
               flag[a[i]]= 1;
           }


        }
        for(i=0;i<10;i++)
        {
            cout << flag[i] <<endl;
        }

    cout <<sum <<endl;
    if(sum==26)
    {
        cout <<"YES"<<endl;

    }
    else
    {
        cout << "NO" <<endl;
    }


}
