#include<stdio.h>

void printf_combination(int n_digits, int c, int d, int num)

{

if(n_digits==0){
        int sum = 0,num_copy = num;
        for(int i=0;num_copy>0;i++){
            sum+=num_copy%10; num_copy/=10;
            }
        if(num%sum != 0)
        printf("%d ",num);
return;
}
 
 num*=10; num+=c;  printf_combination(n_digits-1,c,d,num);
 num = num - c + d;  printf_combination(n_digits-1,c,d,num);
 return;
 
}

 int main()
{
 int c,d;
 printf("Enter two digits: ");
 scanf("%d %d",&c,&d);
 printf("Numbers:\n");
  printf_combination(5,c,d,0);
 return 0;

}