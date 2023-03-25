#include<stdio.h>

#include<math.h>

int main()

{

int x,y;

scanf("%d%d",&x,&y);

if(x*y<=0){

        printf("Not a Perfect Pair");

}

else if((int)log10(abs(x))!=(int)log10(abs(y))){

    printf("Wrong Input");

}

else if((int)log10(abs(x))==(int)log10(abs(y))){

   if ((int)log10(abs(x))==2){

        if( ((x%100-x%10)/10==(y%100-y%10)/10)&&(x%10==(y-y%100)/100)&&(y%10==(x-x%100)/100) ){

            printf("Perfect Pair");

        }

        else{

             printf("Not a Perfect Pair");

        }





   }

   else if((int)log10(abs(x))==1){

        if((x%10==(y-y%10)/10)&&(y%10==(x-x%10)/10)){

            printf("Perfect Pair");

        }

        else{

            printf("Not a Perfect Pair");

        }



   }

   else if((int)log10(abs(x))==0){

         if(x==y) printf("Perfect Pair");

         else printf("Not a Perfect Pair");

   }



}

else {

    printf("Wrong Input");

}





return 0;

}

