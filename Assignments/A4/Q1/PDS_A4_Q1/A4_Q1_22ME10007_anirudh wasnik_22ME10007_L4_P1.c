
#include<stdio.h>
int main()
{
int a,b;
printf("eneter numba");
scanf("%d",&a);
b=1;
if(a==0){
         printf("0");
} 


if(a<0){
        a=a*(-1);

}



while(b<=a){
            if(a%b==0){
                      printf("%d ",b);
            }b=b+1;
}     







return 0;

}

