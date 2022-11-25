#include<stdio.h>

int main()
{
int s;
printf("Enter any number between 20 to 99:"); //Entering any number
scanf("%d", &s);
if(s<20 && s>99){
printf("Not a valid input");
}
else{
 
switch(s){
case 21:{
printf("Twenty One");
break;
}
case 33:{
printf("Thirty Three");
break;
}
case 99:{
printf("Ninety Nine");
break;
}
case 20:{
printf("Twenty");
break;
}                   
 default: printf("Sorry can only compute 21,33,99,20");
}
}
  
return 0;
}
