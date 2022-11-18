#include <stdio.h>
//NAME- ANMOL KUMAR MISHRA
//ROLL NO.-21EC30060
//SECTION-3
// SUBJECT- PDS LAB TEST 3. 
//QUESTION NO.- 3
int main()
{
        int c, d;
        printf("Enter two digits: "); 
        scanf("%d%d", &c, &d);  
        int num[32], count=0; 
        int t1, t2, t3, t4, t5, temp; 
        for(int i=0; i<2; i++)
        {
                if (i==0) 
                {t1=c;}
                else 
                {t1=d;}
                for(int j=0; j<2; j++)
                {
                        if (j==0) 
                        {t2=c;}
                        else 
                        {t2=d;}
                        for(int k=0; k<2; k++)
                        {
                                if (k==0)
                                {t3=c;}
                                else 
                                {t3=d;}
                                for(int l=0; l<2; l++)
                                {
                                        if (l==0) 
                                        {t4=c;}
                                        else
                                        {t4=d;}
                                        for(int m=0; m<2; m++)
                                        {
                                                if (m==0) 
                                                {t5=c;}
                                                else 
                                                {t5 = d;}
                                                temp = 10000*(t5)+1000*(t4)+100*(t3)+10*(t2)+t1;
                                                if (temp%(c+d)!=0)
                                                {
                                                   num[count++]=temp;
                                                }
                                        }
                                }
                        }
                }
        }
        printf("Numbers:\n");
        for(int i=0; i<count; i++)
        {
                printf("%d ", num[i]);
        }
        return 0;
}
