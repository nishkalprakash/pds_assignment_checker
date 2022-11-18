//GUNNU HEMANTH
//21BT30006
//SEC-3

#include<stdio.h>
#define MAX 100
int que(int a[],int l,int n){  //defining a function that returns value as temp.

int i,temp=1;
for(i=0;i<l;i++){
       if (a[i]==n){printf("the queue contains %d",n);//copiler prints the number in queue.
   temp=0;
     break;}}

     if (temp==1){if (l==MAX)printf("queue reached its maximum size ");else{//prints reched maximum when length reaches maximum.
 a[l]=n;
 l++;
    printf("the queue contains : ");printf("%d",a);for(i=1;i<l;i++)

    printf(",%d",a[i]);}}

 return temp;
}
int deque(int a[],int l){ // another function deque.
int i,temp=0;


if (l==0)printf("the queue is empty");
else{
temp=1;

printf("removed element %d\n",a);
for(i=0;i<l-1;i++)

a[i]=a[i+1];
l--;
printf("the que contains :");

printf("%d",*a);for(i=1;i<l;i++)printf(",%d",a[i]);}
return(temp);

}
int main(){
                            //the main function.
int n,option,num[MAX];static int L=0;
printf("input the option: 1.que,2.deque \n");

scanf("%d",&option); //compiler asks use to input as option enque or deque.

while(option!=1){{if(option==2){
        deque(num,L);printf("\n enter the option : 1,que,2,deque \n");}

    else printf("enter a valid option ");scanf("%d",&option);}

if(option==1){printf("enter the element : ");//option 1 indicates enque.
scanf("%d",&n);if (que(num,L,n)==1)L++;

printf("\enter the option: 1.enque,2.deque,3.exit\n");}
   else if (option==2){if(deque(num,L)==1)L--;

printf("\n enter the option : 1.enque,2.deque,3. exit\n");}

    else if (option==3)break; else printf("enter a valid option ");

    scanf("%d",&option);}//again user have to input option.

     printf("quitting");
return (0);
}
