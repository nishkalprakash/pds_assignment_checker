# include<stdio.h>

# include<math.h>

int main() {

        int number, Number, factor;

        printf("Enter a number : ");

        scanf("%d", &number);

        if( number >= 0 && number <= 999999)  {

      

            if( number % factor == 0) {

           printf("%d", factor);

    }      else   {

      printf("   ");
}

}

     else if( number >= -999999 && number <= 0) {

          int Number = -1 * number;

           scanf("%d", &Number);

           

         
            if( number % factor == 0) {

             printf("%d", factor);
}

        else   {

      printf("   ");
}

}
else {

       printf(" Invalid number ");

}     return 0;

  }
