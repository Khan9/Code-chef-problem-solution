#include <stdio.h>
int main()
{

    int t,tc;
    scanf("%d",&tc);
    for(t=1;t<=tc;t++)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
           printf("%d\n",n);
        }
        else
        {
            printf("%d\n",(n/2)+1);
        }

    }
return 0;

}
