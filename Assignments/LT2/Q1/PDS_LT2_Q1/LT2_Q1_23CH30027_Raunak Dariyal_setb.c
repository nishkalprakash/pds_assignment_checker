//roll no. : 23CH30027
//NAME : raunak dariyal
// set: B

#include<stdio.h>
#include<stdlib.h>

int count[51] = {0};
int countmax = 0;
int xyz[55];

void  maxMin( int a[]){
  int max = 0;
  for( int i = 0; i<50; i++){
    if( a[i]>max){
      max = a[i];
    }
  }
  int min = 101;
  for( int i = 49; i >= 0; i--){
    if( a[i]<min)
      min = a[i];
  }
  printf(" maximum element is %d ", max);
  printf(" minimum element is %d ", min);
  return ;
}

void duplicate( int a[]){
  printf(" number that occur more than once :  \n");
  for( int i = 0; i<50; i++){
    for( int j = i+1; j<50; j++){
      int done[55];
      if (done[j])continue;
      if( a[i] == a[j]){
	printf("%d\n", a[j]);
	done[j] = 1;
      }
    }
  }
}

void highestfreq( int a[]){
  printf(" number that repeats :  \n");
   for( int i = 0; i<50; i++){
    for( int j = i+1; j<50; j++){
      int done[55];
      
     
      if (done[j])continue;
      if( a[i] == a[j]){
	
	printf("%d\n", a[j]);
	done[j] = 1;
	count[i] += 1;
      }
    }
   }
   for( int i = 0;i<50; i++){
     if( count[i] > countmax)
      
       countmax = count[i];
   }
   printf(" number of times a particular number is repeated is : %d\n", countmax);
  
}

void removeduplicate( int a[]){
  printf(" new array with no duplicates \n");
  for(int i = 0; i < 50; i++){
    
    for(int j = i+1; j<50; j++){
      if( a[i] != a[j]){
	printf(" %d", a[i]);
	break;
      }
      break;
    }
  }
}
	
      
    
	
      
	
    
    
   
   


       
     
     

  
  


  
  
  
  
int arr[50];
int main(){
  
  for( int i = 0; i<50; i++){
    
    arr[i] = rand()%(100-20+1) +20;
    
    printf("  %d", arr[i]);
  }
  int n;
  printf("\n\nenter the value of n :  ");
  scanf("%d", &n);
  if( n == 1)
    maxMin(arr);
  if( n == 2 )
    duplicate(arr);
  if ( n == 3)
    highestfreq(arr);
  if ( n == 6)
    removeduplicate(arr);
 
  

  return 0;
}

  
  
  
  
    
    

