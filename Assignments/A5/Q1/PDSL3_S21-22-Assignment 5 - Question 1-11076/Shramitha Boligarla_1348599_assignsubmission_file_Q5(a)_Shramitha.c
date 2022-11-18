#include<stdio.h>

int a,b,c;
int main()
{

    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\n---Before function call---\n");
    printf("Address of a = %d",&a);
    printf("\nAddress of b = %d",&b);
    printf("\nAddress of c = %d",&c);
    printf("\nValues in a,b,c = %d , %d , %d\n",a,b,c);

    printf("\n---After function call---\n");
    myFunc();
    return(0);

}

int myFunc(int x, int y, int z)
{

    if (a<b && a<c){x=a;
                    if(b<c){y=b;z=c;}
                    else y=c; z=b;}
    else if (b<a && b<c){x=b;
                         if(c<a){y=c;z=a;}
                         else y=a; z=c;}
    else {x=c;
          if(a<b){y=b;z=c;}
          else y=c; z=b;}

    printf("Address of a = %d",&a);
    printf("\nAddress of b = %d",&b);
    printf("\nAddress of c = %d",&c);
    printf("\nValues in a,b,c = %d , %d , %d",x,y,z);

}

