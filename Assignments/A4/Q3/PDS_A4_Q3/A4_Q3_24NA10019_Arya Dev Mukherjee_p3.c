#include<stdio.h>
int line(int i){
    for(int j = i; j<=(2*i + 1); j++){
        return j%10;
        }
        }
        
int rev(int i){
    for(int j = (2*i); j>=i; j--){
        return j%10;
        }
        }
       
       
    
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d" , &n);
    for(int i = 0; i <= n; i++){
        for(int j = (n - i); j>=0; j --){
            printf(" ");
            }
        printf("%d", line(i));
        printf("%d\n", rev(i));
        }
        
        return 0;
        }
               
            
        
