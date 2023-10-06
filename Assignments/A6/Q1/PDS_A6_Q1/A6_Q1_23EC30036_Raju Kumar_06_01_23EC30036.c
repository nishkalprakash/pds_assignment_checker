\\Raju kumar
\\23EC30036
#include <stdio.h>
#include<stdlib.h>
int arr[100];
int size , menu ;
int main()
 {
   while(1)
     {
     printf("enter the size of arr[1, 100]");
     scanf("%d" , &size );
     if((size>=0)&&(size<=100)){
       for(int i=0 ; i<size ; i++)
	 printf("%d", arr[i]);	 
     }
     switch(menu)
     case 1 : printf(" Fill ");
     case 2 : printf(" Exchange ");
     case 3 :printf(" Rotate right ");
     case 4 :printf(" Roatate left ");
     case 5 :printf(" Segregate ");
     case 6 :printf(" Serch ");
     case 7 :printf(" Fold ");
     case 8 :printf(" Analyze ");
     case 9 :printf(" Exit  ");
       break;
   }
   return ;
 }
void fill()
{
   printf("enter the size of arr[1, 100]");
     scanf("%d" , &size );
     if((size>=0)&&(size<=100))
       {
       for(int i=0 ; i<size ; i++)
	 printf("%d", arr[i]);
       }
       if ((size<=100)&&(size>=999)){
	 scanf("%d" , &rand);
       printf("random integral = %d" , rand() );
       }
}
void exchange() {
  int i ,n , j ;
    for(i=o;i<=n;i++){
      for(j=0 ; j<=n ; j++)
	printf(" Exchange of array %d = %d ", i , j);
    }
}
 
void rotate_right(){
  int i ,n, j ,temp=0;
  for(i=0; i<size ; i++)
    {
    for(j=0; j< size ;j++)
      arr[n-j]=arr[n-1-j];
  arr[n-1-j]=temp;
  printf(" rotate right  : %d ");
    }
}

void rotate_left()
{
  int i ,n, j ,temp=0;
  for(i=0; i<size ; i++)
    {
    for(j=0; j< size ;j++)
      arr[n-j]=arr[n+1-j];
  arr[n+1-j]=temp;
  printf(" rotate left  : %d ");
    }
}
	

 
