/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 3
description :  program to check points
*/

#include <stdio.h>

int main()

{

int SS; // SS represents the seconds


int MM; //MM represents the minutes


int HH; //HH represents the hours


scanf("%d%d%d", &SS, &MM, &HH);

if(0 <= SS && SS <= 60) {
printf("SS = %d\n",SS);
}
else { 
printf("it is invalid \n");
} 

if(0 <= MM && MM <= 60) {
printf("MM = %d\n", MM);
}
else {
printf("it is invalid \n");
}

if(0 <= HH && HH <= 24) {
printf("HH = %d\n", HH);
}
else {
printf("it is invalid \n");
}

return 0;
}
