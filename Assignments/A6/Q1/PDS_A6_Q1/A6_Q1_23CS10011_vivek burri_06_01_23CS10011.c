// name vivek
// roll no 23CS10011
#include<stdio.h>
#include<stdlib.h>
int arr[100];
int size;
void fill( int arr[],int size);
void exchange(int arr[],int size);
void rotateleft(int arr[],int size);
void rotateright(int arr[],int size);
void segregate(int arr[],int size);
void search(int arr[],int size);
void fold(int arr[],int size);
void analyze(int arr[],int size);

int main(){
  printf("1---fill\n2--exchange---\n3---rotate right\n4---rotae left\n5---segregate\n6----search\n7---fold\n8----analyze\n0,9 or any higher number ---exit\n");
  int i=0;
  while (i>=0){
  scanf("%d",&i);
  if (i==1) { fill(arr,size);continue;}
  else if (i==2) { exchange(arr,size);continue;}
  else if (i==3)  {rotateleft(arr,size);continue;}
  else if (i==4) { rotateright(arr,size);continue;}
  else if (i==5)  { segregate(arr,size);continue;}
  else if (i==6) { search(arr,size);continue;}
 
  else if (i==9||i==0){ return 0;}
  }}
  void fill(int arr[],int size){
    
    printf("enter size");
   
    scanf("\n%d",&size);
    for(int i=0;i<size;i++){
      arr[i]=(rand()%900)+100;
      printf("%d\n",arr[i]);
    }
    return;
  }
  void exchange(int arr[],int size){
    int t,a,b=(size+1/2);
    for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
    for(t=(size+1/2);t<size;t++){
      a=arr[t];
      arr[t]=arr[t-b];
      arr[t-b]=a;
	}
    for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
    return;
  }
  void rotateright  (int arr[],int size){
    int a,b;
     for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
     for (a=size-1;a>0;a--){
       b=arr[a];
       arr[a]=arr[a-1];
       arr[a-1]=arr[b];
     }
     for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
     return;
  }
  void rotateleft(int arr[],int size){
     int a,b;
     for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
     for(int a=0;a<size-1;a++){
        b=arr[a];
       arr[a]=arr[a+1];
       arr[a+1]=arr[b];
     }
     for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
     return;
  }
  void segregate(int arr[],int size){
    int a,b,y[size];
    for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
    for(int i=0;i<size;i++){
      if (arr[i]%2==0) y[a++]=arr[i];
    }
    for (int i=0;i<size;i++)
      if (arr[i]%2!=0) y[a++]=arr[i];
    return;
  }
  void search (int arr[],int size){
    int a,b;
    for(int i=0;i<size;i++)
      printf("%d\n",arr[i]);
    printf("enter the number");
    scanf("%d\n",&a);
    for(int i=0;i<size;i++){
      if (a==arr[i]){
	printf("the array index is %d",i);
	b++;
      }
    }
    if (b==0) printf("not found");
    return;
    
  }
  
    
    
			 
			 
  
       
     
      
    
	  
