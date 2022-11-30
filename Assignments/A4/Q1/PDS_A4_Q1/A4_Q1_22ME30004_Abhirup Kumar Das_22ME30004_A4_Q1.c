#include<stdio.h>
int main()
{
int a,num;
a=1;
printf("Write any number:\n");
scanf("%d",&num);

while(num>=a){	

    if(num%a==0)
printf("%d",a);
a++;

}
return 0;
}
