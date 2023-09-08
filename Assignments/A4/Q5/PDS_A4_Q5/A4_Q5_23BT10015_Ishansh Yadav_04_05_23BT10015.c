//Name - Ishansh Yadav
//Roll No. - 23BT10015

#include<stdio.h>

int main()
{ int num, max=0 , max2=0, i, sum=0, digit;
  printf("Enter a number:");
  scanf("%d", &num);
  if(num<10){printf("Sum is %d\n", sum=num%10);
       	          printf("Second largest digit is 0\n");
                  return 0;};
  for(i=1; num>=1; i++)                  
      {sum= sum + num%10;
      	digit=num%10;
       if(digit>max) {max2 =max;max = digit;}
       else if((digit>max2)&&(digit<max)) max2 = digit;
       num=num/10;
      }
      printf("Sum is %d\n", sum);
      printf("Largest digit is %d\n", max);
      printf("Second largest digit is %d\n", max2);
   return 0;
}