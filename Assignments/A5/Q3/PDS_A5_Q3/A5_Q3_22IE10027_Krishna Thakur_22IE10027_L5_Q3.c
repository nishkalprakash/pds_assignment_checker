#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	int k;
	srand(time(0));
	k=rand()%100+1;
	printf("Guess The Number\nYou have 5 tries");
	int t;
	int p, q=0;
	for(t=0; t<5; t++){
		scanf("%d", &p);
		if(p>k){
			printf("Your guess is too big\n");
		}
		else if(p<k){
			printf("Your guess is too small\n");
		}
		else if(p==k){
			printf("Winner");
			q++;
			break;
		}
	}
	if(q==0){
		printf("Loser: The number was %d", k);
	}
	return 0;
}