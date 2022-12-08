/*satya prakash nanda
22ag10041
section 14
question 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game(int a);
int main(){
srand(time(0));
int a= rand()%100+1;

int num;

	
	for(int i=0; i<5; i++){
			printf("enter any  number (1-100):");
			scanf("%d", &num);
			
			 if(num==a){printf("winner\n");
					break;
					}	
			else if(num>a){
					printf("your number is too bigger\n");
					}
			else{
				printf("your number is too smaller\n");
				}					
                        if(i==4){
				printf("loser\n");
				printf("the number was %d\n", a);
				}
			}


return 0;
}

void game(int a){
	
}
