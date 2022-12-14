/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Test set: A
* Question 2
* Description : prints out a pattern based on user input
*/
#include<stdio.h>
int main()
{
int count=1;
int n,i,j;
int a[n];
printf("enter an integer preferably within the range [2,10]:");
  scanf("%d", &n);
  for(i=0; i<n; i++){//i controls the number of rows
for(j=0; j<i; j++){//j controls the number of columns
 while(count<=a[j]){
  printf("%d", count); // count is the changing increasing variable
  count++;
}
    
}
printf("\n");
}
return 0;
}

