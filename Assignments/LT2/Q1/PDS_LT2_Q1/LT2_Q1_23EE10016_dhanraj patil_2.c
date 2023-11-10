//23EE10016
//dhanraj mahesh patil
//23EE10016_LT2_B.c
#include <stdio.h>

   int arr[50];
int main () {
 
  int a,max,min,freq,c;
  max=0;
  min=101;
  freq=0;
  for (int i=0;i<50;i++){
    arr[i]= rand()%81 + 20;
    printf ("arr[%d] = %d\n",i,arr[i]);
    if (arr[i]>max) {
      max = arr[i];
    }
    if (arr[i]<min) {
      min = arr[i];
    }
      
  }
  
  while (1) {
    printf("1: maxmin\n");
    printf("2: duplicate\n");
    printf("3: highestfreq\n");
    printf("4: largestincreasing\n");
    printf("5: largestdecreasing\n");
    printf("6: removeduplicate\n");
    scanf("%d",&a);
    
    if (a == 1){
      printf ("maximum number = %d\n",max);
      printf("minimum number = %d\n",min);
	}
   else if (a == 2){
      for (int j=0;j<50;j++) {
	for (int k=20;k<101;k++){
          if (arr[j] == k){
            printf ("%d occours more than once\n",arr[j]);
	    break;
	  }
	}
      }
   }
      else if (a == 3){
	for (int a=0;a<50;a++) {
          for (int b=20;b<101;b++){
            if (arr[a] = b){
	      freq++;
	      c=freq;
	    }
	  }
	}
	  
      }
    else
      break;
      
    
    }
  return 0;
}

