//roll_no._23GG10021
//name_kajal_kumari
#include<stdio.h>
#include<stdlib.h>
void sum(int a[]);
void max(int a[]);
void reverse(int a[],int n);
int main(){
  int n;
  int a[];
  int sum=0;
  printf(" the number of elements in array :",n);
  scanf("%d", &n);
  for(int i=0;i<n; i++){
    printf(" enter the elements :");
    scanf("%d",rand()%(30-20)+20);
    printf(" the elements %d is %d :",i+1,rand()%(30-20)+20 );
    printf(" the sum of elements are: %d", sum());
    sum++;
    
  }return 0;
  for( int i=0;i<n; i++){
    printf(" the maximum element : %d", max());
  
  }return 0;
  for( int i=0; i<n;i++){
    printf(" the reverse array %d : %d", i,reverse());
  } return 0;
  void sum(){
    for(int i=0; i<n;i++){
  if(a[i]==0){
    return sum=0;
  }
  else
    return sum=a[i]+sum(a[i+1]);
    }
  }
  void max(){
    for(int i=0;i<n;i++){
    if(a[i]>a[i+1]){
      return max = a[i];
    }
    else
     return max=a[i+1];
    max=max();
  }
  }
    void reverse()
    { for(int i=0; i<n; i++){
      int temp;
      temp= a[i];
      a[i]= a[n-i];
      a[n-i]=temp;
      } return reverse= reverse(a[]);
    }
      
      
    
  
