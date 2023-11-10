//Roll.no 23AE10036
//T.Sritan set b



#include<stdio.h>
#include<stdlib.h>
int arr[50];
int afd[50];
int arr2[50];

void maxmin();
void duplicate();
void higestfrequency();
void removeduplicate();
void largestincreasing();
void largestdecreasing();

int main(){
  int n;
  for(int i=0;i<50;i++){
    arr[i]=rand()%81+20;
    printf("%d ",arr[i]);
  }
  printf("\n");
  
  while(1){
    printf("1:maxMin \n ");
    printf("2:duplicate \n ");
    printf("3:higestFreq \n ");
    printf("4:largestincreasing \n ");
    printf("5:largestdecreasing \n ");
    printf("6:remove duplicate \n ");

      printf("enter ur choice\n ");
      scanf("%d",&n);

      if((n>6)||(n<1)){
	break;
      }
      if(n==1){maxmin();}
      if(n==2){duplicate();}
      if(n==3){ higestfrequency();}
       if(n==4){largestincreasing();}
        if(n==5){largestdecreasing();}
       
       if(n==6){removeduplicate();}
  }



  
  
  return 0;
}


void maxmin(){
  int max=0,min=101;

  for(int i=0;i<50;i++){
    printf("%d ",arr[i]);
    if(arr[i]>max){max=arr[i];}
    if(arr[i]<min){min=arr[i];}
  }
 printf("\n");
 printf("the max value= %d min= %d \n",max,min);

}

void duplicate(){
    for(int i=0;i<50;i++){
      printf("%d ",arr[i]);
        }
 printf("\n");
  int j;
    for(int i=0;i<50;i++){  
      for( j=i+1;j<50;j++){
	if(arr[i]==arr[j]){  printf("%d ",arr[i]);}
      }
      
    }
printf("these no are repeated\n");
}

void higestfrequency(){
  int k,index; int maxf=0;
  
  for(int i=0;i<50;i++){
       printf("%d ",arr[i]);
         }
    printf("\n");

 for(int i=0;i<50;i++){  
   k=0;
       for(int j=i+1;j<50;j++){
           if(arr[i]==arr[j]){ k++; }
           }
       
      if(maxf<k){
            maxf=k;
            index=i;
              } 
    }


 printf("the no with higest frequency is %d with frequency %d \n",arr[index],maxf+1);
}
void removeduplicate(){
  int k=0;
    for(int i=0;i<50;i++){  
       for(int j=i+1;j<50;j++){
	 if(arr[i]==arr[j]){
	   afd[k]=arr[i];
	   k++;
	         }
           }
   }

     k=0;
    for(int i=0;i<50;i++){

      for(int j=0;j<50;j++){
       if(arr[i]==afd[j]){
	 arr[j]=0;}   
          }
     
     if(arr[i]!=0){
       arr2[k]=arr[i];
       k++;}
    }

    for(int i=0;i<50;i++){
      if(i<k){
	arr[i]=arr2[i];
	printf("%d ",arr[2]);
      }
      else{arr[i]='\0';}
      

    }

}
void largestincreasing(){
  int t=0;int max=0;int index;
 for(int i=0;i<50;i++){
       printf("%d ",arr[i]);
         }
    printf("\n");

    for(int i=0;i<50;i++){
      for(int j=i+1;j<50;j++){
	if(arr[i]<arr[j]){
	  t++;}
	else{j=49;}
       }
      if(t>max){
	max=t;
	index=i;
	t=0;
      }
    }
    
    for(int i=index;i<max+1;i++){
      printf("%d ",arr[i]);
    }
      printf("\n"); 
    


}

void largestdecreasing(){

int t;
 for(int i=0;i<50;i++){
       printf("%d ",arr[i]);
         }
    printf("\n");
    for(int i=49;i>=0;i--){
      for(int j=i;j>=0;j--){
	if(arr[i]>arr[j]){
	  t=arr[i];
	  arr[i]=arr[j];
	  arr[j]=t;}
      }
    }

for(int i=0;i<50;i++){
       printf("%d ",arr[i]);
         }
 printf("\n");




}
