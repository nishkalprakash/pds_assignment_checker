#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the value of a, b : \n");
    scanf("%d %d",&a, &b);
    if(a<-999)
       {
        printf("wrong input\n");
    }
    if(a>999)
    {
    printf("wrong input\n");
    }
    if(b<-999){
    printf("wrong input\n");
    }
    if(b>999){
    printf("wrong input\n");
    }
    else{
        printf("wrong pair\n");
    }
   return 0;
}
