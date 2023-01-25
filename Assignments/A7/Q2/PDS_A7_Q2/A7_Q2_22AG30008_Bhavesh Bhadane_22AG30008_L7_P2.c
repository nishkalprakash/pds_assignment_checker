#include<stdio.h>

int main(){
	int i,m,n,a[n];
	printf("Enter the size of array");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++){
		 scanf("%d",&a[i]);
	                }
	printf("\nEnter the number m");
    scanf("%d",&m);
    printf("\n");
    ;

	for(i=0;i<n;i++){
        
		int count=1;
          if(a[i]==a[i+1]){
              count=count+1;
              if (count==m){
              	printf("%d appears %d times \n",a[i],m);
              }
          
          }
      
       }  


   if(a[i]>a[i+1] || a[i]<a[i+1])
   {
   	printf("NO number appears %d times ",m);
   }    
	
return 0;
}


	

