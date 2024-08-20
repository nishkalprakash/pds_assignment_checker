#include<stdio.h>

int main(){
int y, m ,d, f;
printf("Enter the day: ");
scanf("%d", &d);
printf("Enter the month: ");
scanf("%d", &m);
printf("Enter the year: ");
scanf("%d", &y);

if ((y%4 == 0 && y%100 != 0)||y%400==0){
    if (m == 1||m==3||m==5||m==7||m==8||m==10||m==12){
        if (d <=31 && d>0){
            f=1;}
        else f = 0;    
            }
            
    else if (m == 4 ||m== 6||m==9||m==11){
        if (d <= 30 && d>0){
            f=1;}
        else f=0;}
        
    else if (m == 2){
        if (d <= 29 && d>0){
            f = 1;}
            }
            
    else f = 0;
    }                      

if (y%4 != 0 || y%100 == 0){
    if (m == 1|| m==3||m==5||m==7||m==8||m==10||m==12){
        if (d <=31 && d>0){
            f=1;}
        else f = 0;    
            }
            
    else if (m == 4|| m==6||m==9||m==11){
        if (d <= 30 && d>0){
            f=1;}
        else f=0;}
        
    else if (m == 2){
        if (d <= 28 && d>0){
            f = 1;}
            }
            
    else f = 0;
    }    
    
if (f==1){
printf("Valid Date");
}

else if (f == 0){
printf("Invalid Date");
}

return 0;    
  }                    

