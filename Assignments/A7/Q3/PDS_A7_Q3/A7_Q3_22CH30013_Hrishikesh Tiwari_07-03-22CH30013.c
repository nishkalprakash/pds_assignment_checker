 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main()
 {
    char * x ;
    int n , i =0 ;

 // get the number of names in the string x //

    scanf("%d",&n) ;

    for( i=1 ; i<=n ; i++)
    {
       gets(x) ;

       puts(x) ;

    }

     i = strlen(x) ;

     // now i stores the length of the string x //

     return 0 ;
 }
