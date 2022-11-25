/*Section 14
  Roll No :22GG10024
  Name : KRISHNA GUPTA
  Assignment No : 3
  Description : PROGRAM TO PRINT VALID TIME (24 HRS FORMAT)*/
#include<stdio.h>
int main()  // main function
{
   int SS,MM,HH ;
   printf("Enter seconds :");  // taking the input for seconds
   scanf("%d",&SS);
      printf("Enter minutes :");// taking the input for minutes
   scanf("%d",&MM);
    printf("Enter hours :");// taking the input for hours
   scanf("%d",&HH);
   if(SS<=59 && MM <=59 && HH<=23)// checking valid format of time
{
    printf("Valid time - %d:%d:%d",HH,MM,SS);// printing valid time

}
  else{    
printf("Invalid time"); //showing invalid time for incorrect format
}
     return 0;
}
