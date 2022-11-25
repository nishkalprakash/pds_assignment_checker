#include<stdio.h>

int main()
{
int s, m,  h;
printf("Enter the time:"); //Entering the time in second min hour format
scanf("%d %d %d", &s, &m, &h);
if(h>=24){
printf("Invalid time \n");
}
else if(m>=60) printf("Invalid time \n");
else if(s>=60) printf("Invalid time \n");
else{
printf("Valid Time- %d %d %d", h,m,s);
}
return 0;
}
