
//GUNNU HEMANTH
//21BT30006
//SEC-3

#include<stdio.h>

int main(){

int r,n,i,a[n];

           printf("enter the value of n\n"); //the compiler will ask number of elements in array.
  scanf("%d",&n);

for(i=0;i<n;i++){scanf("%d",&a[i]);}
printf("the arry elements are ");for(i=0;i<n;i++){printf("%d",a[i]);}//the compiler prints the array elements.
printf("\n");

printf("enter the value of r\n");//r is the number of elements in a single combination.
   scanf("%d",&r);

  printcombination(a,n,r);//executing function in main .

       return 0;
}

void printcombination(int a[],int n,int r){
int data[r];                                 //array to store combinations.

 combinations(a,data,0,n-1,0,r);      //to print all the combinations

}
void combinations(int a[],int data[],int first,int last,int count,int r){//
  if (count==r){

    for(int j=0;j<r;j++)printf("%d",data[j]);   //replace count with all possible elements.

  printf("\n");
return;}

         for(int i=first;i<=last&&last-i+1>=r-count;i++){

     data[count]=a[i];combinations(a,data,i+1,last,count+1,r);}


}
