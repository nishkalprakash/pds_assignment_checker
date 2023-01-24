#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
};



struct date readdate(struct date x){
	
	scanf("%d %d %d",&x.day,&x.month,&x.year);

	return x;
  
}

void printdate(struct date x){
	printf("%d/%d/%d\n",x.day,x.month,x.year);
}


/*void finddays(struct date a,b){
    
*/

int main(){


printf("Enter the first date:");
struct date a=readdate(a);
printf("Enter the second date:");
 struct date b=readdate(b);

printdate(a);
printdate(b);
 return 0;
}