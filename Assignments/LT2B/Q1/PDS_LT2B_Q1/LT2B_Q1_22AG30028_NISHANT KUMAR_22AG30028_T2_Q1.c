/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment: LAB TEST 2
   description:- QUESTION NUMBER 1
*/

#include <stdio.h>                                 // library function
#include <stdlib.h>

 typedef struct set {                                      // defining a single linked list structure to store a list of character string

      char data;
  /*    set *next;                                                                                                                           */
 }set;





 struct SET {
  char data[25];
 };

int main () {                                          // main function starts


struct SET L1;
struct SET L2;

printf("enter string L1:- ");
scanf("%s",L1.data);

printf("enter string L2:- ");
scanf("%s",L2.data);

printf("L1 = %s\n",L1.data);


printf("L2 = %s\n",L2.data);


return 0;
} 



