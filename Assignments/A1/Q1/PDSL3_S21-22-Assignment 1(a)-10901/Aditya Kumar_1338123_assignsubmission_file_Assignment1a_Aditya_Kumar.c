/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 1a
Package- stdio.h
*/
#include <stdio.h>
int main()

{   int a, u, alpha;
    float time;
    printf("Enter a, u, alpha in order \n");   
    scanf("%d%d%d", &a,&u,&alpha);
    printf("Enter the time\n");
    scanf("%f",&time);
    float d = a + u*time + 0.5*alpha*time*time;
    if(d<0)
    {
    printf("Distance from the origin is %f",-d);
    }
    else{
       printf("Distance from the origin is %f",d); 
    }
    return 0;
}

