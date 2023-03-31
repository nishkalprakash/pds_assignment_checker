#include<stdio.h>
/*
   sec-2
   Assignment no.- 4
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/

int main(){
int n, att, test, mid, end;
double marks;
printf("Enter the number of students: ");
scanf("%d", &n);
for(int i=1; i<=n; i++){
    printf("Student %d \n", i);
    printf("  Attendance[40]: ");
    scanf("%d", &att);
    printf("  CT[20]: ", &test);
    scanf("%d", &test);
    printf("  Midsem[60]: ");
    scanf("%d", &mid);
    printf("  Endsem[100]: ");
    scanf("%d", &end);

    if(att>40 || att<0 || test>20 || test<0 || mid>60 || mid<0 || end>100 || end<0){
        printf("\n Invalid Input\n");
        i--;
        continue;
    }

    marks = (att/40.0)*10 + (test/20.0)*20 + (mid/60.0)*30+ (end/100.0)*40;

    printf("  Total marks: %lf", marks);

    if(marks>=90) printf("  Grade: EX\n");
    else if(marks>=80 && marks<90) printf("  Grade A\n");
    else if(marks>= 70 && marks<80) printf("  Grade B\n");
    else if(marks>=60 && marks<70) printf("  Grade C\n");
    else if(marks>= 50 && marks<60) printf("  Grade D\n");
    else if(marks>= 35 && marks<50) printf("  Grade P\n");
    else printf("  Grade F\n");
}

return 0;
}

