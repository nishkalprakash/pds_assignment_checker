#include<stdio.h>

int main()
{

float u;
printf("Enter your consumption: ");
scanf("%f",&u);
float ans=0;
if(u<100){
printf("Bill is Rs.50");
}
else if(u>100 && u<200){
//float u1;
ans=ans+50+(u-100)*.75;
printf(" Bill is %f", ans+ans*0.2);
}
else if(u>200 && u<=300){
//float u2;
ans=ans+50+(u-200)*1.25;
printf(" Bill is %f", ans+ans*0.2);
}
else if(u>300){
//float u3;
ans=ans+50+(u-300)*1.50;
printf("Bill is %f",ans+ans*0.2);
}

return 0;
}
