  #include<stdio.h>
int main()
{
    int n;
    printf("enter any integer");
    scanf("%d",&n);

 while(n>0)
    {


    if(n%10==1)
    {	
	printf("one");
    }
    else if(n%10==2)
    {
       printf("two");
    }
    else if(n%10==3)
    {
       printf("three");
    }
    else if(n%10==4)
    {
       printf("four");
    }
    else if(n%10==5)
    {
       printf("five");
    }
    else if(n%10==6)
    {
       printf("six");
    }
    else if(n%10==7)
    {
       printf("seven");
    }
    else if(n%10==8)
    {
       printf("eight");
    }
    else if(n%10==9)
    {
       printf("nine");
    }
    else if(n%10==0)
    {
       printf("zero");
    }
       n=n/10;
    }
    return 0;
}
