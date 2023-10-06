//name: r.sai pranav murari
 //roll no:23EC10066
#include<stdio.h>
#include<stdlib.h>
 int arr[100];
int size,i,temp;
int ch;
void fill(int n);
void exchange(int n);
void rotate_right(int n);
void rotate_left(int n);
void segregate(int n);
void search(int n);
void fold(int n);
void analyse(int n);
int main(){
  printf("enter size : ");
  scanf("%d",&size);
    printf("1--fill\n");
    printf("2--exchange\n");
    printf("3--rotate right\n");
    printf("4--rotate left\n");
    printf("5--segregate\n");
    printf("6--search\n");
    printf("7--fold\n");
    printf("8--analyse\n");
    printf("0,9 or higher--exit\n");
    printf("enter menu choices : ");
    scanf("%d",&ch);
    while(1){
    if(ch==1){
      fill(size);
      break;
    }
    else if(ch==2){
     exchange(size);
     break;
    }
     else if(ch==3){
     rotate_right(size);
     break;
     }
     else if(ch==4){
       rotate_left(size);
       break;}
     else if(ch==5){
     segregate(size);
     break;}
    else if(ch==6){
     search(size);
     break;}
    else if(ch==7){
     fold(size);
     break;}
     else if(ch==8){
     analyse(size);
     break;}
      else if(ch==0&&ch>=9){
	 break;
       }
    }
   return 0;
}
void fill(int n)
{
 
  while(1)
    {
     printf("enter size :");
     scanf("%d",&size);
     
      for(int i=0;i<size;i++)
      {
      arr[i]=rand()%900+100;
      }
    for(int i=0;i<size;i++){
      printf("the elements of array are : %d\n",arr[i]);
    }
     if(1<size<100)
       {
       break;
       } 
    }
 
}

void exchange(int n){
  for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
  for(i=0;i<size/2;i++){
    arr[i]=temp;
    arr[size-i]=arr[i];
    temp=arr[size-i];
  }
  for(i=0;i<size;i++){
     printf("the new array is : %d",arr[i]);
  }
 
}
void rotate_right(int n){
   for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
   for(i=0;i<size-1;i++){
     arr[i]=temp;
     arr[i+1]=arr[i];
     temp=arr[i+1];
   }
   arr[size]=arr[0];
   for(i=0;i<size;i++){
     printf("the rotate right array is : %d",arr[i]);
  }
}
void rotate_left(int n){
   for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
   for(i=1;i<size;i++){
     arr[i]=temp;
     arr[i]=arr[i-1];
     temp=arr[i-1];
   }
   arr[0]=arr[size];
   for(i=0;i<size;i++){
     printf("the rotate left array is : %d",arr[i]);
   }
}
void segregate(int n){
   for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
  
  
}
void search(int n){
    for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
   int val;
   printf("enter an integer value to be searched");
   scanf("%d",&val);
   for(i=0;i<size;i++){
     arr[i]=val;
     if(arr[i]==val){
       printf("the array is located at %d",i);
     }
   else{
     printf("search not found");
   }
   }
}
void fold(int n){
  int sum;
  for(i=0;i<size/2;i++){
   arr[i] =  arr[i]+arr[size-i-1];
   printf("%d",arr[i]);
  
  }

}
void analyse(int n){
   for(i=0;i<size;i++){
    arr[i]=rand()%900+100;
  }
   for(i=0;i<size;i++){
     printf("the array is : %d",arr[i]);
  }
  
}
