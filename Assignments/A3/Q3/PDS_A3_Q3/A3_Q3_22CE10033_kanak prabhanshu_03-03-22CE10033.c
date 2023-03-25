#Include<studio.h>
int main()

{
    float(p1,q1,r1,p2,q2,r2,p3,q3,r3);

    printf("P (p1,q1,c1): ");

    scanf(%f,%f,%f &p1,&q1,&r1);

    printf("Q (p2,q2,r2): ");

    scanf(%f,%f,%f, &p2,&q2,&r2);

    printf("R (p3,q3,r3); ");

    scanf(%f,%f,%f &p3,&q3,&r3);



    n1= sqrt(pow(p1-p2,2) + pow(q1-q2,2) + pow(r1-r2,2));
    n2= sqrt(pow(p2-p3,2) + pow(q2-q3,2) + pow(r2-r3,2));
    n3= sqrt(pow(p3-p1,2) + pow(q2-q3,2) + pow(r3-r1,2));

    printf("P(p1,q1,r1): (%f,%f,%f)\n" ,p1,q1,r1);

    printf("P(p2,q2,r2): (%f,%f,%f)\n" ,p2,q2,r2);

    printf("P(p3,q3,r3): (%f,%f,%f)\n" ,p3,q3,r3);


    if(n3=n1+n2|| n2=n1+n3|| n1=n2+n3);
    {

       printf("The given points are collinear\n");

    }

    else{

    printf("The given poins are non-collinear\n");
    }

return0;
}
