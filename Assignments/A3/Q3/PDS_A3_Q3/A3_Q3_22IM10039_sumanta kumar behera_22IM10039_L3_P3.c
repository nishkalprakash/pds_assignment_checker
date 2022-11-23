# include<stdio.h>

# include<math.h>
// doing maths and fun

  int main()

  {
    float a, b, ans;

    char c;

    printf("enter the char");

    scanf("%c", &c);

   

   printf(" enter the two numbers");

   scanf("%f %f", &a, &b);

   switch (c) {

   case '+' :

        ans = a + b;

      printf("The ans is : %f", ans);

   break ;

   case'-' :

       ans = a - b;

    printf("The ans is : %f", ans);

   break ;

case '*' :

        ans = a * b;

      printf("The ans is : %f", ans);

   break ;

case '/' :

        ans = a / b;

      printf("The ans is : %f", ans);
}

   return 0;

 }


