//Shrey G Patel
//23CS10051

#include <stdio.h>
int main()

{

int Marks;

printf("Enter your marks(out of 100):");
scanf("%d",&Marks);


if (Marks>=90 && Marks<=100)
printf("Your grade is EX\n");

else if (Marks>=80 && Marks <90)
printf("Your grade is A\n");

else if (Marks>=70 && Marks <80)
printf("Your grade is B\n");

else if (Marks>=60 && Marks <70)
printf("Your grade is C\n");

else if (Marks>=50 && Marks <60)
if(Marks>=0 && Marks<=100)

{
printf("Your grade is D\n");

else if (Marks>=35 && Marks <50)
printf("Your grade is P\n");

else if (Marks<35)
printf("Your grade is F\n");
 
else printf("Invalid Input");

return 0;

}
