/*Name: Bimal Gayali
 roll:21MA10017
 assignment: 3
 question no : 4    */
#include<stdio.h>
void main()
{
int a[20],beg,item,last,n,num,i,ch,mid;
printf("Menu\n");
printf("1.linear search\n");
printf("2.Binary search\n");
printf("Enter the choice\n");
scanf("%d",&ch);
if(ch==1)
{
printf(" Enter the number of elements in the array \n");
scanf("%d",&n);
printf("Enter the sorted array \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the item to be searched \n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
{
printf("item found at position%d",i+1);
break;
}
}
if(i==n)
printf("item not found \n");
}
if(ch==2)
{
printf("enter the number of elements in the array \n");
scanf("%d",&n);
printf("enter the sorted array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("item to be searched");
scanf("%d",&item);
last=n-1;
mid=(beg+last)/2;
while(beg<=last)
{
if(item==a[mid])
{
printf("item found at position %d \n",mid+1);
break;
}
else if(a[mid]>item)
last=mid-1;
else beg=mid+1;
mid=(beg+last)/2;
}
}
}
