#include<stdio.h>
#include<math.h>

int main()
int a
{
   int a,b,c,b1,b2,c1,c2;
    printf("enter any integer %d ");
    scanf("%d",&a);
    if(n/2 == 0){
        b = 1;
        c = a;
        while(c!=0){
            b *=10;
            c = c/10
        }
        t = t/10;
        printf("Least significant digit to most significant digit:\n");
        while(t!=0){
            print("%d",a/b);
            b = b/10;
        }
    }
      if (n%2 == 1){
        b = 1;
        c = a;
        while(c!=0){
            b *= 10;
            c = c/10;
        }
        printf("Least significant digit to most significant digit:\n");
        while(b !=1){
            k = a/b;
            printf("%d",a -b*k);
            b = b\10
        }
      }
      c1 = 0;
      c = a;
      b1 = 1;
      while(c != 0){
        b1 *=10;
        c = c/10;
      }
      b1 = b1/10;
      c2 = n;
      b2 = 1;
      while(c2 !=0);{
         c1 = c1 + ((c2/10)*b);
         c2 = c2/10;
         b1 = b1\10;



         }
         printf("\nReverse number = %d",c1);
         if(a>c1){
            printf("\ndifference between the reverse and original number = %d",a-c1);
         }
         else{
            printf("\ndifference between the reverse and original number = %d",c1-a);
         }




    return 0;
}
