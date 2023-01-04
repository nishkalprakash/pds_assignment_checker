
#include<stdio.h>
int main()
{

int A[100];
int i,j;
int a,b;
int count;
int c;
int n;
printf("enter numbers in array, press 'x' to stop.\n");
for(i=0,c=0;i<100&&getchar()!='x';i++){
    scanf("%d",&A[i]);
    c++;
    }
//_______________________________________________________________________
printf("enter a number: ");
scanf("%d",&a);

for(i=0;i<c;i++){
    for(j=i+1,count=1;j<c;j++){
        if(A[j]=A[i]){
           count++;
        }
        
        
    }
    if(count==a){
           printf("%d ",A[i]);}   
}
 
    

//printf("%d appears %d times",A[n],a);


return 0;
}
