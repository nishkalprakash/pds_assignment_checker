#include<stdio.h>

/*name-Chetna
  dep-CSE
  roll no.-21CS10019*/

int main()
{
    int a,r;
    printf("Enter a 3-digit number:\n");
    scanf("%d",&a);

    while(a!=0){
        r=a%10;
        printf("%d",r);
        a=a/10;
    }
}
