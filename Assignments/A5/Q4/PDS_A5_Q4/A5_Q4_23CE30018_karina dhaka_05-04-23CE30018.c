//roll no:<23CE30018>
//name:<Karina Dhaka>
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[20],brr[20],crr[20],i,n;   //arr[20]=roll numbrers,brr[20]=age,crr[20]=marks
  for(i=0;i<20;i++){
  arr[i]=(rand()%1001)+1000;
  brr[i]=(rand()%11)+15;
  crr[i]=(rand()%101);
  }
  for(i=0;i<20;i++){
    printf("Rollno:%d\tAge:%d\tMarks:%d\t\n",arr[i],brr[i],crr[i]);
  }
  return 0;
}
