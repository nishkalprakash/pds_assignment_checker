# include<stdio.h>
int main() {
    int ,n,a,c,ms,es,tms;
    //a= attendance
    //c= class test
    printf("enter the number of students : \n");
    scanf("%d",&n);
    while(n>0&&n<10)
    for (i=1; i<=n;i++) {

     printf("enter the marks of students: %d\n ");
     printf("Attendance(40):\n");
     scanf("%d",&a);
     printf("C(20):\n");
     scanf("%d",&c);
     printf("Mid Sem(60):\n");
     scanf("%d",&ms);
     printf("End Sem(100):\n");
     scanf("%d",&es);

     double tms=(a/4 +c+ ms/2) + (e/100)*40;
     printf("tms: %lf\n",tms);

         if(tms>=90){
            printf("the grade awarded is:EX ");
         }
          if else if(80<=tms<90) {
            printf(" the grade awarded is : A");
         }
        if  else if (70<=tms<80) {
            printf(" :B");
         }
        if  else if (60<=tms<70) {
            printf(" : C");
         }
         if else if (50<=tms<60) {
            printf(" :D");
         }
         if else if (35<=tms<50) {
            printf(" :P");
         } if else if (tms<35) {
             printf(" :F");
         }
         else if ()
         {

             printf(" wrong input");
         }

     }
     return 0;
}
