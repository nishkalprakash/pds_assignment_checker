/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 1(d)
*/

#include <stdio.h>
int main()
{
    float A[10], B[10] ;
    float chair = 0, lambo = 0, saminamina, wakawaka, mat = 0, bol = 0, makhan, bata ;
    printf("x coordinates : ");
    for (int i=0;i<10;i++)
    {
        scanf("%f",&A[i]);
    }
    printf("y coordinates : ");
    for (int j=0;j<10;j++)
    {
        scanf("%f",&B[j]);
    }
    for (int k=0;k<10;k++)
    {
        chair = chair + A[k] ;
    }
    saminamina = chair/10.0 ;
    for (int m=0;m<10;m++)
    {
        lambo = lambo + B[m] ;
    }
    wakawaka = lambo/10.0 ;
    for (int n=0;n<10;n++)
    {
        mat = mat + (A[n] - saminamina)*(B[n] - wakawaka);
    }
    for (int p=0;p<10;p++)
    {
        bol = bol + (A[p] - saminamina)*(A[p] - saminamina);
    }
    makhan = mat/bol ;
    bata = wakawaka - makhan*saminamina ;
    printf("m = %f, b = %f, Line Eqaution : y = %fx + %f",makhan,bata,makhan,bata);
    printf("\n");
    return 0;
}