/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include <stdio.h>
void Non_Decreasing(int *ap,int *bp,int *cp)//Arranging in the non-decreasing order
{
    int max1=(*ap>*bp)?*ap:*bp;//maximum of 2 integers
    int max=(*cp>max1)?*cp:max1;//maximum of all 3 integers
    int min1=(*ap<*bp)?*ap:*bp;//minimum of 2 integers
    int min=(*cp<min1)?*cp:min1;//minimum of all 3 integers
    int smax=(*ap >*bp)?((*ap>*cp)?((*bp>*cp)?*bp:*cp):((*ap>*bp)?*ap:*cp)):((*bp>*cp)?((*ap>*cp)?*ap:*cp):((*ap>*bp)?*ap:*bp));
    //Second maximum number
    
    //Assigning the values to them
    *ap=min;
    *bp=smax;
    *cp=max;    
}
int main()
{
    int a,b,c;
    //Taking 3 integer input
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    printf("---------------------------------------------------------------\n");
    //displaying before function call all the attributes of the integers
    printf("\nBefore function call\n\n");
    printf("Address of a : %u\n",&a);
    printf("Address of b : %u\n",&b);
    printf("Address of c : %u\n",&c);
    printf("Value of a, b, c are : %d, %d, %d\n",a,b,c);
    
    printf("---------------------------------------------------------------\n");
    Non_Decreasing(&a,&b,&c);//function call

    printf("---------------------------------------------------------------\n");
    //displaying before function call all the attributes of the integers
    printf("\nAfter function call\n\n");
    printf("Address of a : %u\n",&a);
    printf("Address of b : %u\n",&b);
    printf("Address of c : %u\n",&c);
    printf("Value of a, b, c are : %d, %d, %d\n",a,b,c);
    
    printf("---------------------------------------------------------------\n");
    return 0;
}