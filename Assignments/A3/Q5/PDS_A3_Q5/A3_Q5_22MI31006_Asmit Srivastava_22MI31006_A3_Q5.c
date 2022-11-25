#include<stdio.h>
int main()
{
int DD,MM;
printf("enter DD,MM");
scanf("%d %d",&DD,&MM);
if(MM>12 &&MM<=0 &&DD<=0 && MM>31){
printf("invalid");
}
if(MM==1,10 && DD==1,8,15,22){
printf("SATURDAY\n");
}
else if(MM==1,10 && DD==2,9,16,23,30){
printf("Sunday\n");
}
else if(MM==1,10 && DD==3,10,17,24,31){
printf("monday\n");
}

else if(MM==1,10 && DD==4,11,18,25){
printf("tuesday\n");
}

else if(MM==1,10 && DD==5,12,19,26){
printf("wednesday\n");
}

else if(MM==1,10 && DD==6,13,20,27){
printf("thrusday\n");
}

else if(MM==1,10 && DD==7,14,21,28){
printf("friday\n");
}

if(MM==2,3 && DD==1,8,15,22){
printf("SATURDAY\n");
}
else if(MM==2,3 && DD==2,9,16,23,30){
printf("Sunday");
}
else if(MM==2,3 && DD==3,10,17,24,31){
printf("monday");
}

else if(MM==2,3 && DD==4,11,18,25){
printf("tuesday");
}

else if(MM==2,3 && DD==5,12,19,26){
printf("wednesday");
}

else if(MM==2,3 && DD==6,13,20,27){
printf("thrusday");
}

else if(MM==2,3 && DD==7,14,21,28){
printf("friday");
}
return 0;
}
