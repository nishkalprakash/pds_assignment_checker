//Name :Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main ()
{ int n ,array[50];
  printf("The number of such numbers to be generated:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    array[i]=rand()%41+10;
  }
  printf("The array is:");
  for(int i=0;i<n;i++){
    printf("%d,",array[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
	if( i!=j && j!=k && i<j && j<k && array[i]+array[j]+array[k]==60)
	  printf("The triplets with the sum 60 are of indices [%d],[%d],[%d]:%d %d %d\n",i,j,k,array[i],array[j],array[k]);
      }
    }
  }
  
  return 0 ;
}

	  
	   
 
