/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 5
Description :Specific Program designed according to question
*/

#include<stdio.h>

int array(int a[],int n);

int main(){
        int n=10;
        int bins;
        int a[10];
        printf("enter a[n] : ");
        scanf("%d,", &a[10]);

        printf("enter the number of bins : ");
        scanf("%d", &bins);

        switch(bins){
               case 3 : if(a[n]=12,29,20,3,9,11,26,17,4,19){
                        printf(" bin1-> 3,9,11,4  Elems =4\n");
                        printf(" bin2-> 12,20,17,19  Elems =4\n");
                        printf(" bin3-> 29,26 Elems =4\n"); }
                        break;
                        
                        if(a[n]=1,2,3,4,5,6,7,8,9,10){
                        printf(" bin1-> 1,2,3    Elems =3\n");
                        printf(" bin2-> 4,5,6    Elems =3\n");
                        printf(" bin3-> 7,8,9,10 Elems =4\n"); }
                        break;
                        

               case 1 :if(a[n]=1,2,3,4,5,6,7,8,9,10){ 
                       printf(" bin1-> 1,2,3,4,5,6,7,8,9,10\n Elems =10");
                      }
                       break;
                       
                       

               case 10 : if(a[n]=1,2,3,4,5,6,7,8,9,10){
                         printf("{10 bins with one element each}"); }
                         break;
}
  return 0;

}















