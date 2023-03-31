/* Name = Shikhar Gautam
Section = 2
Roll Number = 22CE10073
Assignment = 4
Description : Program to print the result of N
               no. of students N is given by user
*/

#include <stdio.h>

int main(){

int N, Attendence, ClassTest, Midsem, Endsem;

printf("Enter the number of students : ");
scanf("%d", &N);

if (N<=10){
printf("Enter the marks for student %d " );
printf("Attendence [40]: ");
scanf("%d", &Attendence);
printf("ClassTest [20]: ");
scanf("%d", &ClassTest);
printf("Midsem [60] : ");
scanf("%d", &Midsem);
printf("Endsem [100] : ");
scanf("%d", &Endsem);
}
int Totalmarks;
Totalmarks = (Endsem+Midsem+ClassTest+Attendence)/4;
while(N<=10){
   printf("Student %d \n ");
   printf("Total marks :\n", Totalmarks);
   printf("grade : \n ");
N++;

}


if(Totalmarks>=90){
    printf("Your grade is EX \n");
}
else if(80<=Totalmarks<90){
    printf("Your grade is A \n");

}
else if(70<=Totalmarks<80){
    printf("Your grade is b \n");

}
else if (60<=Totalmarks<70){
    printf("Your grade is C \n");
}
else if (50<=Totalmarks<60){
    printf("Your grade is D \n");
}
else if (35<=Totalmarks<50){
    printf("Your grade is P \n");
}
else if(Totalmarks<35){
    printf("Your grade is F \n");
}


return 0;
}
