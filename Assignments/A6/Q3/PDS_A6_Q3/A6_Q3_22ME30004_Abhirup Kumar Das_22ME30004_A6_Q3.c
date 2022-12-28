#include<stdio.h>
int Merge(int size1,int size2);//*ptr1,*ptr2);


int main(){

int n,n1;//For Storing values in Array 
printf("Enter Size1:");
scanf("%d",&n);
printf("Enter Size2:");
scanf("%d",&n1);
int arr1[n];
int arr2[n1];
int arr[n+n1];
Merge(n,n1);

/*for(int i=0;i<n;i++)//Printing A,B & C
printf("A: %d\n", arr1[i]);
for(int j=0;j<n1;j++)
printf("B: %d\n", arr2[j]);
for(int k=0;k<n+n1;k++)
printf( "C: %d\n",arr[k]);*/

return 0;
}

int Merge(int size1,int size2){//*ptr1,*ptr2){
printf("Enter Numbers: ");
int i=0;
int arr1[size1];
while(i<size1){
scanf("%d",&arr1[i]);
i++;
}

printf("Enter Numbers: ");
int j=0;
int arr2[size2];
while(j<size2){
scanf("%d",&arr2[j]);
j++;			
}

int arr[size1+size2];
for(int i=0;i<=size2;i++){
arr[i]=arr1[i];
}
for(int i=0;i<=size1+size2;i++){
arr[i]=arr1[i-size1-1];
}

for(int i=0;i<size1;i++)//Printing A,B & C
printf("A: %d\n", arr1[i]);
for(int j=0;j<size2;j++)
printf("B: %d\n", arr2[j]);
for(int k=0;k<size1+size2;k++)
printf( "C: %d\n",arr[k]);


return 1;
}









































/*printf("Enter Numbers: ");
int i=0;
int arr1[n];
while(i<n){

scanf("%d",&arr1[i]);
i++;
}*/

/*int n1;//For Storing values in Array 2
printf("Enter Size:");
scanf("%d",&n1);
int arr2[n1];*/
/*printf("Enter Numbers: ");
int j=0;
int arr2[n1];
while(j<n1){
//int arr2[n1];
scanf("%d",&arr2[j]);
j++;			
}*/

/*int k=0;
while(k<(n+n1)){
int arr2[n+n1];
scanf("%d",&arr2[k]);
k++;
}
*/
//int arr[n+n1];
/*for(int i=0;i<=n1;i++){
arr[i]=arr1[i];
}
for(int i=0;i<=n1+n;i++){
arr[i]=arr1[i-n-1];
}
*/




