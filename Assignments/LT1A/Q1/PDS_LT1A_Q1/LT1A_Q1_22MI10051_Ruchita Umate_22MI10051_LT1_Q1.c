#include <stdio.h>
int main(){
int n,sum=0,j;
int i=1;
printf("Enter a number :");
scanf("%d",&n);

if(n>0)
{
       while( i<n ){
   
        if(n%i==0)
       {
        sum=sum+i;
          i++;
}
        return sum;
       }

   if(sum==n){
    printf("%d",n);

   }

}

if(n<0){
printf("Invalid Input");
}

if(n==1 || n==0){
printf("Invalid Input");
}

return 0;
}
