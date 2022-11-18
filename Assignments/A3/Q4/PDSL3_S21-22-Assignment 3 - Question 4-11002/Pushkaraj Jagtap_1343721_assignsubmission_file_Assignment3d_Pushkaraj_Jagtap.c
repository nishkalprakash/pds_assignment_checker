/*Name Pushkaraj Jagtap
  21MF3IM12
  Section 3  group-5
  Codeblocks
  Assigment 3c*/

#include<stdio.h>

int linear_search(int data[],int size,int value){

       for(int i=0; i<size; i++)

       {
       if(data[i]==value)
       return i;
       }
    return -1;

}

int binary_search(int data[],int size,int value){

       for(int i=0;i<size;i++)
       {
       data[0]<data[i]<data[size];
       if(data[i]=value)
       return i;
       }
     return -1;

}


int main(){
  int t;
  printf("Choose the algorithm: Type 1 for linear search and 2 for binary search");
  scanf("%d",t);

  if(t==1){
     printf("enter data,size and value to search");
      linear_search(data[],size,value);

  }
  else{
      printf("enter data,size and value to search");
      binary_search(data[],size,value);


  }


}
