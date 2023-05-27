
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char RollNo[10] ;
    float marks[3] ;
    float total ;
};

typedef struct student Student ;

int main()
{
    int n ;
    Student * A ;
    scanf("%d", &n) ;
         A = (int *)malloc(n*sizeof(Student)) ;


    // Reading Student records //
    for(int i =0 ; i<n ; i++)
    {
        scanf("%s" , &A[i].RollNo) ;

        for(int j =0 ; j<3 ; j++)
        {
            scanf("%f" , &A[i].marks[j]) ;
        }

     }

     // calculating total

    for(int i =0 ; i<n ; i++)
    {  A[i].total = 0 ;
        for(int j =0 ; j<3 ; j++)
        {
           A[i].total = A[i].total + A[i].marks[j] ;
        }
     }

    printf("Student Records :\n") ;
    printf("<Print in the order read>\n") ;

     printf("Student REcords:\n") ;
     for(int i =0 ; i<n ; i++ )
     {
         printf("Roll No = %s \n" ,A[i].RollNo) ;
         printf("Marks :") ;
         for(int j= 0 ; j<3 ; j++)
        {
         printf("%f ", A[i].marks[j]) ;
        }

         printf("\nTotal = %f\n" , A[i].total) ;
     }

  printf("\n") ;

     //DOING THE SORTING //
     printf("Sorted Student records :\n");

     float max = A[0].total  ;
     float min = A[0].total ;

     for(int i =0 ; i<n ; i++ )
     {

      if(max  < A[i].total)
        max = A[i].total ;

       if(min > A[i].total)
        min = A[i].total ;

     }

for( int i =max ; i<= min ; i--)
{
    for(int j=0 ; j<n ; j++)
   {
       if( A[j].total == i )
       {
           printf("Roll No = %s\n" , A[i].RollNo) ;
           printf("Marks = ") ;
           for(int k =0 ; k<3 ; k++){
           printf("Marks = %f " , A[j].marks[k]) ;
           printf("Total = %f\n", A[j].total) ;

           }
       }
   }

}
    return 0 ;
}
