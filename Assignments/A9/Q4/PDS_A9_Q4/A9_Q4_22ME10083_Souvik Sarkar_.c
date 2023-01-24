/*
*    section 14
*    Name: Souvik Sarkar
*    roll no:22ME10083
*    Assignment: 9
*    Topic:Structures
*    Question no.:5
*    Programme to printing the name of the employee along with their net pay
*/
#include<stdio.h>
typedef struct{
        char name[20];// for taking name
        int a;// for taking wadge days
        float b;// basic pays
}emp;
float netpay(float x, int y)
{
    float bp=x*y;
    if(bp<1000)
        bp=bp+(bp*0.12);
    if(y>19)
        bp=bp+(bp*0.10);
    return bp;
       
}
void main(){
    //Varriable initialization
    int i,n;
    float j;
    printf("Enter the no. of employee(s)");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        emp arr;
        printf("Enter the name:\n");
        scanf("%s",arr.name);
        printf("Enter the basic pay:\n");
        scanf("%f",&arr.b);
        printf("Enter the no. of days present:\n");
        scanf("%d",&arr.a);
        j=netpay(arr.b,arr.a);
        //result
        printf("Emp name:\n %s",arr.name);
        printf("\nNet pay:%f\n",j);

    }
       

}