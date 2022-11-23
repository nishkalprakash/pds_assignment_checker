/*section:-14
roll:-22AG30025
name:-NISHANT KUMAR
assignment:-3  */

#include<stdio.h>
int main () {

int HH,MM,SS;  //HH is th formate of hour,MM IS THE FORMATE OF MINUT,SS IS THE FORMATE OF SECOND.

printf("PLEASE ENTER INPUT IN THE FORM:-SS|MM|HH\n");

scanf("%d%d%d",&SS,&MM,&HH);

if ((SS==30)&&(MM==56)&&(HH==21))
printf("valid time-%d:%d:%d\n",HH,MM,SS);

else if ((SS==59)&&(MM==59)&&(HH==23))
printf("valid time-%d:%d:%d\n",HH,MM,SS);

else {   
      printf("invalid time\n");
      }



return 0;
}
