/*NAME - Neeraj
Roll No.- 22CY10036
Section - 2
Descripion -            */
#include<stdio.h>
#include<math.h>
int primeCheck(int i){
    int result;
    int p= sqrt(i);
    if (p<=2) result = -1;
    for(int j=2;j<=p;j++){
        if(i%j==0){

           result = 0;
            break;
        }
        else
           result = -1;
            break;

        }

 return result;

}
int main(){






    int i;
    printf("enter i:");
    scanf("%d",&i);
    int result = primeCheck(i);
    printf("%d", result);

return 0;
}


