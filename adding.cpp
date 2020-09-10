#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f1,t,x,f_sum=0,sum=0,min=99999999;
    cin >>n;
    int a[n];
    int b[n];
    for(i=1; i<=n; i++)
    {
        cin >>a[i];
    }
    for(x=1; x<=n; x++)
    {
        f_sum=0;
        sum=0;
        for(i=1; i<=n; i++)
        {

            t=(abs(x-i)+(i-1)+(x-1))*2;
            f1=t*a[i];
            sum=sum+f1;

            //cout << "I: " <<i <<endl;
            //cout <<sum <<endl;
        }
        f_sum=f_sum+sum;
        //cout << f_sum <<endl;
        //cout << "X : "<<x <<endl;

        b[x]=f_sum;
    }
    for(x=1; x<=n; x++)
    {
        if(b[x]<min)
        {
            min=b[x];
        }
    }
    cout <<min <<endl;


    return 0;


}
