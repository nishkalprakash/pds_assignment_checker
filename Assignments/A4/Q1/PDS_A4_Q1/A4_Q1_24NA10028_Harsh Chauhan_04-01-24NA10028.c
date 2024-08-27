#include<stdio.h>
int main()
{
     int n,i=1,j=1,term;
     printf("Enter the number of terms = ");
     scanf("%d",&n);
     printf("The terms are = ");
     if(n > 0){
     
    while(i<=n)
     {   
        i=term;
        j=i;
        term = j;
        
        printf("%d,",i);
        printf("-%d,",j);
        i++;
        j++;
     
    
     }
     printf("\n");
}      
else{
   printf("N is invalid\n");
}
}

