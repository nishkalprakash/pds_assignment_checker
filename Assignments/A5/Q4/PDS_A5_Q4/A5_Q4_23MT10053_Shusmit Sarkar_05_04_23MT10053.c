#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
	int a=0; 
        int b=0;
	int c=0;
	int arr[20];
        int brr[20];
	int crr[20];
	for(int i=0; i<20; i++) {
 		a = 1000 + rand() % 1001;
 		arr[i] = a;
	}
        for(int i=0; i<20; i++) {
 		b = 15 + rand() % 11 ;
 		brr[i] = b;
	}
        for(int i=0; i<20; i++) {
 		c = rand() % 101;
 		crr[i] = c;
	}

	for(int i=0; i<20; i++) {
 		printf("Roll = %d Age =  %d Mark = %d\n", arr[i], brr[i], crr [i]);
	}
        for(int i=0; i<20; i++){
  	for(int j=i+1; j<20; j++){
        if ( crr[i] == crr [j] ) {
 		printf("Roll = %d Age =  %d Mark = %d\n", arr[i], brr[i], crr [i]);
        	printf("Roll = %d Age =  %d Mark = %d\n", arr[j], brr[j], crr [j]);
}
}
}
        
return 0;
}
