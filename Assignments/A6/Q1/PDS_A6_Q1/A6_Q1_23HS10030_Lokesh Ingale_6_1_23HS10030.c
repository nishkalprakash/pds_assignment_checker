//Name:Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
#include<stdlib.h>
int size;
void fill(int arr[100])
{
    printf("Enter the size of array");
    scanf("%d",&size);
    if(size<1 && size>100)
    {
        printf("Enter the size of array");
        scanf("%d",&size);
    }
    for(int i=0; i<size; i++)
    {
        arr[i]=rand()%900+100;
    }
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
void exchange(int arr[])
{
    int temp;
    for(int i=0; i<(size/2); i++)
    {
        if(size%2==0)
        {
            temp=arr[i];
            arr[i]=arr[i+(size/2)];
            arr[i+(size/2)]=temp;
        }
        if(size%2!=0)
        {
            temp=arr[i];
            arr[i]=arr[i+(size/2)+1];
            arr[i+(size/2)+1]=temp;
        }
    }
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
void rotateright(int arr[])
{
    int tem;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    tem=arr[size-1];
    for(int i=0; i<=(size-2); i++)
    {
        arr[size-1-i]=arr[size-2-i];
    }
    arr[0]=tem;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
void rotateleft(int arr[])
{
    int tem;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    tem=arr[0];
    for(int i=0; i<=(size-2); i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=tem;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
void search(int arr[])
{
    int p,count=0;
    for(int i=0; i<size; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Enter the value to be searched");
    scanf("%d",&p);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==p)
        {
            printf("the element entered is present at index:%d",i);
            count=count+1;
        }
    }
        if(count==0)
        {
            printf("not found");
        }

}
void fold(int arr[])
{
    for(int i=0; i<size/2; i++)
    {
        if(size%2==0)
        {
            arr[i]=arr[i]+arr[i+size/2];
            arr[i+size/2]=0;
        }
        if(size%2!=0)
        {
	    arr[i]=arr[i]+arr[i+size/2+1];
            arr[i+size/2+1]=0;
        }
    }
      for(int i=0;i<=size/2;i++){
	printf("arr[%d]=%d",i,arr[i]);
      }
}





int main()
{

    int n,arr[100],size;
    while(1)
    {
        //taking input for n
        printf("\n1-fill\n2-Exchange\n3-Rotate right\n4-Rotate left\n5-segregate\n6-search\n7-Fold\n8-Analyze\n0,9 orny higher-exit program");
        printf("Enter your choice");
        scanf("%d",&n);
        if(n==0 || n>9 || n<0)
        {
            printf("Enter your choice\n");
            scanf("%d",&n);
        }
        if(n==1)
        {
            fill(arr);
        }
        if(n==2)
        {
            exchange(arr);
        }
        if(n==3)
        {
            rotateright(arr);
        }
        if(n==4)
        {
            rotateleft(arr);
        }
        if(n==5)
        {
        }
        if(n==6)
        {
            search(arr);
        }
        if(n==7)
        {
            fold(arr);
        }
    }
    return 0;
}

