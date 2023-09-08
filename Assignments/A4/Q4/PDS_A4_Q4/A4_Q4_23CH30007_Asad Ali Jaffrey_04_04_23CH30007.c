//Roll No.-23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int pat_end,n,i=1,pat_start,pat_2,last_5,last_1;  //i denotes the turn, last_1: second last 1, last_5 : second last 5, 

  while (1) {
    printf("Enter a single digit number\n");
    scanf("%d",&n);
    if (n<0) {
      break;
    }
    if (n==5) {
      last_5=pat_start;      //checks the position of the second last 5 too (to solve the problem that if in case the random digit is 5 the pat_start sets to that i)
      pat_start=i;
    }
    if (n==1) {
      last_1=pat_2;           //checks the position of the second last 1 too (to solve the problem that if in case the random digit is 1 the pat_2 sets to that i)
      pat_2=i;
    }
    if (n==7 && (i-3)>=1) {
      if ((pat_2==(i-2)||last_1==(i-2)) && (pat_start==i-3||last_5==i-3)) {   //either the last 5 or second last 5 must be entered 3 turns before 7,last 1 or second last 1 must be entered 2 turns before 7 
	printf("Pattern found\n");
      }
    }
    i++;
  }

    return 0;
  }
    
    
