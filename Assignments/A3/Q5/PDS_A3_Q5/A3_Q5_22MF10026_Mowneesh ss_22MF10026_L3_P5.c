#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int d, m, n, x, y;
printf(" enter the day and month respectively:");
scanf("%d %d", &d, &m);
if(d>31 || m>=13){
printf("invalid date");
return 0;
}
if (m==1){
x=0;
}
else if (m==2){
x=31;
}   
else if (m==3){
x=59;
} 
else if (m==4){
x=90;
} 

else if (m==5){
x=120;
} 
else if (m==6){
x=151;
} 
else if (m==7){
x=181;
} 
else if (m==8){
x=212;
} 
else if (m==9){
x=243;
} 
else if (m==10){
x=273;
} 
else if (m==11){
x=304;
} 
else if (m==12){
x=334;
} 
else x=0;
y=x+d;
n=y%7;
switch (n){
	case 1:
	       printf("saturday");
break;
	case 2:
	       printf("sunday");
break;
	case 3:
	       printf("monday");
break;
	case 4:
	       printf("tuesday");
break;
	case 5:
	       printf("wednesday");
break;
	case 6:
	       printf("thursday");
break;
	case 7:
	       printf("friday");
break;
}
return 0;
}
