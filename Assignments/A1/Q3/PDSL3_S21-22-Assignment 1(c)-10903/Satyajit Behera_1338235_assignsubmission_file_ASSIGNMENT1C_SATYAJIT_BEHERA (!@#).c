/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/

#include<stdio.h>
#include<math.h>
int main()
{
    int DAY,m,n,k;
    float f;
    printf("FOR MONDAY ENTER 1\n FOR TUESDAY ENTER 2\n FOR WEDNESDAY ENTER 3\n FOR THRUSDAY ENTER 4\n FOR FRIDAY ENTER 5\n FOR SATURDAY ENTER 6\n FOR SUNDAY ENTER 7\n");
    printf("enter the day number-");
    scanf("%d",&DAY);
    switch(DAY){
    case 1:printf("Enter the number of machines:");/*n is no of car manufactured
                                                     m is number of machine*/
           scanf("%d",&m);
           printf("Number of manufactured cars-%d",m);
           break;
    case 2: printf("Enter the number of machines:");
           scanf("%d",&m);
           n=m + (m/2) + (m/4);
           printf("Number of manufactured cars-%d",n);
           break;
    case 3:
           printf("Enter the number of machines:");
           scanf("%d",&m);
           printf("Enter no. of machines under inspection:");
           scanf("%k",&k);
           n=m-k + (m-k)/2 + (m-k)/4;
           printf("Number of manufactured cars-%d",n);
           break;
    case 6:
           printf("Enter the number of machines:");
           scanf("%d",&m);
           printf("Enter no. of machines under inspection:");
           scanf("%d",&k);
           n=m-k + (m-k)/2 + (m-k)/4;/*k is the no. of machines under inspection*/
           printf("Number of manufactured cars-%d",n);
           break;

    case 4:printf("Enter the number of machines:");
           scanf("%d",&m);
           printf("Enter boosting fraction-");
           scanf("%f",&f);
           n=m+m*f;/* f is the fraction  and it is the boasting factor */
           printf("Number of manufactured cars-%d",n);
           break;
    case 5: printf("Enter the number of machines:");
           scanf("%d",&m);
           printf("Enter boosting fraction-");
           scanf("%f",&f);/* f is the fraction  and it is the boasting factor */
           n=m+m*f;
           printf("Number of manufactured cars-%d",n);
           break;
    case 7: printf("Enter the number of machines:");
           scanf("%d",&m);
           printf("Enter boosting fraction-");
           scanf("%f",&f);/* f is the fraction  and it is the boasting factor */
           n=m+m*f;
           printf("Number of manufactured cars-%d",n);
           break;
default:

    printf("not a valid input");


    }
}

