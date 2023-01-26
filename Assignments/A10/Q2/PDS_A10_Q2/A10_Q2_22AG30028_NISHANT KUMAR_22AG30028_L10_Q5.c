/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:10
   description:- question number 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

char input[10];

printf("enter all input in one time also (make sure that all input should be in intiger)");

gets(input);

int d,i;
 d= strlen(input);

  for(i=0;i<d;i++)

  { 
  	if(input[i]<input[i+1]&&input[i+1]<input[i+2])

     { printf("input is in ascending order\n");  }

// if(input[i]>input[i+1] && input[i+1]>input[i+2] )

 //  { printf("input is in decending order\n");  }





 // else  { printf("input list is not in shorted order \n");

  }

 




return 0;
} 


