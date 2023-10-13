//Name:Siddharth Behera
//Roll no:23ME10082
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int i,n,r,m;
  unsigned a[10],k;
  float b[10],j,avg=0,sum=0;
  printf("enter the number of students=");//enter the number of students
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the roll number=");//enter the roll
  scanf("%u",&k);
  printf("enter the cgpa=");//enter the cgpa
  scanf("%f",&j);
  a[i]=k;
  b[i]=j;}
  printf("roll number and cgpa of student:\n");
  for(i=0;i<n;i++){//printing the roll and cgpa
    printf("roll:%u cgpa:%f",a[i],b[i]);
    printf("\n");
  }
  for(i=0;i<n;i++){//calculating avg
    sum=sum+b[i];
    avg=sum/n;
    }
    printf("identical cgpa roll number\n");
   
  for(m=0;m<n;m++){//identical roll number
    for(r=0;r<n;r++){
      if(b[m]==b[r]&& a[m]!=a[r]){
	printf("roll:%u cgpa:%f roll:%u cgpa:%f\n",a[m],b[m],a[r],b[r]);
        break;}
    }
  }
   
 
  printf("\nAvg CGPA=%f",avg);//print avg
 
 
}   
