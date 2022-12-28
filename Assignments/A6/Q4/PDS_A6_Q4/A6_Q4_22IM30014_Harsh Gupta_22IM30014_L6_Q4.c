/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - 
*/
#include <stdio.h>
int flag=0,n,m;
int *buildset(int *arr,int n){
	for (int i=0;i<n;i++){                  // taking array1 input 
		scanf("%d",&arr[i]);
	}
}
int searchA(int *arr,int x){                           // searching in a 
	int flag=0;
	for(int i=0;i<n;i++){
		if (x==arr[i]){ printf("%d is present in Set A\n",x);
		flag=1;
		}
	} if (flag==0) printf("%d is not present in Set A\n",x);
		
}

int searchB(int *arr,int x){                         // searching in b 
	flag=0;
	for(int i=0;i<m;i++){
		if (x==arr[i]){ printf("%d is present in Set B\n",x);
		flag=1;
		}
	} if (flag==0) printf("%d is not present in Set B\n",x);
}

 
int main() {
    	scanf ("%d",&n);                          // taking array a Size 
	int arrA[n]; 
	buildset(arrA,n);                  // building array a

	scanf ("%d",&m);                     // taking array b size 

	int arrB[m];
	buildset(arrB,m);                     // building array  b
	int p;	
	int x; 
		printf(" Press ‘1’ to perform search in Set A\n");
		printf(" Press ‘1’ to perform search in Set A\n");
		printf(" Press ‘2’ to perform search in Set B\n");
		printf(" Press ‘3’ to perform Union of Set A and Set B\n");
		printf(" Press ‘4’ to perform Intersection of Set A and Set B\n");
		printf(" Press ‘5’ to perform Difference of Set A and Set B\n");
		printf(" Press any other key to quit\n");	
	scanf("%d",&p);                              // taking input as option 
	while (p==1||p==2||p==3||p==4||p==5){
		if (p==1){scanf("%d",&x); searchA(arrA,x);}
		if (p==2){scanf("%d",&x); searchB(arrB,x);}
		printf(" Press ‘1’ to perform search in Set A\n");
		printf(" Press ‘1’ to perform search in Set A\n");
		printf(" Press ‘2’ to perform search in Set B\n");
		printf(" Press ‘3’ to perform Union of Set A and Set B\n");
		printf(" Press ‘4’ to perform Intersection of Set A and Set B\n");
		printf(" Press ‘5’ to perform Difference of Set A and Set B\n");
		printf(" Press any other key to quit\n");
		scanf("%d",&p);

}


    return 0;
    
    
}
