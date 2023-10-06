//name: sourendra nandi
//roll: 23CH10066
#include <stdio.h>
#include <stdlib.h>
int arr[100],size;
void fill();
void exchange(int size);
void rotr();
void rotl();
void search();
void fold();
void analyze();

                        /*PART (a)*/
int main()
{
  int choice;
  while(1)
    {
      printf("Menu Choices :\n");
      printf("1----Fill\n");
      printf("2----Exchange\n");
      printf("3----Rotate Right\n");
      printf("4----Rotate Left\n");
      printf("5----Segregate\n");
      printf("6----Search\n");
      printf("7----Fold\n");
      printf("8----Analyze\n");
      printf("0,9 or higher number----Exit\n");
      printf("Enter Choice: ");
      scanf("%d",&choice);
      if (choice==1){ fill(); printf("------------------\n");}
      else if (choice==2){ exchange(size); printf("--------------------\n");}
      else if (choice==3){ rotr(); printf("--------------------\n");}
      else if (choice==4){ rotl(); printf("--------------------\n");}
      /*else if (choice==5) seg();*/
      else if (choice==6){ search(); printf("----------------\n");}
      else if (choice==7){ fold(); printf("-------------------\n");}
      else if (choice==8){ analyze(arr,size); printf("-----------------------\n");}
      else if (choice==0||choice>=9) break;
    }
}

                      /*PART (b)*/

void fill()
{
  
  while (1)
    {
      int i;
      printf("Enter size of array: ");
      scanf("%d",&size);
      if (size>=1 && size<=100)
	{
	  for (i=0;i<size;i++)
	    {
	      arr[i]=rand()%900+100;         //entering random numbers
	    }
	  printf("{");
	  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing array contents
	    } 
	  printf("}\n");
       	  return;
	}
      else printf("Wrong input , enter again:\n");
    }
}

                         /*PART (c)*/

void exchange(int size)
{
  int i,j,temp;
  printf("Original Array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing Original array contents
	    } 
  printf("}\n");
  for (i=0,j=size-1;i<=(size-1)/2;i++,j--)
    {
      temp=arr[i];           //exchanging upper and lower half elements
      arr[i]=arr[j];
      arr[j]=temp;
    }
  printf("New Array ={");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing new array contents
	    } 
  printf("}\n");
}

              /*PART (d)*/

void rotr()
{
  int i,temp;
   printf("Original array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing original array contents
	    } 
  printf("}\n");
  for (i=size-1;i>0;i--)
    {
      temp=arr[i];
      arr[i]=arr[i-1];
      arr[i-1]=temp;
    }
  printf("New Right Rotated array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);      //printing right rotated array contents
	    } 
  printf("}\n");
}

                     /*PART (e)*/

void rotl()
{
  int i,temp;
   printf("Original array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing original array contents
	    } 
  printf("}\n");
  for (i=0;i<size-1;i++)
    {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  printf("New Left Rotated array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);      //printing left rotated array contents
	    } 
  printf("}\n");
}
      
                      /*PART (h)*/

void fold()
{
  int i,j,k,fold_arr[100],fold_size=(size+1)/2;
  printf("Original Array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing Original array contents
	    } 
  printf("}\n");
  for (i=0,j=size-1,k=0;i<=(size-1)/2;i++,j--,k++)
    {
      if (i==j)
	{
	  fold_arr[k]=arr[i];
	  break;
	}
      fold_arr[k]=arr[i]+arr[j];
    }
  printf("Folded Array = {");
  for (i=0;i<fold_size;i++)
	    {
	      printf("%d,",fold_arr[i]);          //printing folded array array contents
	    } 
  printf("}\n");
}
  
                     /*PART (g)*/

void search()
{
  int num,flag=0,i;
  printf("Array = {");
	  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing array contents
	    } 
  printf("}\n");
  printf("Enter number to be searched: ");
  scanf("%d",&num);
  for (i=0;i<size;i++)
    {
      if (num==arr[i])
	{
	  flag=1;
	  printf("Number Found At index %d\n",i);
	  break;
	}
    }
  if (flag==0) printf("Number not found\n");
  return;
}

                /*PART (i)*/

void analyze()
{
  int i,j,flag=0,maxbegin=0,ssbegin=0,maxcount=1,count=1;
    printf("Original Array = {");
  for (i=0;i<size;i++)
	    {
	      printf("%d,",arr[i]);          //printing Original array contents
	    } 
  printf("}\n");
  printf("Increasing sequences : \n");
  for (i=1;i<size;i++)
    {
      if (arr[i]>arr[i-1])
	{
	  count++;
	  if (count>maxcount)
	    {
	      maxbegin=ssbegin;
	      maxcount=count;
	      if (maxcount>1) flag=1;
	    }
	}
      else
	{
	  if (count>1)
	    {
	      printf("(");
	      for (j=ssbegin;j<ssbegin+count;j++)
		{
		  printf("%d,",arr[j]);
		}
	      printf(")\n");
	    }
	  ssbegin=i;
	  count=1;
	}
    }
  if (flag==0)
    {
      printf("No increasing sequence of numbers present \n");
    }
  else if (flag==1)
    {
      printf("Largest sequence of increasing numbers :\n");
      printf("(");
      for (i=maxbegin;i<=maxbegin+maxcount-1;i++)
	{
	  printf("%d,",arr[i]);
	}
      printf(")\n");
    }
}
      
	  
	
  
      


	  
  
  


  
