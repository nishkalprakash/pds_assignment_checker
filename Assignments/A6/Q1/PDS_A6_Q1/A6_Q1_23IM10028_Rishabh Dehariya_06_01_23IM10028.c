//Roll No- 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>
#include<stdlib.h>

int SIZE;
int arr[100];


int Fill();
int Exchange();
int Rotate_Right();
int Rotate_Left();
int Segregate();
int Fold();
int Search();
int Analyze();








int main()
{
  printf("Menu Choices: \n");
  printf(" 1 --- Fill\n");
  printf(" 2 --- Exchange\n");
  printf(" 3 --- Rotate Right\n");
  printf(" 4 --- Rotate Left\n");
  printf(" 5 --- Segregate\n");
  printf(" 6 --- Search\n");
  printf(" 7 --- Fold\n");
  printf(" 8 --- Analyze\n");
  printf(" 0, 9 or any higher number --- Exit");

  printf("\n");

  int num;
  scanf("%d", &num);
  if(num==1)
    Fill();
  /*  else if(num==2)
    Exchange();
  else if(num==3)
    Rotate_Right();
  else if(num==4)
    Rotate_Left();
  else if(num==5)
  Segregate();*/
  else if(num==6)
    Search();
  /* else if(num==7)
    Fold();
  else if(num==8)
  Analyze();*/
  else printf("Exit");
  
  return 0;
}

int Fill()
{
  printf("Enter the size of the Array to be used: \n");
  scanf("%d",&SIZE);
  if(SIZE>=1 && SIZE<=100)
    {
      for(int i=0;i<SIZE; i++)
	{
	  arr[i] = rand()%900 + 100;
        
	  printf("\t %d", arr[i]);
	}
      printf("\n");
    }
  return 0;
}


int Search()
{
  Fill();
  int n;
  printf("Enter an Integer value to be searched : ");
  scanf(" %d",&n);

  for(int i=0;i<SIZE; i++)
    {
       if(n==arr[i])
	 printf("%d",i);
       
    }
  
  return 0;
}
  
