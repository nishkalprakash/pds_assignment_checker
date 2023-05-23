#include<stdio.h>
#define size 10

void revorder(int a[] , int n )
{
     int temp ;
    for(int i = 0 ; i< n/2 ; i++)
    {

      temp = a[i] ;

        a[i] = a[n - i -1] ;

      a[n-i-1] = temp ;

    }

}

void alagram(char s1[] , char s2[] , int a , int b)
{
    int  flag=0 , i , j ;

     //length of s1 = a , length of s2 = b //


    for( i= 0 ; s1[i] != '\0' ; i++)
    {
        for(j =0 ; s2[j] != '\0' ; j++)
        {
            if(s1[i] != s2[j])
                {
                flag = 1 ; break ;
            }
        }

    }



   if(flag ==1 && (a==b)) {  printf("These strings are alagrams\n") ;     }
    else printf("The two strings are not alagrams\n") ;


}


int palindrom(char str[])
{

    int i ,l , flag ;
    for(int l =0 ; str[l] != '\0' ; l++) ;

    for(i =0 ; i<=l/2 ; i+=1)
    {
       if(str[i] == str[l-i-1])

       {
         flag = i ;

       }

    }
    if(flag == (l/2)+1) return 1 ;
    else return 0 ;

}

int main()
{
    int a[size] , i , n , l1 , l2;

    char s1[20] , s2[20] ;
    char str[20] ;



    //enter the size //
    scanf("%d",&n) ;

    //enter array elements //

    for(i =0 ; i<n ; i++ )
    {
        scanf("%d",&a[i]) ;
    }

    // calling function //

    revorder(a , n ) ;

    // printing the   reversed array //

    for( i= 0 ; i< n ; i++)
    {

        printf("%d ",a[i]) ;

    }

    printf("\n") ;

   // part 2 of the question //

    scanf("%s",s1) ;

     for(l1 =0 ; s1[l1] != '\0' ; l1++) ;

    scanf("%s",s2) ;

    for(l2 =0 ; s2[l2] != '\0' ; l2++) ;



    alagram(s1 , s2 , l1 , l2) ;


// part 3 of this question//


scanf("%s",str) ;


 int p = palindrom(str) ;


if(p == 1) printf("Plaindrome\n") ;
else printf("Not a palindrome\n") ;

    return 0 ;
    }

