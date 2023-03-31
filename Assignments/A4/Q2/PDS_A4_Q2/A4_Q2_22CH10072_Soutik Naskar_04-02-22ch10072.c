
#include<stdio.h>
/*
section 2
roll no: 22CH10072
name: soutik naskar;
assignment No:4

description: result
*/
int main(){
int n;
float At,CT,mi,en;
        printf("enter the number of students:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("Enter the marks for student%d\n",i);
    printf("Attendence[40]:");
    scanf("%f",&At);
    printf("CT[20]:");
    scanf("%f",&CT);
    printf("Midsem[60]:");
    scanf("%f",&mi);
    printf("endsem[100]:");
    scanf("%f",&en);
    printf("student%d\n",i);
    printf("Total marks:%f\n",(At*0.25)+(CT*1)+(mi*0.5)+(en*0.4));
float grade,marks;
marks=At*0.25+CT*1+mi*0.5+en*0.4;
if(marks>=90)
printf("grade:EX\n");
else if(marks>=80&&marks<90)
printf("grade:A\n");
else if(marks>=70&&marks<80)
    printf("grade:B\n");
else if(marks>=60&&marks<70)
    printf("grade:c\n");
    else if(marks>=50&&marks<60)
    printf("grade:d\n");
    else if(marks>=35&&marks<50)
    printf("grade:p\n");
    else if(marks<35)
        printf("grade:f\n");
    else
        printf("wrong inputs");


}

return 0;
}
