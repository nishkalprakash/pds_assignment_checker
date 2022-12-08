/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 5 
Description - question1
*/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){  
	srand(time(0));   
	int r=rand()%100+1,g=-1;
	
         
	int flag=0;
	for (int i=0;i<5;i++){
		if (g==r) {printf("Winner"); flag=1; break;}
		else{
			scanf("%d",&g);
			if (g>r) printf("Your guess is too big!\n");
			else if(g<r) printf("Your guess is too small!\n");
			
		}
	}
	if (flag==0) printf("Loser: The number was: %d\n",r);



return 0 ;

}
