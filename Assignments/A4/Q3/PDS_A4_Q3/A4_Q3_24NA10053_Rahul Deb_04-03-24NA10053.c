#include<stdio.h>
void main(){
    int n,c,t;
    
    printf("Enter the number of rows :");
    scanf("%d",&n);
    c=n-1;
    if(n>0){
    for(int i=1;i<n;i++){
       
       
       
        /*for(int j=1;j<=2*i-1;j++){
            for(int k=1;k<=c;k++){
                printf(" ");} 
            printf("%d",j);
            for(int k=1;k<=c;k++){
                printf(" ");}
            c--;      */
            
            
        t=1;
        for(int k=1;k<=c;k++){
                printf(" ");}
        for(int j=i;j<=2*i-1;j++){
        printf("%d",j);
        
        
        t=j;}
        for(int l=2*i-2;l>=i;l--){
        printf("%d",l);}
        for(int k=1;k<=c;k++){
                printf(" ");}
                
        c--;
        printf("\n");
        
        }
    
    
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    else{printf("Enter a positive value for number of rows");}
    
}
