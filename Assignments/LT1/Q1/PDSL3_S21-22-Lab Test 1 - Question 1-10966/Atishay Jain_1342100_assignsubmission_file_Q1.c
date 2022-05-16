main()
{
    float y,l,m,p,i,M,P,L,e;
    printf("enter your MONTHLY INCOME in rupees:");
    scanf("%f",&y);
    printf("\n enter amount of your HOUSE LOAN:");
    scanf("%f",&l);
    printf("\nenter amount of your your LIFE INSURANCE :");
    scanf("%f",&p);
    printf("\nenter the amount of HEALTH INSURANCE:");
    scanf("%f",&m);
    i=12*y;
    e=i-m-l-p;
    M=m-50000;
    P=p-150000;
    L=l-250000;
    if(M>0)
     e=e+M;
    if(L>0)
     e=e+L;
    if(P>0)
     e=e+P;
     if(i>=1000000)
        i=e;
        if(i<=250000)
           printf("TOTAL TAX=0");
        if(i>=250001&&i<=500000)
           printf("TOTAL TAX=%f",0.05*i);
        if(i>=500001&&i<=750000)
           printf("TOTAL TAX=%f",12500+0.10*i);
        if(i>=750001&&i<=1000000)
            printf("TOTAL TAX=%f",37500+0.15*i);
        if(i>=1000001&&i<=1250000)
            printf("TOTAL TAX=%f",75000+0.20*i);
        if(i>=1250001&&i<=1500000)
            printf("TOTAL TAX=%f",125000+0.25*i);
        if(i>=1500001)
            printf("TOTAL TAX=%f",187500+0.30*i);

    getch();

}
