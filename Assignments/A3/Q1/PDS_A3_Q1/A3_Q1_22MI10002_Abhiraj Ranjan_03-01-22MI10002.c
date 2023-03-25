#include<stdio.h>
int main(){
long int a,b,c,d,e,odd1,odd2,odd3;
printf("Enter Five Numbers :\n ");
scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e);
if(((a%2)+(b%2)+(c%2)+(d%2)+(e%2))==2){
    if((b/a==0)&&(c/a==0)&&(d/a==0)&&(e/a==0)){
        printf("Largest Number: \n%ld",a);
    }
    else if((a/b==0)&&(c/b==0)&&(d/b==0)&&(e/b==0)){
        printf("Largest Number: \n%ld",b);
    }
    else if((a/c==0)&&(b/c==0)&&(d/c==0)&&(e/c==0)){
        printf("Largest Number: \n%ld",c);
    }
    else if((a/d==0)&&(b/d==0)&&(c/d==0)&&(e/d==0)){
        printf("Largest Number: \n%ld",d);
    }
    else if((a/e==0)&&(b/e==0)&&(c/e==0)&&(d/e==0)){
        printf("Largest Number: \n%ld",e);
    }
}
if(((a%2)+(b%2)+(c%2)+(d%2)+(e%2))==3){

}
return 0;
}
