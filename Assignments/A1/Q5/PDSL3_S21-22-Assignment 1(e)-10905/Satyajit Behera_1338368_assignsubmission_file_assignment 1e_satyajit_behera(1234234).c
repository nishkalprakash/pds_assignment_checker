/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/
   #include <stdio.h>

int main()
{


char wood;
float bp,gst,fp;
float w;
printf("enter the alphabet n' for natural wood\n, 's' for synthetic wood\n");
printf("enter the alphabet-");
scanf("%c",&wood);
if (wood=='n'){
    printf("Enter the weight of wood (in Kg.) you want-");
    scanf("%f",&w);
    bp=1100*w;
    gst=0.20*bp;/* All prices should have two digits in the decimal place (use %XX.YYf format for this).
     Assume that price of natural wood is Rs. 1100/kg, that of synthetic one is Rs. 780/kg, and the respective GSTs are 20% and 15% on the base price.*/

    fp=bp+gst;
    printf("base price -%0.2f\n gst-%0.2f\n final price-%0.2f\n",bp,gst,fp);
}

else (wood=='s');{
    printf("Enter the weight of wood (in Kg.) you want-");
    scanf("%f",&w);
    bp=780*w;
    gst=0.15*bp;
    fp=bp+gst;
    printf("base price -%0.2f\n gst-%0.2f\n final price-%0.2f\n",bp,gst,fp);
}

}
