/*section 2
*roll no : 22MI33002
*name: Anirudh Srivastava
*question 2
*Assignment No : 4
* Description : grading
*/

#include <stdio.h>
#include <math.h>
int main ()

{int n,i,a,ct,ms,es;
float total;
    printf("NO OF STUDENTS");
    scanf("%d" , &n);
    for(i=1 ; i<=n ; i++) {

        printf("Attendance [40] :" , a);
        scanf("%d" , &a);
        printf("CT [20] :" , ct);
        scanf("%d" , &ct);
        printf("MidSem [60] : " , ms);
        scanf("%d" , &ms);
        printf("EndSem [100] : " , es);
        scanf("%d" , &es);
        total =  (0.1*a + 0.2*ct + 0.3*ms + 0.4*es)*(100.0/66) ;
        printf(" the total marks of the student %f\n" , total);
        printf (" grade");

        if ( total >= 90) {
            printf ("EX");
        }
        else if ( total>=80 && total < 90) {
            printf ("A");
        }
        else if ( total>=70 && total < 80) {
            printf ("B");
        }
        else if ( total>=60 && total < 70) {
            printf ("C");
        }
        else if ( total>=50 && total < 60) {
            printf ("D");
        }
        else if ( total>=35 && total < 50) {
            printf ("P");
        }
        else if ( total < 35) {
            printf ("F");
        }
        else {
            printf("nothing");
        }

    }

    return 0;
}
