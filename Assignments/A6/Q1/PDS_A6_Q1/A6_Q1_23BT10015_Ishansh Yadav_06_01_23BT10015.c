//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

int arr[100], size;

void fill()
{ int i;
  printf("Enter the size of the array\n");
  scanf("%d", &size);
  if((size<1)||(size>100)){printf("Entered wrong value\n");
                           scanf("%d", &size);}
                           for(i=0;i<size;i++)
                                {arr[i]=100 + rand() % 899;
				 printf("%d ", arr[i]);}
			   printf("\n");
}

void exchange()
{ int i, temp;
  for(i=0;i<(size)/2;i++)
    { if(size%2==0){temp=arr[i];
	            arr[i]=arr[i+(size/2)];
                    arr[i+(size/2)]=temp;}
      if(size%2!=0){temp=arr[i];
	            arr[i]=arr[i+(size/2)+1];
                    arr[i+(size/2+1)]=temp;};}
  for(i=0;i<size;i++)
    {printf("%d ", arr[i]);}
  printf("\n");
}

void rotateright()
{ int i, temp;
  for(i=size-1;i>0;i--)
    {temp=arr[i];
     arr[i]=arr[i-1];
     arr[i-1]=temp;}
   for(i=0;i<size;i++)
     {printf("%d ", arr[i]);}
   printf("\n");
}

void rotateleft()
{ int i, temp;
  for(i=0;i<size-1;i++)
    {temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;}
   for(i=0;i<size;i++)
     {printf("%d ", arr[i]);}
   printf("\n");
}

void search()
{ int i, m, count=0;
  printf("Enter value\n");
      scanf("%d", &m);
  for(i=0;i<size;i++)
    {
      if(arr[i]==m){count++;
	printf("%d ", i);}
      }
  if(count==0)printf("Not found");}

void fold()
{ int i, temp;
  for(i=0;i<(size/2);i++)
    {arr[i]=arr[i]+arr[size-1-i];
      printf("%d\n", arr[i]);
    }
  printf("\n");
}

void analyze()
{ int i=0,m=0, pos=0, count=0, maxcount=0;
  while(i<size-1){
    while(arr[i]<arr[i+1]){ count++;
	i++;
	pos=i;}
        
    if(count>maxcount){for(m=0;m<=i;m++)printf("%d\n", arr[m]);
      maxcount=count;}
    if(arr[i]>=arr[i+1])i++;}
  printf("\n");
}
int main()
{
  int n=1, i;
  for(i=1;;)
    {printf("\n1---Fill\n");
     printf("2---Exchange\n");
     printf("3---Rotate right\n");
     printf("4---Rotate left\n");
     printf("5---Segregate\n");
     printf("6---Search\n");
     printf("7---Fold\n");
     printf("8---Analyze\n");
     printf("0,9 or any higher number---Exit\n");
     printf("First execute the fill function to fill the array");
     scanf("%d", &n);
     /*Other functions can't be executed without execution of fill functions, else the array will be empty*/ 
      if(n==1) fill();
      if(n==2) exchange();
      if(n==3) rotateright();
      if(n==4) rotateleft();
      if(n==6) search();
      if(n==7) fold();
      if(n==8) analyze();
      if((n==0)||(n>=9))return 0;
    }
  return 0;
}
