//dhritish mondal
//23ec30016_LT2_setB
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int arr[50];
  int size,menu,i;
  printf("Enter the size of the array : ");
	scanf("%d", &size);
  for( int i=0;i<size;i++)
    {
      arr[i]=rand()%81+20;
    }
    while(1)
      {
	switch(menu)
	case 1: printf(" maxmin ");
	break;
        case 2: printf("duplicate");
	break;
        case 3: printf("highestfreq");
	break;
        case 4: printf("largest increasing");
	break;
        case 5 : printf("largest decreasing"); 
	break;
	case 6 : printf(" remove duplicate");
	break;
      }
    void maxmin(){
      int i;
      printf("enter the size of the array ");
      scanf("%d",&size);
      for(int i=0;i<size;i++);
       arr[i]=rand()%81+20;
       printf("random numbers between 20-100 :%d "arr[i]);
    }
    void duplicate(){
      int i,j;
      printf("enter the size :");
      scanf("%d",&i);

    }


        void highestfreq(){
	  int i,temp,j;
      printf("enter the size of the array ");
      scanf("%d",&size);
      for( i=0;i<size;i++)
      { for(j=0;j<size;j++)
	  {
	    printf("enter the array");}
	  temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
      }
      printf("random numbers between 20-100 :%d %d "arr[i],arr[j]);
    }
	 void largestIncreasing(){
      int i;
      printf("enter the size of the array ");
      scanf("%d",&size);
      for(int i=0;i<size;i++);
      
       printf("random numbers between 20-100 : "arr[i]);
    }

 void largestdecreasing(){
      int i;
      printf("enter the size of the array ");
      scanf("%d",&size);
      for(int i=0;i<size;i++);
      
       printf("random numbers between 20-100 :%d "arr[i]);
    }
	  void removeDuplicate(){
	    int i,temp,j;
      printf("enter the size of the array ");
      scanf("%d",&size);
      for(int i=0;i<size;i++);
	  
       printf("random numbers between 20-100 : "arr[i]);
	  }
      
    return 0;
}


