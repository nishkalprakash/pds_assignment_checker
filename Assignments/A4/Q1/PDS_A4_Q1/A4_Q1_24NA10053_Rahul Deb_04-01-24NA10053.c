#include<stdio.h>
void main(){
    int a=1,b=1,c,n,d,e;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n>0){
    printf("%d ,%d ,",a,b*-1);
    
    for(int i=1;i<n-1;i++){
        c=a+b;
        a=b;
        b=c;
        if(i%2==0){
            c=c*-1;
            printf("%d ,",c);}
        else{printf("%d ,",c);}
        }
        }
    
    else{printf("N IS INVALID");}
        
        


}
