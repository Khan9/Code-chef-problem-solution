#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc;
    cin >> tc;

    for(i=1;i<=tc;i++)
    {
        int n,r,sum=0;
        cin >> n;
        while(n>0)
        {


        r=n%10;
        sum=sum+r;
        n= n/10;
        }
        cout << sum << endl;





    }

    return 0;


}
