#include<stdio.h>
//Section-2
//roll no-22IE10015
//Name-Arunima patra
//assignment no-4
//question no-2
int main(){
    int N;
    float a, c, m ,e;
    printf ("Enter the no. of students:");
    scanf ("%d", &N);
    for (int i=1;i<=N;i++){
        printf ("Enter the marks for student %d\n",i);
        printf ("Attendence[40]:");
        scanf ("%f",&a);
        printf ("CT[20]:");
        scanf ("%f",&c);
        printf ("Midsem[60]:");
        scanf ("%f",&m);
        printf ("Endsem[100]:");
        scanf ("%f",&e);

        if (!(a<0|| c<0|| m<0 || e<0)){
        double marks=(a*10/40.0)+(c*20/20.0)+ (m*30/60.0)+(e*40/100.0);


        printf ("Total marks:%lf\n", marks);
        if (marks>=90){
            printf ("Grade=EX\n");
        }
        else if (marks>=80 && marks<90){
            printf ("Grade=A\n");
        }
        else if (marks>=70 && marks<80){
            printf ("Grade=B\n");
        }
        else if (marks>=60 && marks<70){
            printf ("Grade=C\n");
        }
        else if (marks>=50 && marks<60){
            printf ("Grade=D\n");
        }
        else if (marks>=35 && marks<50){
            printf ("Grade=P\n");
        }
        else {
            printf ("Grade=F\n");
        }



    }
    else{
        printf ("Wrong Input");
    }








}
return 0;
}
