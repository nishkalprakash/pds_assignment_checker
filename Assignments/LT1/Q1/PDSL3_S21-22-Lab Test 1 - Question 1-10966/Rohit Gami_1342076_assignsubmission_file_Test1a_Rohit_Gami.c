int main()
{
    int sal,anual_income,Hsloan=0,l=0,m=0,tax;
    printf("Enter your monthly salary\n");
    scanf("%d",&sal);
    anual_income=sal*12;
    printf("Enter your yearly house loan paid(if there is any)\n");
    scanf("%d",&Hsloan);
    printf("Enter your yearly life insurance premium paid (if there is any)\n");
    scanf("%d",&l);
    printf("Enter your yearly medical insurance paid (if there is any)\n");
    scanf("%d",&m);
    if(anual_income>=0&&anual_income<=250000)printf("Tax=Nil");
    else if(anual_income>=250001&&anual_income<=500000)
    {
        tax=(anual_income-Hsloan-l-m)*0.05;
        printf("Income Tax=%d",tax);
    }
    else if(anual_income>=500001&&anual_income<=750000)
      {
        tax=(anual_income-Hsloan-l-m-500000)*0.1+12500;
        printf("Income Tax=%d",tax);
    }
    else if(anual_income>=750001&&anual_income<=1000000)
      {
        tax=(anual_income-Hsloan-l-m-750000)*0.15+37500;
        printf("Income Tax=%d",tax);
    }
    else if(anual_income>=1000001&&anual_income<=1250000)
      {
        tax=(anual_income-Hsloan-l-m-1000000)*0.2+75000;
        printf("Income Tax=%d",tax);
    }
    else if(anual_income>=1250001&&anual_income<=1500000)
      {
        tax=(anual_income-Hsloan-l-m-1250000)*0.25+125000;
        printf("Income Tax=%d",tax);
    }
    else
      {
        tax=(anual_income-Hsloan-l-m-1500000)*0.3+187500;
        printf("Income Tax=%d",tax);
    }
    return 0;
}
