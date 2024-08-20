//valid date checker
//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
int main(){
int day,month,year;
printf("enter day: \n");
scanf("%d",&day);
printf("enter month: \n");
scanf("%d",&month);
printf("enter year: \n");
scanf("%d",&year);

if(day>31 || month>12 ){
printf("Invalid date");

}
else if(month==2 && day>28 && year%4!=0 && year%400!=0){
printf("Invalid date");


}
else if(month!=2 && month<8 && month%2 ==0 && day>30 ){
printf("Invalid date");

}
else if(month!=2 && month<8 &&month%2 ==1 && day>31 ){
printf("Invalid date");

}
else if(month!=2 && month>=8 && month%2 ==0 && day>31 ){
printf("Invalid date");

}
else if(month!=2 && month>=8 &&month%2 ==1 && day>30 ){
printf("Invalid date");

}

else{
printf("Valid date");
}

return 0;

}
