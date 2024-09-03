#include<stdio.h>
void main(){
#define N 100
#define M 10
int n;
printf("Enter the value of n");
scanf("%d",&n);

if(n<N){
    int Haystack[n];
    for(int i=0;i<n;i++){
    scanf("%d",&Haystack[i]);
    if(Haystack[i]!=1 || Haystack[i]!=0){
     printf("Error :Invalid character in the haystack");
    }}
    int m;
    //printf("Enter value of m");
    scanf("%d",&m);
    if(m<n){
    
    int needle[m];
    for(int i=0;i<m;i++){
        scanf("%d",&needle[i]);
        }
    }
    else{printf("Error: needle_len> haystack_len");}
    printf("Haystack: ");
    for(int i=0;i<n;i++){
    printf("%d",Haystack[i]);}
    
    printf("\n");
    
    printf("Needle: ");
    for(int i=0;i<m;i++){
        printf("%d",needle[i]);
        }
    printf("\n");
    
    
   //checking matches
   int match= 0;
   int c=0;
   int check[m];
   for(int j=0;j<n/m;j++){
   for(int i=0;i<n-m;i+=m){
       check[i%4]=Haystack[i];
       /*for(int j=0;j<m;j++){
           check[j]=Haystack[i]
       }*/
       
       }
       
       for(int x=0;x<m;x++){
       if(needle[x]==check[x]){
       match++;
           }
       }
       }
   if(match>0){
   printf("Repeated");}


}
}
