/*shubham mishra
22EX10042
section 2
lab test 2
q1 sol:*/



#include<stdio.h>



float mean(int *a,int n,float sum)
{
    if(n==1)
    {
        return a[0];
    }


    sum+=a[n-1]+mean(a,n-1,sum);
    return sum;


}
int main(){
 int n;
 printf("enter the no of numbers in a list\n");
 scanf("%d",&n);
 int list[n];
 for(int i=0;i<n;i++)
 {
     printf("enter the %d element ",i);
     scanf("%d",&list[i]);

 }
 int s=0,e=n-1;
 float sum=0;
 float avg = mean(list,n,sum)/n;
 printf("list = [");
 for(int i=0;i<n;i++)
 {

     printf("%d",list[i]);
     printf(" ");

 }
 printf("]");
 printf("the mean is %f",avg);

}
