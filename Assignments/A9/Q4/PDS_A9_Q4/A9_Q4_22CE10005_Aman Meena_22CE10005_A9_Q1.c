
/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 9
Description :To calculate the net salary of the employee*/


#include<stdio.h>

 struct employee{

       
       float wages,HRA,TA,BP;
       char name[500];
};

  int main()  {

  int i,days,n;
  float NetPay;

  struct employee st[n];

  printf("Enter the value of n :");          //Taking the value of n .
  scanf("%d",&n);

  /*for(i=0;i<n;i++){                            //FOR loop for conditions.

  printf("Enter the per day wage of the employee :");
  scanf("%f", &st[i].wages);

  printf("Enter the number of days employee worked : ");
  scanf("%d",&days);

  //printf("Enter the BP of the employee : %d*%f \n",days,st[i].wages);

  printf("Enter the name of the employee :");}
  //scanf("%s",st[i].name);


  //COMPUTE NET PAY
  NetPay = 0;
  for(i=0;i<5;i++)

  NetPay += st[i].BP;


       
     if(days>19) {                                             //Applying conditional statements in the loop .
      st[i].TA==20/100;

      if(st[i].BP<1000){
      st[i].BP = st[i].BP + st[i].BP*12/100+st[i].BP * 20/100;
 } else{
      st[i].BP = st[i].BP +st[i].BP*20/100 + st[i].BP*20/100;} 

 }else{
      st[i].TA == 0;
     
  if(st[i].BP<1000){
      st[i].BP = st[i].BP + st[i].BP*12/100;
 } else{
      st[i].BP = st[i].BP +st[i].BP*20/100 ;}     

   printf("Total salary of the emloyee is : %f",NetPay);}*/

    
 return 0;
}
