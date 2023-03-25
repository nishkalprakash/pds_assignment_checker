#include <stdio.h>
int main()   //main function
{
    int a,b,c,d,e,ceven=0,codd=0,lar,n1=0,n2=0,n3=0,n4=0,n5=0,temp1,temp2,temp3,max,mid,min;  //declaring variables
    printf("Enter 5 integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e); //scanning the numbers
    if(a%2==0)   //counting number of even and odd numbers
        ceven++;
    else
        codd++;
    if(b%2==0)
        ceven++;
    else
        codd++;
        if(c%2==0)
        ceven++;
    else
        codd++;
        if(d%2==0)
        ceven++;
    else
        codd++;
        if(e%2==0)
        ceven++;
    else
        codd++;
        if(ceven>=3)   //checks for the largest input number
        {
           if(a>b && a>c && a>d && a>e)
            lar=a;
           if(b>a && b>c && b>d && b>e)
            lar=b;
           if(c>a && c>b && c>d && c>e)
            lar=c;
           if(d>a && d>b && d>c && d>e)
            lar=d;
           if(e>a && e>b && e>c && e>d)
            lar=e;
           printf("Largest number:%d",lar);
        }
        if(codd>=3)  //stores the 3 odd numbers and the rest 2 store 0
        {
          if(a%2!=0)
            n1=a;
          if(b%2!=0)
            n2=b;
          if(c%2!=0)
            n3=c;
          if(d%2!=0)
            n4=d;
          if(e%2!=0)
            n5=e;
           if(n1!=0 && n2!=0 && n3!=0)
           {
               temp1=n1;temp2=n2;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3); //maximum
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);  //minimum
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3); //middle
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n1!=0 && n2!=0 && n4!=0)
           {
               temp1=n1;temp2=n2;temp3=n4;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n1!=0 && n2!=0 && n5!=0)
           {
               temp1=n1;temp2=n2;temp3=n5;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
              printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n1!=0 && n4!=0 && n3!=0)
           {
               temp1=n1;temp2=n4;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n1!=0 && n5!=0 && n3!=0)
           {
               temp1=n1;temp2=n5;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n1!=0 && n4!=0 && n5!=0)
           {
               temp1=n1;temp2=n4;temp3=n5;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
              printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n4!=0 && n2!=0 && n3!=0)
           {
               temp1=n4;temp2=n2;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
              printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n5!=0 && n2!=0 && n3!=0)
           {
               temp1=n5;temp2=n2;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n5!=0 && n2!=0 && n4!=0)
           {
               temp1=n4;temp2=n2;temp3=n5;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }
           if(n5!=0 && n4!=0 && n3!=0)
           {
               temp1=n5;temp2=n4;temp3=n3;
               max=(temp1>temp2)?((temp1>temp3)?temp1:temp3):((temp2>temp3)?temp2:temp3);
               min=(temp1<temp2)?((temp1<temp3)?temp1:temp3):((temp2<temp3)?temp2:temp3);
               mid= (temp1!=max && temp1!=min)?temp1:((temp2!=min && temp2!=max)?temp2:temp3);
               printf("Smallest 3 odd numbers:%d,%d,%d",min,mid,max);
           }

        }
        return 0; //end


}
