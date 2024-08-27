#include <stdio.h>
int main()
{
int max = 0 , counter , max2 = 0 ;
printf("Enter a sequence of positive integers ");
scanf("%d", &counter);
while (counter > 0) {
	if (counter > max) max = counter;
	if ((counter < max) &&  (counter > max2)) {max2 = counter;}
	
	printf ("The largest number is : %d\n",max);
	printf("The second largest number : %d\n",max2); 
	scanf("%d", &counter);
}
return 0;
} 

