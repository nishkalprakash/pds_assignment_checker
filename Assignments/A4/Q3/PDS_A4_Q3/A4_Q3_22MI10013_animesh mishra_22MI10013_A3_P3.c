/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:4
discription : number to reverse words
*/
      
#include<stdio.h>
int main()
{
long int num,rem;
    
    printf("enter the number");
    scanf("%ld" , &num);


  while(num !=0)
  {   
           rem = num%10;
          
           switch(rem)
    {

         case 0:printf("zero"); break;
         case 1:printf("one"); break;
         case 2:printf("two"); break;
         case 3:printf("three"); break;
         case 4:printf("four"); break;
         case 5:printf("five"); break;
         case 6:printf("six"); break;
         case 7:printf("seven"); break;
         case 8:printf("eight"); break;
         case 9:printf("nine"); break;
    }
          
              num=num/10;
}
   
    return 0;
}
