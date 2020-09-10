#include<stdio.h>
int main()
{


    int cout;
    float cb;

    scanf("%d %f",&cout,&cb);
    if(cout>0 && cout<=2000 && cb>=0 &&cb<=2000)
    {

    if(cout%5==0 && (cout+.5)<cb)
    {
      cb=cb-cout-.5;

    }

    else
    {
        cb=cb;
    }

printf("%.02f\n",cb);


    }


return 0;
}

