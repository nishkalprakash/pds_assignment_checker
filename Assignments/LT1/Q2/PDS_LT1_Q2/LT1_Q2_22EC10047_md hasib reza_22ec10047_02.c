#include<stdio.h>
#include<math.h>
int main(){
int n;
printf("enter the number :");
scanf("%d",&n);

if(n%2==1){
        if(n>1000&&n<9999){
                    printf("n%10");
                    printf("n%100");
                    printf("n%1000");
                    printf("n%10000");
                    
        }
        if(n>100&&n<999){
            printf("n%10");
            printf("n%100");
            printf("n%1000");
        }
        if(n>10&&n<99){
            printf("n%10");
            printf("n%100");
        }
        
}
if(n%2==0){
    
}

return 0;
}