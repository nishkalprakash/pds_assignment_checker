//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>

int arr[100];
int size;

int fill()
{
	int i,j;
	while(1)
	{
		printf("Enter a positive integer as the size of array\n");
		scanf("%d", &size);
		if(size<=100)break;
	}
	for(i=0; i<size; i++)	
	{
		j=rand()% 900 + 100;
		arr[i]=j;
	}
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);

}

int exchange()
{ 
	int i,temp,b,j;
	printf("Original array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
	if(size%2==0) 
	{
		b=size/2;
		for(i=0; i<b; i++)
		{
			temp=arr[i];
			arr[i]=arr[b+i];
			arr[b+i]=temp;
		}
	}
	else 
	{
		b=(size+1)/2;
		for(i=0; i<b-1; i++)
		{
			temp=arr[i];
			arr[i]=arr[b+i];
			arr[b+i]=temp;
		}
	}
	printf("Exchanged array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
}

int rotateright()
{
	int i,temp;
	printf("Original array:\n");
	for(i=0; i<size; i++)
	printf("arr[%d] = %d\n", i, arr[i]);
	temp= arr[size-1];
	for(i=(size-1); i>0; i--){
	arr[i]=arr[i-1];
	}
	arr[0]=temp;
	printf("Right Rotated array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
}

int rotateleft()
{
	int i,temp;
	printf("Original array:\n");
	for(i=0; i<size; i++)
	printf("arr[%d] = %d\n", i, arr[i]);
	temp= arr[0];
	for(i=1; i<size; i++){
	arr[i-1]=arr[i];
	}
	arr[size-1]=temp;
	printf("left Rotated array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
}

int segregate()
{ 	
	int i,temp,j;
	printf("Original array:\n");
	for(i=0; i<size; i++)
	printf("arr[%d] = %d\n", i, arr[i]);
	for(i=size-1; i>0; i--)
	{
			j=i-1;
			if(arr[i]%2==0 && arr[j]%2==1)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		
	}
	printf("Segregated array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
}

int search()
{
	int i,j=0,a;
	printf("Original array:\n");
	for(i=0; i<size; i++)
	printf("arr[%d] = %d\n", i, arr[i]);
	printf("Enter an integer value\n");
	scanf("%d", &a);
	for(i=0; i<size; i++){
				if (arr[i]==a){
				printf("index = %d\n", i);
				j++;
				}
			}
	if(j==0)
	printf("not found\n");
}

int fold()
{
	int i,b;
	if(size%2==0) 
	{
		b=size/2;
		for(i=0; i<b; i++)
		{
			arr[i]+=arr[size-i];
		}
	}
	else 
	{
		b=(size+1)/2;
		for(i=0; i<b-1; i++)
		{
			
			arr[i]=arr[size-i];
			
		}
	}
	printf("Folded array:\n");
	for(i=0; i<size; i++)
	 printf("arr[%d] = %d\n", i, arr[i]);
}




int main()
{
	int k;
	printf("Menu choices:\n");
	printf("   i.  1---Fill\n");
	printf("  ii.  2---Exchange\n");
	printf(" iii.  3---Rotate right\n");
	printf("  iv.  4---Rotate left\n");
	printf("   v.  5---Segregate\n");
	printf("  vi.  6---Search\n");
	printf(" vii.  7---Fold\n");
	printf("viii.  8---Segregate\n");
	printf("  ix.  0,9 or any higher number --- Exit\n");
	while(1)	
	{
		printf("Enter your choice\n");
		scanf("%d", &k);
		if(k>0 && k<9)
		{
			switch(k){
				case(1):{ fill(); 
					break;}
				case(2):{ exchange();
					break;}
				case(3):{ rotateright();
					break;}
				case(4):{ rotateleft();
					break;}
				case(5):{ segregate();
					break;}
				case(6):{ search();
					break;}
				case(7):{ fold();
					break;}
				
				}
		}
		else break;
	}
	return 0;
}

