#include <stdio.h>

int main(){
    int a;
    int i = 0;
    printf("Enter integer: \n");
    scanf("%d", &a);
    
    int s1 = (a*(a + 1))/2; //this is s1
    
    int s2 = (a*(a+1)*(2*a+1))/6; //this is s2
    
    int s3;
    
    int s31 = a%10;
    int s32 = a/100;
    int s33 = (a/10)%10;
    s3 = s31 + s32 + s33;
    
    
        
    printf("s1 = %d \n s2 = %d \n s3 = %d \n", s1, s2, s3);
    
    return 0;
    }
        
