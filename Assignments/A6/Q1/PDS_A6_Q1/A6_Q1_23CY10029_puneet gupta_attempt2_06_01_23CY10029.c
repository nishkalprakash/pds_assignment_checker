#include <stdio.h>
#include <stdlib.h>
int arr[100], size;
void printfill()
 {
	do{
	 printf("enter the size of array between 1 to 100\n");
	scanf("%d",&size);}
	while(size<0&& size>100);
	

	
	int i;
 	for (i=0; i<size; i++)
	 arr[i] = rand()%900 +100;
	for (i=0; i<size; i++)
	 {
	printf ("%d\n",arr[i]);
	if ((i+1)%10==0)
	printf("\n");
	 }

}
void printexchange()
        {	
	int i, c;

       for (i=0; i<size; i++)
	 {
	printf ("%d\t",arr[i]);
}
	printf("\n");
	
printf("exchange order are\n");
c = size/2;
if (size/2!=0)
c++;
for (i=0; i<size/2; i++)
{

 
}
} // end exchange
void rotateleft()
{	
	int i,  c;
	for (i=0; i<size; i++)
	 {
	printf ("%d\t",arr[i]);
	
	 }
	printf("rotate left\n");
c= arr[0];
for (i=0; i<size-1; i++)
{


arr[i]= arr[i+1];

}
arr[size-1]=c;

for (i =0; i<size; i++)
 {
	printf ("%d\t",arr[i]);
 }
} // end rotate left
 void rotateright()
{
   int i,  c;
	for (i=0; i<size; i++)
	 {
	printf ("%d\t",arr[i]);
	
	 }
	printf("rotate right\n");
        c= arr[size-1];
for (i=size-1; i>0; i--)
{

arr[i]= arr[i-1];

}
arr[0]=c;

for (i =0; i<size; i++)
 {
	printf ("%d\t",arr[i]);
	 }
printf("\n");
} // end rotateright
int main()
{

	

	int a;
	
	while(1){
	 printf("enter the the value between 1 to 8\n");
printf (" enter the choice\n1___Fil\n2___exchange\n3___rotate right\n4___ rotate lef\n5___ segreat\n6___ search\n7___fol\n8___analyz\n0,9 or any number___ exit\n");
	scanf("%d",&a);
        if (a==1){
        printfill();
        }
       else if (a==2){
       printexchange();
       }
       else if  (a==4){
       rotateleft();
        }  
      else if (a==3){
      rotateright();
}
else if (a<1||a>8)
break;
}

}

