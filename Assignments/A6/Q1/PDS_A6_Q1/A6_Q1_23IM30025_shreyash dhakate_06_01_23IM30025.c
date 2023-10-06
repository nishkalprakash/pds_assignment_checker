//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int arr[100],size;
int main(){
  int a;
  while(size<100){
    printf("1----Fill\n2----Exchange\n3----Rotate right\n4----Rotate left\n5----Segregate\n6----Search\n7----Fold\n8----Analyze\n0,9 or any higher number----Exit\n");
    scanf("%d",&a);
    //choise 1
    if(a==1){
      do{
	printf("Enter Size of the array: ");
      scanf("%d",&size);
      }while(size<1 || size >100);
      
      for(int i=0;i<size;i++){
	arr[i]=(rand()%899 +100);
      }
      
      printf("The Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
    }
    //choice 2
    if(a==2){
      int n;
      if((float)size/2==0) n=size/2;
      else n=(size/2)+1;
      printf("The Original Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
      for(int i=0;i<size/2;i++){
	int x=arr[i];
	arr[i]=arr[n+i];
	arr[n+i]=x;
      }
      printf("The Exchanged Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
    }
    if(a==3){
      int b[100];
      printf("The Original Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
     
      for(int i=0;i<size;i++){
	int y;
	if(i==size-1) arr[0]=y;
	if(i==0){
	  y=arr[i+1];
	  arr[i+1]=arr[i];
      }
	if(i!=0 || i!=(size-1)){
	  int z=arr[i+1];
	  arr[i+1]=y;
	  y=z;
	}
      }
     
      printf("The right rotated  Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
    }
    if(a==4){
      
      printf("The Original Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
      int k=size-1;
     do{
       
       printf("%d \n",k);
       int y,x;
       x=arr[size-1];
	if(k==0) arr[0]=x;
	if(k==size-1){
	  y=arr[k-1];
	  arr[k-1]=arr[k];
      }
	if(k!=0 || k!=(size-1)){
	  int z=arr[k-1];
	  arr[k-1]=y;
	  y=z;
	}
	k--;
     }while(k>=0);
      
     
      printf("The left rotated  Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
     
    }
    if(a==5){
      printf("The Original Array Is:[");
      for(int i=0;i<size;i++){
	printf("%d ,",arr[i]);
      }
      printf("]\n");
      if((float)arr[i]%d==0){
      }

    }
    
    
  }//taking outputs
    


}
