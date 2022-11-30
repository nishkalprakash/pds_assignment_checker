/* NAME - SIDDHARTH BOADH
ROLL NUMBER- 22HS10050
ASSIGNMENT - Display all the factors of number
*/








#include<stdio.h>
int main()
{
int num,i;
printf("enter the number");
scanf("%d" ,&num);
printf("Factors of %d are: ", num);
for (i = 1; i <= num; ++i){  //for positive integers
if (num % i == 0) {
printf("%d\n", i);
}
}
for (i = 1; i >= num; ++i){ //for negative integers
if (num % i == 0) {
printf("%d\n", i);
}
}

return 0;
}


