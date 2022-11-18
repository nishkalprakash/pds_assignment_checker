#include <stdio.h>

void sort(int *a,int *b, int *c){
    int k;
    if(*b<*a){
        k = *a;
        *a=*b;
        *b=k;
    }
    if(*c<*b){
        k=*c;
        *c=*b;
        *b=k;
        if(*b<*a){
        k = *a;
        *a=*b;
        *b=k;
        }
    }
}
int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("----Before function call---\n");
    printf("Address of a: %u\n", &a);
	printf("Address of b: %u\n", &b);
	printf("Address of c: %u\n", &c);
	printf("Values in a,b,c = %d, %d, %d",a,b,c);
	sort(&a,&b,&c);
	printf("\n----After function call---\n");
    printf("Address of a: %u\n", &a);
	printf("Address of b: %u\n", &b);
	printf("Address of c: %p\n", &c);
	printf("Values in a,b,c = %d, %d, %d",a,b,c);

    return 0;
}
