#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i;
    cin >> tc;
    for(i=1; i<=tc; i++)
    {
        int a,b,r;
        cin >> a;
        cin >> b;
        r=a%b;
        cout << r << endl;
    }
}
