//roll no:<23CE30018>
//name:<Karina Dhaka>
#include<stdio.h>
int main()
{
  int n,i,j,rolno,CGPA;
  float average,sum;
  printf("enter the number of students:");
  scanf("%d",&n);
  int arr[10],brr[10];
 
  for(i=0;i<n;i++){
    printf("enter student roll no:,");
    printf("CGPA of student:");
    scanf("%d%d",&arr[i],&brr[i]);
  }
  for(i=0;i<n;i++){
  
    printf("rollno:%d\tCGPA:%d\n",arr[i],brr[i]);
  }
  
  for(i=0;i<n;i++){
     sum=sum+brr[i];
  }
     printf("average=%f",sum/n);
   
   for(i=0;      i<n ;i++){
     for(j=1;j<n;j++){
     if(brr[i]==brr[j]){
       printf("rollno:%d\tCGPA:%d\n",arr[i],brr[i]);
     }
     
     }
   }
  
  return 0;
}
   
  
