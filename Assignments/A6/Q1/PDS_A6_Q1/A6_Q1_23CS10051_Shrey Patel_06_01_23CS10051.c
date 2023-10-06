//Shrey Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>
int temp,arr[100],size;
int fill(int a[],int size)
{
for(int i=0;i<size;i++)
a[i]=rand()%900+100;
for(int i=0;i<size;i++)
{printf("%d\t",a[i]);
if(i%10==9)
printf("\n");}
}

int ex(int a[],int size)
{for(int i=0;i<size/2;i++)
{if(size%2==1)
{temp=a[i];
 a[i]=a[i+size/2+1];
 a[i+size/2+1]=temp;}
else
{temp=a[i];
a[i]=a[i+size/2];
a[i+size/2]=temp;}}

for(int i=0;i<size;i++)
printf("%d\t",a[i]);
}

int rr(int a[],int size)
{
temp=a[size-1];
for(int i=size-2;i>=0;i--)
{
a[i+1]=a[i];}
a[0]=temp;
for(int i=0;i<size;i++)
printf("%d\t",a[i]);}

int rl(int a[],int size)
{temp=a[0];
for(int i=0;i<size-1;i++)
{
a[i]=a[i+1];}
a[size-1]=temp;
for(int i=0;i<size;i++)
printf("%d\t",a[i]);
}

int seg(int a[],int size)
{int temp;
for(int i=1;i<size;i++)
{
for(int j=i+1;j<size;j++)
if((a[0]-a[j])%2==0 && (a[i]-a[j])%2!=0)
{temp=a[j];
a[j]=a[i];
a[i]=temp;
break;}}
for(int i=0;i<size;i++)
printf("%d\t",a[i]);
}

int search(int a[],int size)
{int num,count=0;
for(int i=0;i<size;i++)
printf("%d\t",a[i]);
printf("\nEnter the number to be searched:");
scanf("%d",&num);
for(int i=0;i<size;i++)
{
if(a[i]==num)
printf("The index is %d\n",i);
count++;
}
if(count==0) printf("Value not found\n");}

int fold(int a[],int size)
{printf("Original values");
for(int i=0;i<size;i++)
printf("%d\t",a[i]);
printf("\n");
printf("After Fold used\n");
for(int i=0;i<size/2;i++)
a[i]=a[i]+a[size-i-1];
if(size%2==1)
for(int i=0;i<size/2+1;i++)
printf("%d \t",a[i]);
else
for(int i=0;i<size/2;i++)
printf("%d\t",a[i]);
}

int analyze(int a[],int size)
{int pos=0,isize=0,mpos,msize=0;
for(int i=0;i<size;i++)
{for(int j=i+1;j<size;)
{
if(a[j]-a[i]>0)
{isize++;
break;}

else {pos=i;
break;}}

if(isize>msize)
{msize=isize;
mpos=pos;
}}

for(int i=mpos;i<mpos+msize;i++)
printf("%d\t",a[i]);
}

int main()
{
int  n;
printf("Menu:");
while(1)
{
printf("i. 1----Fill\n");
printf("ii. 2----Exchange\n");
printf("iii. 3----Rotate Right\n");
printf("iv. 4----Rotate Left\n");
printf("v. 5----Segregate\n");
printf("vi. 6----Search\n");
printf("vii. 7----Fold\n");
printf("viii. 8----Analyze\n");
printf("ix. 0,9 or any higher number----Exit:");
scanf("%d",&n);

if(n==1)
{printf("Enter the size of array:");
scanf("%d",&size);
fill(arr,size);
printf("\n");
}

else if(n==2)
{printf("If array doesnot exist then first use fill option to fill the array\n");
ex(arr,size);
printf("\n");}

else if(n==3)
{rr(arr,size);
printf("\n");}

else if(n==4)
{rl(arr,size);
printf("\n");}

else if(n==5)
{seg(arr,size);
printf("\n");}
else if(n==6)
{search(arr,size);
printf("\n");}

else if(n==7)
{fold(arr,size);
printf("\n");}

else if(n==8)
{analyze(arr,size);
printf("\n");}
else 
break;
}
}
