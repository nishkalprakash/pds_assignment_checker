//section 2
// roll no. 22mf10015
// name : harsh patidar
//assignement : 4
// discription :

#include<stdio.h>
int main()
{
    int n;
    float x ,y,t,u  ;
    float total;

    /*definng variable for attendence =x
    for class test y
        for mid sem t
        for end sem u
            no  of student=n
    */
    printf(" Enter the number of student \n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
       printf("student no %d\n",i);

    printf("marks obtained in attendence [40]\n ");
    scanf("%f",&x);

    if (x<0 || x>40)
        {
        printf("enter the marks again\n");
        scanf("%f",&x);
        }


        printf("marks obtained in class taste[20]\n ");
        scanf("%f",&y);
         if (y<0 || y>40)
        {
        printf("enter the marks again\n");
        scanf("%f",&y);
        }
        printf("marks obtained in midsem [60]\n ");
        scanf("%f",&t);
         if (t<0 || t>40)
        {
        printf("enter the marks again\n");
        scanf("%f",&t);
        }
        printf("marks obtained in endsem  [100]\n");
        scanf("%f",&u);
         if (u<0 || u>40)
        {
        printf("enter the marks again\n");
        scanf("%f",&u);
        }
        total = (x/40*10)+(y/20*20)+ (t/60*30)+(u/100*40);

printf("total marks of student 1 : %f\n",total);
if (total >=90)
printf("grade : EX\n");
else if(total>=80 && total<90)
printf("grade : A\n");
else if (total>=70 && total<80)
printf("grade: B\n");
else if (total>=60 && total<70)
printf("grade : C\n");
else if (total>=50 && total<60)
printf("grade:D\n");
else if (total>=35 && total<50)
printf("grade : p\n");
else if  (total <35)
    printf("grade : f\n");


}

return 0 ;
}
