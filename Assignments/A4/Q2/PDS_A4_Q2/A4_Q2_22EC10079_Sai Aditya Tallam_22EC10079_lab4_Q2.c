     #include<stdio.h>  //header file
     int main()
   {
     int n,sum=0;
     printf("enter any integer\n");
     scanf("%d",&n);         //inputting an integer
     while(n>0)
    {
     sum =sum+n%10;        //finding an digits in number and adding them
     n=n/10;
   }
    printf("sum is %d",sum);
     
     return 0;
   }
