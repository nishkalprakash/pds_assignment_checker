# include<stdio.h>

# include<math.h>

  int main()

{

     int dd, mm;

     printf("enter the date and month");

     scanf("%d %d", &dd, &mm);

   if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd<=31) {

     printf(" valid date");

   }

  else if (mm=2 && dd<=28) {

    printf("valid date");

}

  else if((mm==4||mm==6||mm==9||mm==11)&&dd<= 30) {

    printf("valid date");

}

else {

   printf("invalid date");

}

  return 0;

}



