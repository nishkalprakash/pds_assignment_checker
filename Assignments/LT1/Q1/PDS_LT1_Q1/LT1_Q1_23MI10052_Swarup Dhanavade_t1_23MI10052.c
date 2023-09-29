// SWARUP JAYARAM DHANAVADE
// 23MI10052

#include<stdio.h>

int main()
{ int n , x,count=0,zero=0,sum=0; // part a start 
  printf("Enter number (<9999):");
  scanf("%d",&n);
  for (n;n>0;n/10){
   if (count ==0)  x= (n%10)+1;
   if (count ==1)  x= (n%10)+1;
   if (count ==2)  x= (n%10)+1;
   if (count ==3)  x= (n%10)+1;
    count++;
  }
  printf("Entered number is : %d\n",n);
  printf("encoded number is :");  // part a end
  for (count;count>=0;count--){  // part b start
    printf("%d ",x);
    if (x!= 10) sum += x;
    if (x ==10) sum += 1;
  }
  printf("checksum is :");
  for (count;count>=0;count--){
     printf("%d ",x);
  } if (sum >9) printf("%d",sum);
  if(sum<10) printf("0%d",sum); // part b end
  printf(" part c \n");  // part c
  for (count;count>=0;count--){
    if (x!= 10)  printf("%d,%d ",x,zero);
    if (x==10) printf("1000");
  }

    
  

  

  return 0;
 
  }
