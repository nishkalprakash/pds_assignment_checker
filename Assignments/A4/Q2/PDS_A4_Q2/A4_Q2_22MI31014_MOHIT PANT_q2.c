/*section 2
roll no.: 22mi31014
name :MOhit Pant
question 2
Assignment No.:4*/
#include<stdio.h>
int main(){
    int n,i=0,a,c,m,e,t,f;
    printf("enter number of students");
    scanf("%d",&n);
    while(i<n){
        printf("Attendence[40]\n");
        scanf("%d",&a);
        printf("CT[20]\n");
        scanf("%d",&c);
        printf("Midsem[60]\n");
        scanf("%d",&m);
        printf("Endsem[100]\n");
        scanf("%d",&e);
        f=(40*0.1)+(20*0.2)+(60*0.3)+(100*0.4);
        t=(((a*0.1)*(100/66.0))+((c*0.2)*(100/66.0))+((m*0.3)*(100/66.0))+((e*0.4)*(100/66.0)));
        printf("Total Marks:%d\n",t);
        printf("Grade:");
        if(t>=90) printf("EX\n");
        else if(t<90 && t>=80) printf("A\n");
        else if(t<80 && t>=70) printf("B\n");
        else if(t<70 && t>=60) printf("C\n");
        else if(t<60 && t>=50) printf("D\n");
        else if(t<50 && t>=35) printf("P\n");
        else printf("F\n");


        i++;
    }

return 0;
}
