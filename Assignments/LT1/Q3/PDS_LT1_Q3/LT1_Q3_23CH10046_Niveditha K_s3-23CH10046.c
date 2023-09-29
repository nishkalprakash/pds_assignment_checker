//Roll No.:23CH10046
//Name:Niveditha K

#include <stdio.h>
int main()
{
  int num[100];
  char ch;
  printf("Enter numbers: ");


  for(int i=0;i<100;i++){
    scanf("%d",&num[i]);
    if(num[i]<0) return 0;
    //if 0 is entered, it stops taking input
    if((num[i])==0) break;
  }
  
  int max=0;
  for(int j=0;j<100;j++){
    if(num[j]>max)
      max=num[j];
  }printf("Largest number = %d\n",max);
  
  int max2=0;
  for(int k=0;k<100;k++){
    if(num[k]>max2 && num[k]!=max)
      max2=num[k];
  }printf("Second largest number: %d\n",max2);
  
  int min=999;
  for(int l=0;l<100;l++){
    if(num[l]<min)
      min=num[l];
  }printf("Smallest number: %d\n",min);
  
  return 0;
}
