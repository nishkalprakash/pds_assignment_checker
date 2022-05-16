/* Name			: Kshitij Das
   Class No.	: 2
   package 		: notepad++
   Roll No. 	: 21CS10039
   Department	: CSE
   OS			: MS Windows 11
 */
 
 #include <stdio.h>
  int main(){
	  
	  int a , u, alpha;
	  float d, t;
	  printf("Enter the value of a, u, alpha in order:");
	  scanf("%d %d %d", &a, &u, &alpha);
	  printf("\nEnter the time:");
	  scanf("%f", &t);
	  d = a + u*t + 0.5* alpha*t*t;
	  printf("Distance = %f", d);
	  return 0;
  }
	  
	  