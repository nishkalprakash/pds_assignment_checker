#include<stdio.h>
void main(){
    int i=1,n, c=1, l=0,s,l1;
    while(i>=0 && c>0){
        printf("Enter numbers: ");
        scanf("%d",&n);
        
        i=n;
        printf("%d",i);
        printf("\n");
        printf("Largest Number: ");
        
        if(n>l){
        
        printf("%d",n);
        printf("\n");
        s=l;
        l=n;
        
        }
        else{printf("%d",l);
        printf("\n");}
        
        
        printf("Second Largest Number: ");
        
        
        
        if(c==1){
        printf("Value Not Yet Entered \n");}
        
        else{printf("%d",s);
        printf("\n");}
        
        
        c++;
    }
    }
