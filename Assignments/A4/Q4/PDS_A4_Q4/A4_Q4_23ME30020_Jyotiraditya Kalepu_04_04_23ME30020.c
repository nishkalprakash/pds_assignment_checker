//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int cur_num=0,prev_1=0,prev_2=0,prev_3=0;
  printf("Enter a single digit number\n");
  while(1) // Running an infinite loop
    {
      scanf("%d",&cur_num);
      if(cur_num<0) break;  // Exiting the loop when a negative number is entered
      if(cur_num == 7 && prev_2 == 1 && prev_3 == 5){  // Checking if the pattern is formed
	printf("Pattern found\n");   
	prev_1=0,prev_2=0,prev_3=0;
      }
      else{               
	prev_3 = prev_2;
	prev_2 = prev_1;
	prev_1 = cur_num;
      }
    }
  return 0;
}
