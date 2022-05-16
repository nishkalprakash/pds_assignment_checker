/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

/*comparison is made between the inputs to eliminate the other inputs by smaller one*/

int main()
{
    int n=4;
    int smallest1,smallest2,smallest3,smallest4=0;
    int l,m,k,o;
    int a[4],b[4],c[4],d[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d",&c[i]);
    }
    for(int i=0;i<4;i++)
    {
        scanf("%d",&d[i]);
    }
     smallest2 = b[0];
      smallest1 = a[0];
      smallest3 = c[0];
      smallest4 = d[0];
   for(int i=0;i<4;i++)
    {



      if (a[i] < smallest1)
      {
         smallest1 = a[i];
         l=i;
       }

    }
    for(int i=0;i<4;i++)
    {



      if (b[i] < smallest2)
      {
         smallest2 = b[i];
         m=i;
       }

    }
    for(int i=0;i<4;i++)
    {

       if (c[i] < smallest3)
      {
         smallest3 = c[i];
         k=i;
       }

    }
    for(int i=0;i<4;i++)
    {

        if (d[i] < smallest4)
      {

         o=i;
       }

    }

       printf("%d\n",smallest1);
       printf("%d\n",smallest2);
       printf("%d\n",smallest3);
       printf("%d\n",smallest4);


    return 0;
}
