/*sec2
Assignment no.9
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0){
        int f[300];
        f[0]=0;
        f[1]=1;
        int a,b,flag=1;
        for(int i = 2;i<300;i++){
            f[i]=f[i-1]+f[i-2];
        }
        for(int i = 0;i<300;i++){
            if(f[i]==n){
                printf("%d is a Fibonacci number",n);
                flag=0;
                break;

            }
            else{
                if(n>f[i]){
                    a=f[i];
                }
                else{
                    b=f[i];
                    break;
                }
            }
        }
        if(flag){
            if((n-a)<=(b-n)){
                    printf("Nearest Fibonacci numner : %d",a);

            }
            else{
                printf("Nearest Fibonacci numner : %d",b);
            }
        }









    }
    else{
        printf("Please give positive number");
    }



























return 0;}
