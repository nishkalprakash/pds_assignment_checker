/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: Labtest 1- Q3
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int n;
	printf("Number of Rounds: ");
	scanf("%d",&n);
	int i,A,B;
	int pointsA = 0,pointsB = 0;
	int badgesA = 0,badgesB = 0;
	int digitsA,digitsB,sumA,sumB;
	for(i = 0;i < n;i++){
		printf("Round-%d -->\t",i+1);
		digitsA = digitsB = sumA = sumB = 0;
		A = rand()%(1000 - 5 + 1) + 5;
		B = rand()%(1000 - 5 + 1) + 5;
		printf("A's number: %d\t",A);
		printf("B's number: %d\n",B);
		while(A){
			digitsA++;
			sumA += A%10;
			A /= 10;
		}
		while(B){
			digitsB++;
			sumB += B%10;
			B /= 10;
		}

		if(digitsA > digitsB){
			badgesA++;
			sumA = digitsA;
			sumB = digitsB;
			printf("\t\tA's point: %d\t",sumA);
			printf("B's point: %d\n",sumB);
			printf("\t\tA's badge: 1\t");
			printf("B's badge: 0\n");
			printf("\t\t-- A wins Round %d --\n",i+1);
		}
		else if(digitsA < digitsB){
			badgesB++;
			sumA = digitsA;
			sumB = digitsB;
			printf("\t\tA's point: %d\t",sumA);
			printf("B's point: %d\n",sumB);
			printf("\t\tA's badge: 0\t");
			printf("B's badge: 1\n");
			printf("\t\t-- B wins Round %d --\n",i+1);
		}
		else {
			printf("\t\tA's point: %d\t",sumA);
			printf("B's point: %d\n",sumB);
			if(sumA > sumB){
				badgesA++;
				printf("\t\tA's badge: 1\t");
				printf("B's badge: 0\n");
				printf("\t\t-- A wins Round %d --\n",i+1);
			}
			else if(sumB > sumA){
				badgesB++;
				printf("\t\tA's badge: 0\t");
				printf("B's badge: 1\n");
				printf("\t\t-- B wins Round %d --\n",i+1);
			}
		}
		pointsA += sumA;
		pointsB += sumB;
	}
	int scoreA = pointsA*badgesA, scoreB = pointsB*badgesB;
	printf("Final result =>\tA's total score: %d, B's total score: %d\n",scoreA,scoreB);
	if(scoreA > scoreB)
		printf("\t\t--- A wins the game ---");
	else if(scoreA < scoreB)
		printf("\t\t--- B wins the game ---");
	else
		printf("\t\t--- Draw ---");
	return 0;
}
