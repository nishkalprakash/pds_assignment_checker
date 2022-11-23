/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 3

  Description: Program to check points*/

#include<stdio.h>

int main()

{int SS,MM,HH;

scanf("%d%d%d",&SS,&MM,&HH);     /*HH denotes hours,MM denotes minutes,SS denotes second*/

if((SS<=59)&&(MM<=59)&&(HH<=23))

 {printf("valid time\n");

printf("%d%d%d",HH,MM,SS); }

else

printf("invalid time");

return 0;

}
