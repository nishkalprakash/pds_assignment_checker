
#include<stdio.h>
/*struct person{
char name[30];
char passport_no[10];
char nationality[15];
float dd;
float mm;
float year;





}p1,p2;

int main()
{



printf("enter records of 1st person\n");

printf("\n enter name : ");
scanf("%s", p1.name[30]);
printf("\n enter passport_no : ");
scanf("%s", p1.passport_no[10]);
printf("\n enter nationality : ");
scanf("%s", p1.nationality[15]);

printf("enter dob in the format dd-mm-year : ");
scanf("%f-%f-%f", &p1.dd, &p1.mm, &p1.year);
//

struct student {
char firstName[50];
int roll;
float marks;
} s[5];
int main() {
int i;
printf("Enter information of students:\n");

for (i = 0; i < 5; ++i) {
s[i].roll = i + 1;
printf("\nFor roll number%d,\n", s[i].roll);
printf("Enter first name: ");
scanf("%s", s[i].firstName);
printf("Enter marks: ");
scanf("%f", &s[i].marks);
}
printf("Displaying Information:\n\n");

for (i = 0; i < 5; ++i) {
printf("\nRoll number: %d\n", i + 1);
printf("First name: ");
puts(s[i].firstName);
printf("Marks: %.1f", s[i].marks);
printf("\n");
}
return 0;
}
*/

struct person{
char name[30];
char passport_no[10];
char nationality[15];
float dd;
float mm;
float year;
float dob;
}s[2];

int main()
{
    int i;
    for(i=0;i<2;++i)
   {
    printf("Enter  name: ");
    scanf("%s", s[i].Name[30]);

    printf("enter passport_no : ");
    scanf("%s", s[i].passport_no[10]);

    printf("enter nationality : ");
    scanf("%s", s[i].nationality[15]);

    printf("enter dob in the format dd-mm-year : ");
    scanf("%f-%f-%f" &s[i].dd,&s[i].mm, &s[i].year);
   }
    printf("Displaying Information:\n\n");
    for(i=0;i<2;++i)
    {

    printf(" name: ");
    puts(s[i].Name[30]);
    printf("passport_no : ");
    puts(s[i].passport_no[10]);
    printf("nationality : ");
    puts(s[i].nationality[15]);
    printf("dob  %f-%f-%f is : %f", s[i].dob);
    printf("\n");
    }

    return 0;


}



