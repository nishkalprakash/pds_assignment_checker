// Name: Bhoomik Modi
//Roll no. 23PH10013
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int size;
int arr[100];

int exchange();
int fil();
int rotate_right();
int rotate_left();
int segregate();
int search();
int fold();
int analyze();
int main()
{	int n;
	while(1)
	{
		printf(" 1 fill \n 2 exchange \n 3 rotate right \n 4 rotate left \n 5 segregate \n 6 search \n 7 fold \n 8 analyze\n");
		printf("Enter your choice\n");
		scanf("%d",&n);		
		switch(n)
		{
			case 1: fill();break;
			case 2: exchange();break;
			case 3: rotate_right();break;
			case 4: rotate_left();break;
			case 5 : segregate();break;
			case 6 : search();break;
			case 7 : fold();break;
			case 8 : analyze();break;
			default : return 0;
		} 
	}
}


int fill()
{
printf("Enter the size of the array\n");
for(int i=0;;i++)
{
	scanf("%d",&size);
	if (size>0 && size<=100)
	break;
	else
	printf("Enter th evalue of size between [1,100]\n");
	}
srand(90);
for (int i=0;i<size;i++)
{
	arr[i] = rand()%900 + 100;
	printf("%d\t",arr[i]);
}
printf("\n");
return 0;
}



int exchange()
{	
	int b;// Temprorary storing th rvalue to exchange the value
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	if (size%2==0)
	for(int i=0;i<(size/2);i++)
	{
		b=arr[i];
		arr[i] = arr[(size/2)+i];
		arr[(size/2)+i]=b;	
	}
	else
	for (int i=0;i<(size/2);i++)
	{
		b= arr[i];
		arr[i]=arr[((size-1)/2)+i+1];
		arr[((size-1)/2)+1+i] = b; 	
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}


int rotate_right()
{
	int b;
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	b = arr[size-1];
	for(int i=size-1;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0] = b;
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


int rotate_left()
{
	int b;
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	b=arr[0];
	for (int i= 0;i<size-1;i++)
	{
		arr[i]=arr[i+1];	
	}
	arr[size-1]=b;
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


int segregate()
{
	int even[size];
	int odd[size];
	int nodd=0,neve=0;
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	        if (arr[i]%2==0)
		{even[neve]=arr[i];
		neve++;}
		else{
		odd[nodd]=arr[i];
		nodd++;}
	}
	printf("\n");
	for (int i=0;i<neve;i++)
	{
	arr[i]=even[i];
	}
	for(int i=neve,k=0;i<size;i++,k++)
	{
	arr[i]=odd[k];
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


int search()
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int num;
	printf("\nEnter the Number to be searched");
	scanf("%d",&num);
	for(int i=0;i<size;i++)
	{
		if(num==arr[i])
		{
			printf("Element found at index %d\n",i);
			return 0;
		}
	}
	printf("Not found!\n");
	return 0;
}


int fold()
{
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	if(size%2==0){
	for(int i=0;i<size/2;i++)
	{
		arr[i]=arr[i]+arr[(size/2)+i];
	}}
	else
	{
	for(int i=0;i<size/2;i++)
	{
		arr[i]=arr[i]+arr[(size/2)+1+i];
	}}
	if(size%2==0){
	for(int i=0;i<size/2;i++)
	{
		printf("%d\t",arr[i]);
	}}
	else
	{
	for(int i=0;i<=size/2;i++)
	{
		printf("%d\t",arr[i]);
	}}
	printf("\n");
	
}
int analyze()
{
	int pos,isize=0;
	int maxpos,maxsize=0;
	
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for (int i=0;i<size-1;i++)
	{
		if (arr[i+1]>arr[i])
		{ 
			pos=i;	
			for(;arr[i+1]>arr[i];i++)
			{
				printf("%d,",arr[i]);
				++isize;
			}
			printf("%d,", arr[i]);
		}
		printf("\t");
		if(isize>maxsize)
		{
			maxpos=pos;
			maxsize=isize;
		}
		isize=0;
	}
	printf("\n The Maximum length is : \n");
	for(int i=maxpos;i<=maxpos+maxsize;i++)
	{
	printf("%d\t",arr[i]);
	}
	printf("\n");

}
