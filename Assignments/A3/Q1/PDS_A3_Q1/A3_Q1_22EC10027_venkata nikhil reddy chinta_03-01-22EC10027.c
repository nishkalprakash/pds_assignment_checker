#include<stdio.h>
int main(){
int a,b,c,d,e,s;
printf("\nGive any 5 integers(3 even 2 odd or 3 odd and 2 even)  : \n");
scanf("%d%d%d%d%d" , &a , &b , &c , &d , &e);
s=a%2+b%2+c%2+d%2+e%2;
if(s==3)
{
    if((a%2==1)&&(b&2==1)&&(c%2==1))
        {
        if(a>b>c)
        {
            printf("%d%d%d" , a,b,c);
 }
        if(a>c>b)
        {
            printf("%d%d%d" , a,c,b);
        }
        if(b>c>a)
        {
            printf("%d%d%d" , b,c,a);
        }
         if(b>a>c)
         {
             printf("%d%d%d" , b,a,c);
         }
            if(c>a>b)
            {
                printf("%d%d%d" , c,a,b);
            }
           if(c>b>a)
           {
               printf("%d%d%d" , c,b,a);
           }

    }
}



return 0;
}
