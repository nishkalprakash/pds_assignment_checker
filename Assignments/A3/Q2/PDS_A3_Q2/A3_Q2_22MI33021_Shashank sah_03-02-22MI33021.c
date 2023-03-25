#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,a,b,c,z,c1,c2,d,e;
    printf("enter two integer");
    scanf("%d%d",&n1,&n2);
    if(n1>=100){


    a=n1/100;
    z=n2/10;
    b=z%10;
    c=n1%10;
    c1=c*100+b*10+a;
    if(n2==c1)
       printf("perfect pair");
        else
        printf("not a perfect pair");
}

else{
    d=n1/10;
    e =n1%10;
    c2=e*10+d;
    if(n2==c2)
        printf("perfect pair");
    else
        printf("not a perfect pair");
}
return 0;
}
