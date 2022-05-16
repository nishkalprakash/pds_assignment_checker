#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    float result;
    int res;
    int k; float f;
    printf("Enter the number of machines: ");
    scanf("%d", &m);
    printf("Enter the day number (1-7): ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Number of manufactured cars = %d", m);
                break;
        
        case 2: result =((float) m) + ((float)m)/2 + ((float)m)/4;
                if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                break;
        case 3: printf("Enter the no. of maachines under inspection: ");
                scanf("%d", &k);
                result = ((float)(m-k)) + ((float)(m-k))/2 + ((float)(m-k))/4 ; 
                if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                 break;
        case 4 : printf("Enter boosting fraction: ");
                 scanf("%f", &f);
                 result = m + m*f ; 
                 if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                break;
        case 5 : printf("Enter boosting fraction: ");
                 scanf("%f", &f);
                 result = m + m*f ; 
                 if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                break;
        case 6: printf("Enter the no. of maachines under inspection: ");
                scanf("%d", &k);
                result = ((float)(m-k)) + ((float)(m-k))/2 + ((float)(m-k))/4 ; 
                if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                break;
        case 7: printf("Enter boosting fraction: ");
                 scanf("%f", &f);
                 result = m + m*f ; 
                 if ((int)(result*10)%10 >= 5)
                { res = ceil(result);}
                else
                {res = floor(result);}
                printf("Number of manufactured cars = %d", res);
                break;
    }
    return 0;
}