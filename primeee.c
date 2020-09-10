#include<stdio.h>
int main()
{
    int i;
    int  a[13]={2,4,5,6,7,8,9,10,11,12,14,15,16};
    for(i=0;i<13;i++)
    {
        if(i%a[i]==0)
        {
            a[i]=0;
        }
        printf("%d",a[i]);
    }

}
