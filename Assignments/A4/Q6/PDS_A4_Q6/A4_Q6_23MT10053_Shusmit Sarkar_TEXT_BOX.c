#include<stdio.h>
#include<stdlib.h>
int main(){
        int min = 100;
       
        int Num ;
    for(int i=1; i<=20; i++){
        int a = rand()%1001 + 5000;
        printf("Random no: %d\n", a);
        int s=0;
        int d=0;
        int num;
               
        while(a!=0){
            d = a%10;
            s = s+d;
            a = a/10;
        }
        printf("The sum of digits is %d\n",s);
                if(s < min)
        {
            min = s;
            num = Num;
                }
             
    }
    printf("The minimum number is %d\n",num);
    return 0;
}