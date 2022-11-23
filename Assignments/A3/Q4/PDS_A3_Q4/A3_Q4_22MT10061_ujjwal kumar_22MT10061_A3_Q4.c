#include<stdio.h>
  int main()
{
   float total_elec_units ;
   float total_price;
    scanf("%f",&total_elec_units);
     if(total_elec_units<=100) 
       {printf("Rs.50.0");}
     else if (total_elec_units>100&&total_elec_units<=200) 
       {total_price=((total_elec_units-100)*0.75+50)*1.2 ;//for additional 20% multiply by 1.2
       printf("Rs. %f",total_price);}
     else if (total_elec_units>200&&total_elec_units<=300)
      { total_price=((total_elec_units-200)*1.20+125)*1.2 ;//here 50+.75*100
       printf("Rs. %f",total_price);}
       

     else if (total_elec_units>300)
       { total_price=((total_elec_units-300)*1.50+245)*1.2 ;//here 50 +.75*100+1.2*100
       printf("Rs. %f",total_price);}
       
   return 0;
}
