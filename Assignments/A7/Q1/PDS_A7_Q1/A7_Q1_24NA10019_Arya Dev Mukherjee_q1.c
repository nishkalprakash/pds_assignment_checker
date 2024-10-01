#include<stdio.h>
//first we make the power function
float power(int x, int n){
    int k = 1;
    for(int i = 0; i<n; i++){
        k*=x;
        }
    return k;
    }

//then we make the function for factorial   
float fact(int n){
    int k = 1;
    if(n == 0){
    return 1;
    };
    
    for(int i = 1; i<=n; i++){
        k*=i;
        }
        return k;
        
        }

//the main function
int main(){
    int x,n;
    printf("Please enter the value of x: ");
    scanf("%d", &x);
    printf("\nPlease enter the number of terms: ");
    scanf("%d", &n);
    if((n>-1)&&(n<11)){
        float sum = 0;
        for(int i = 0; i<n; i++){
            float t;
            t = power(x,i)/fact(i);
            sum+=t;
        }
        printf("\n%.4f",sum);
        }
        return 0;
        }
        
