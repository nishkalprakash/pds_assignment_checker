#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100],size;
int fill(int arr[]);


int main()
{
  srand(time(NULL));
  int i;
    
  printf("menu:\ni\tfill\nii\tExchange\niii\tRotate Right\niv\tRotate left\nv\tSegregate\nvi\tSearch\nvii\tFold\nviii\tAnalyze");
  
   printf("\nenter the choice from 0 to 9 ");
  scanf("%d",&i);
  printf("%d",i);
  while(1){
    
    if(i!=0||i!=9||i<9&&i>0)
      {
        
     
  
  switch(i)
    {
    case 1:
      printf("\nfill:");
      fill(arr);
      break;
    case 2:printf("exachange:");
	break;
    case 3:printf("Rotate Right:");break;
    case 4:printf("Rotate left:");break;
    case 5:printf("Segregate:");break;
    case 6:printf("Search:");break;
    case 7:printf("Fold:");break;
    case 8:printf("Analyze:");break;		 
    }
      } 
  }
}

int fill(int arr[])
{
  int z,k;
  {
	printf("\nenter the size of the array:");
	scanf("%d",&z);
	  size=z;
	for(k=0;k<size;k++){
	  arr[k]=(rand()%(100-1))+1;
	  printf("%d ",arr[k]);}
      }

}

  
