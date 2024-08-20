#include <stdio.h>
int main(){
int d,m,y;
printf("Enter the date:DD MM YYYY");
scanf("%d%d%d",&d,&m,&y);

if(m==2&&y%4==0||y%400==0 ){
if(d<1 || d>=29 && m==2){
printf("InValid date");
}
}
else if(d>29 && m==2){
printf("Invalid date");
}
else if(d>31||d==0){
printf("Invalid date");
}

else if (m>12||m==0){
printf("Invalid date");}

else if(d>30 && m==4){
printf("Invalid date");}
 
 else if(d>30 && m==6){
printf("Invalid date");}
else if(d>30 && m==9){
printf("Invalid date");}
else if(d>30 && m==11){
printf("Invalid date");}


else{

printf("Valid date");}


return 0;
}

