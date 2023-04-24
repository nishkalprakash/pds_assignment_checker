#include<stdio.h>
#include<math.h>
int main(){
    int num,c=0,n;
    printf("ENTER The Integer:");
scanf("%d",&num);
while(num!=0){
        c=c+1;
    num=num/10;
    }
    printf("%d\n",c);
int k=pow(10,c-1);
printf("%d",k);
return 0;
}
