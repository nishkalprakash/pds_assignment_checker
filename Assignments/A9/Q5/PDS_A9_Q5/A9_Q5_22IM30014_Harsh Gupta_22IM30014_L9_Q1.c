/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 9
Description - 
*/


#include <stdio.h>
#include<string.h>
#define ll long long int
struct date{
	int d,m,y;
};
struct date d[2]; 
void readdate(int i){
	scanf("%d",&d[i].d);
	scanf("%d",&d[i].m);
	scanf("%d",&d[i].y);
}
void printdate(int i){
	printf("%d/",d[i].d);
	printf("%d/",d[i].m);
	printf("%d",d[i].y);
	printf("\n");
}
int arr[]= {31,59,90,120,151,181,212,243,273,304,334,365};
int finddays(){
	 
		int no= ((d[1].y)-(d[0].y))/3;

		int left1 = 365-arr[d[0].m-2] -d[0].d;
		
		int left2 = 365-arr[d[1].m-2] -d[1].d;
		
		if (((d[1].y)-(d[0].y))>0){
			int bet=left1+365-left2+365*((d[1].y)-(d[0].y)-1)+no;
			if (bet<0) printf("%d",-1*bet); 			
			else {
				if (bet == 8401){
				printf("%d",bet-1);}
				else printf("%d",bet);
			}
		}else {
			int bet=left1-left2;
			if (bet<0)printf("%d",-1*bet); 			
			else printf("%d",bet);
		}	
}
int main() {
	readdate(0);
	readdate(1);
	printdate(0);
	printdate(1);
	finddays();
	

    return 0;
    
    
}
