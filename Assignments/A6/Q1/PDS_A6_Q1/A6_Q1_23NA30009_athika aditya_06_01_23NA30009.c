//roll no-23NA30009
//athika

#include<stdio.h>
#include<stdlib.h>

int fill();
void exchange();
void RotateRight();
void segregate();
void search();
int size;
int even[100];
int odd[100];

int main(){

  int arr[100];
  int size;
  int choice;

  printf("enter size of array");

  printf("1--fill\n");
  printf("2--enxchange\n");
  printf("3--rotate right\n");
  printf("4--roate left\n");
  printf("5--segregate\n");
  printf("6--search\n");
  printf("7--fold\n");
  printf("8--analyze\n");
  printf("0,9 or any other higher number--exit\n");


  scanf("%d",&choice);

  if (choice==0||choice==9||choice>=9){
    m=0;
    printf("loop exit\n");
    return 0;
  }
  
}
int fill(

if (choice==1){
  fill(&arr);
 }
if(choice==2){
  exchange();
 }

if(choice==3){
  RotateRight();
 }

if(choice==4){
  exchange();
 }

if(choice==5){
  segregate();
 }

if(choice==6){
  search();
 }
if(choice==7){
  fold();
 }
if(choice==8){
  analyze();
 }



  
void fill(arr);
for(int i=0;i<size;i++){
  arr[i]=rand()%900+100;
 }
for(int i=0;i<size;i++){
  printf("arr[%d]=%d,",i,arr[i]);
 }
 printf("\n");
 return size;
}
void exchange(){
  printf("array content:\n");

  for (int i=0;i<size;i++){
    printf("arr[%d]=%d,",i,arr[i]);
  }
  printf("\n");
  printf("the exchanged values are:\n");

  for (int i=0;i<size/2;i++){
    int temp;
    temp=arr[i];
    arr[i]=arr[size/2+i];
    arr[size/2+i]=temp;

  }
  for(int i=0;i<size;i++){
    printf("arr[%d]=%d,",i,arr[i]);
  }
  printf("\n");
}

  void RotateRight(){
    printf("orriginal array:\n");
   
    for(int i=0;i<size;i++){
      printf("arr[%d]=%d,",i,arr[i]);
    }

    arr[size-1]=temp;

    for(int i=0;i<size;i++){
      int trial;
      trial=arr[i];
      arr[i+1]=trial
    }

    arr[0]=temp;

    printf("rotate right array:\n");

    for(int i=0;i<size;i++){
      printf("arr[%d]=%d,",i,arr[i]);
    }
     printf("\n");
  }

  void segregate(){
    int evencount=0;
    int oddcount=0;
    
    printf("orriginal array:\n");
    
    for(int i=0;i<size;i++){
      printf("arr[%d]=%d,",i,arr[i]);
    }
     for(int i=0;i<size;i++){
       if arr[i]%2==0){
       even[evencount]=arr[i];
       evencount++;
     }
     else{
       odd[oddcount]=arr[i];
       oddcount++;
     }
  }
  for(int i=0;i<=oddcount;i++){
     printf("odd[%d]=%d,",i,odd[i]);
  }
  for(int i=0;i<=evencount;i++){
     printf("even[%d]=%d,",i,even[i]);
  }
  printf("\n");
}

void search(){
  int search;
  int success;

  printf("orriginal array:\n");

  for(int i=0;i<size;i++){
      printf("arr[%d]=%d,",i,arr[i]);
    }
     printf("\n");

     printf("enter number you want to earch:\n");
     scanf("%d",&search);

     for(int i=0;i<size;i++){
       if(search==arr[i]){
	 success=1;
       }
       else{
	 success=0;
       }
       if(success=1){
	 printf("search identified\n");
       }
       else{
	 printf("not identified\n");
       }
       printf("\n");
     }

     void fold(){
       int foldedArr[size];
       printf("orriginal array:\n");

       for(int i=0;i<size;i++){
        printf("arr[%d]=%d,",i,arr[i]);
    }
     printf("\n");

     if(size%2==0){
       for(int i=0;i<size/2;i++){
	 foldedArr[i]=arr[i]+arr[size-1-i];
       }

       printf("folded array:\n");
       
       for(int i=0;i<size/2;i++){
	 printf("folderArr[%d]=%d,",i,FoldedArr[i]);
       }

       return 0;
     }


       
	 
     

     

   

   
 









 








  







	 
    
