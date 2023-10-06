//roll no-23HS10050
//Name-Shobhit kumar

#include<stdio.h>
#include<stdlib.h>

  
int arr[100],size;
void fill( int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i]=rand()%900+100;
        
    }
    for(int i=0; i<size; i++)
        {
            printf("arr[%d]:%d\n",i,arr[i]);
        }
    
}
void exchange(int arr[],int size)
{
    int temp;
    for(int i=0; i<size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n/2+i];
        arr[size-i-1]=temp;
    }
    for(int i=0; i<size; i++)
        {
            printf("arr[%d]:%d\n",i,arr[i]);
        }
}

void rotateright(int arr[], int size)
{
    int temp;
    temp=arr[size+1];
    for(int i=0; i<size; i++)
{
    arr[i+1]=arr[i];
    }
    arr[0]=temp;
    for(int i=0; i<size; i++)
        {
            printf("arr[%d]:%d\n",i,arr[i]);
        }
}
void rotateleft(int arr[],size)
{
    int=temp;
    temp=arr[0];
    for(int i=1; i<(size+1); i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size+1]=temp;
}
    /*void segregate(int[])
{
    int a[100];
    for(i=0; i<size; i++)
    {
        if(arr[i]/2==0)
        {
            a[]=arr
        }
    }
    }*/
void search(int arr[],int size)
{
    int n;
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("enter the number");
    scanf("%d",n);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            printf("index of number is:\n");
        }
        else
            printf("not found");
    }
}
void fold(int arr[],size)
{
    if(size%2==0)
    {
        int x[];
        for(int i=0; i<(size/2); i++)
        {
            x[i]=arr[i]+arr[size-i];
        }
        for(int i=0; i<size; i++)
        {
            printf("arr[%d]:%d\n",i,x[i]);
        }
    }
}

 void Exit(){
   break;
 }
 
 int main()

 {
   int x,y,choice;
   
            printf("enter the size");
            scanf("%d",x);
            y=fill(arr[],size);
            for(int i=0; i<size; i++)
            {
                printf("arr[%d]:%d\n",i,arr[i];
	    }
	          while(1){
		  
                  printf("1: fill\n2: exchange\n3: Rotateright\n4: Rotaateleft\n5: Segregate\n6: Search\n7: Fold\n8: Analyze\n9: EXit")
                  printf("Enter the choice");
                  scanf("%d",choice);
		  

		  switch(choice){
    case 1: fill();
    case 2: exchange();
    case 3: rotateright();
    case 4: rotateleft();
    case 5: segregate();
    case 6: search();
    case 7: fold();
    case 8: analyze();
    case 9: Exit();
		  }
	return 0;
	    }
 }
 

	    

	
