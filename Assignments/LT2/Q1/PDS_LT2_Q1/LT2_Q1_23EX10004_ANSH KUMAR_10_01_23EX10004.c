//roll no- 23EX10004
//NAME-ANSH KUMAR
//SET B
#include<stdio.h>
#include<stdlib.h>
int arr[50];

void maxmin(int arr[50],int n){
  int max=0,min=999999;
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    if(arr[i]>max){
      max=arr[i];
    }
  }
    for(int i=0;i<n;i++){
      if( arr[i]<min){
	min=arr[i];
	  }
    }
      printf("the maximum value is %d and minimum is %d\n",max,min);
}

void duplicate(int arr[50],int n){
  int count=0;
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
	if(arr[i]==arr[j]){
	  count++;
	}
      }
    }
	printf(" the number of repeated number is %d\n",count);
	if(count==0){
	  printf("no duplicate number");
	}

}
      
   

void highestfreq(int arr[50],int n){
  int freq[250]={0};
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
   
}
  
 
  
	  

void largestincreasing(int arr[50],int n){
	    int count[100]={0};
	    int num;
	    
	     for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
	      for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		  if(arr[i]>arr[j]){
		    num=1;
		  }
		    else if(num==0){
		      printf("%d",arr[i]);
		    }
		}
	      }
	    
	  }

void largestdecreasing(int arr[50],int n){
    for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
}




void removeduplicate(int arr[50],int n){
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
    }
}

int main(){
  int n,k;
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("the  random numbers in range 20 to 100 are :\n");
  
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]=19+rand()%80);
  }
  printf("the menu is :\n");
  printf("1:maxmin\n");
   printf("2:duplicate\n");
    printf("3:highestfreq\n");
     printf("4:largestincreasing\n");
      printf("5:largestdecreasing\n");
      printf("6:removeduplicate\n");
      while(1){
	printf("enter the choice number\n");
	scanf("%d",&k);
	if(k==1){
	  maxmin(arr,n);
	}
	else if(k==2){
	  duplicate(arr,n);
	}
	else if(k==3){
	  highestfreq(arr,n);
      }
	else if(k==4){
	  largestincreasing(arr,n);
	    }
		else if(k==5){
		  largestdecreasing(arr,n);
	    }
		else if(k==6){
		  removeduplicate(arr,n);
	    }
		else if(k<1||k>6){
			break;
		}
      }
			
	return 0;
}
    
    
  
