#include<stdio.h>
#include<stdlib.h>
int main(){
	int a1[10];
        int a2[10];
	int a3[10];
	int a4[10];
	int a5[20];
	int a6[20];
	int a7[40];
	int a;
	int b;
	int c;
	int d;
	for(int i=0; i<10; i++) {
 		a = 10 + rand() % 21;
 		a1[i] = a;
	}
	for(int i=0; i<10; i++) {
 		printf("a1[%d] =  %d, ",i, a1[i]);
	}
        printf("\n");
	for(int i=0; i<10; i++) {
 		b = 30 + rand() % 31;
 		a2[i] = b;
	}
	for(int i=0; i<10; i++) {
 		printf("a2[%d] =  %d, ",i, a2[i]);
	}
	printf("\n");
	for(int i=0; i<10; i++) {
 		c = 60 + rand() % 31;
 		a3[i] = c;
	}
	for(int i=0; i<10; i++) {
 		printf("a3[%d] =  %d, ",i, a3[i]);
	}
	printf("\n");
	for(int i=0; i<10; i++) {
 		d = 90 + rand() % 31;
 		a4[i] = d;
	}
	for(int i=0; i<10; i++) {
 		printf("a4[%d] =  %d, ",i, a4[i]);
	}
	printf("\n");
	for(int i=0; i<20; i++) {
 		if( i%2 == 0 ) a5[i] = a1[i/2];
		if( i%2 !=0 ) a5[i] = a2[i/2];
	}
	for(int i=0; i<20; i++) {
 		printf("a5[%d] =  %d, ",i, a5[i]);
	}
	printf("\n");
	for(int i=0; i<20; i++) {
 		if( i%2 == 0 ) a6[i] = a3[(19-i)/2];
		if( i%2 !=0 ) a6[i] = a4[i/2];
	}
	for(int i=0; i<20; i++) {
 		printf("a6[%d] =  %d, ",i, a6[i]);
	}
	printf("\n");
	for(int i=0; i<40; i++) {
 		if( i%2 == 0 ) a7[i] = a5[(39-i)/2];
		if( i%2 !=0 ) a7[i] = a6[(39-i)/2];
	}
	for(int i=0; i<40; i++) {
 		printf("a7[%d] =  %d, ",i, a7[i]);
	}
	return 0;
}
