//roll_no._23GG10021
//name_kajal_kumari
#include<stdio.h>
#include<stdlib.h>
int arr[100];
int size;
void fill();
void exchange();
void rotate_right();
void rotate_left();
void segregate();
void search();
void fold();
void analyze();

int main(){
  int n,i;
  printf(" enter the number between 1 to 8 :",n);
  scanf("%d",&n);
  if(1<=n<=8){
  switch(n){
  case 1:printf("1--- fill",fill());
    break;
  case 2:printf("2--- exchange",exchange());
    break;
  case 3:printf("3--- rotate right",rotate_right());
    break;
  case 4:printf("4--- rotate left",rotate_left());
    break;
  case 5:printf("5--- segregate",segregate());
    break;
  case 6:printf("6--- search",search());
    break;
  case 7:printf("7--- fold", fold());
    break;
  case 8:printf("8--- analyze",analyze());
    break;
  default :printf(" invalid");
  }
  }
  else{
    printf(" invalid number");
    break;
  }
  printf(" enter the size of array : %d", size);
  scanf(" %d",&size);
  if(1<=size<=100){
    printf(" fill the array", fill());
  }else{
    printf(" re-enter the size of array :");
  }
  return 0;
  for( int i=0;i<n; i++){
    printf(" original array :", a[i]);
    printf(" exchanged array:", exchange());
  } return 0;
  for(int i=0; i<n;i++){
  printf(" the original array:",a[i]);
  printf(" the array after right rotation :", rotate_right());
  } return 0;
  for(int i=0; i<n;i++){
    printf(" the original array:", a[i]);
    printf(" the array after the left rotation:", rotate_left());
  } return 0;
  int m;
  for(int i=0;i<n;i++){
    printf(" the original array:", a[i]);
    printf(" enter the element to be searched:%d ",m, search());
    scanf("%d",&m);
  }return 0;
  for(int i=0; i<n; i++){
    printf(" the original array : " , a[i]);
  }return 0;
    
  void fill(){
    for(int i=0; i<size; i++){
      printf(" enter the elements %d :%d", i,rand()%(999-100)+100);
      scanf("%d", &rand()%(999-100)+100);
    }
  }
  void exchange(){
    for(int i=0;i<=n/2;i++){
     int temp;
    temp=a[i];
    a[i]=a[i+n/2];
    a[i+n/2]=temp;
    }
    void rotate_right(){
      for(int i=1;i<n;i++){
	for(int i =0;i<n;){
	int temp;
	temp=a[0];
	a[0]=a[n];}
      int temp;
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;}
      void rotate_left(){
	for(int i=1;i<n;i++){
	for(int i =0;i<n;){
	int temp;
	temp=a[n];
	a[n]=a[0];
	}
      int temp;
	temp=a[n];
	a[n]=a[n-1];
	a[n-1]=temp;
	}
	void search(){
	  for(int i=0;i<n; i++)
	    { if(a[i]=m){
		printf("the element %d found and its index is %d :", m,i);
	      }
	      else printf(" element not found ");
	    }
	}
	    
	    
  
  
