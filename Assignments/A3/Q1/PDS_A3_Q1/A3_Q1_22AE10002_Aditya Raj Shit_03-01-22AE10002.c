#include<stdio.h>

void main(){
    int a,b,c,d,e;
    printf("Enter five non zero numbers: ");
//Tanking input from user.
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int even=0,odd=0;

    int Enum1=0,Enum2=0,Enum3=0;
    int Onum1=0,Onum2=0,Onum3=0;

    if(a%2==0){
        even++;
        if(Enum1==0){
            Enum1=a;
        }
        else if(Enum2==0){
            Enum2=a;
        }
        else if(Enum3==0){
            Enum3=a;
        }
    }
    else{
        odd++;
        if(Onum1==0){
            Onum1=a;
        }
        else if(Onum2==0){
            Onum2=a;
        }
        else if(Onum3==0){
            Onum3=a;
        }
    }


    if(b%2==0){
        even++;
        if(Enum1==0){
            Enum1=b;
        }
        else if(Enum2==0){
            Enum2=b;
        }
        else if(Enum3==0){
            Enum3=b;
        }
    }
    else{
        odd++;
        if(Onum1==0){
            Onum1=b;
        }
        else if(Onum2==0){
            Onum2=b;
        }
        else if(Onum3==0){
            Onum3=b;
        }
    }


    if(c%2==0){
        even++;
        if(Enum1==0){
            Enum1=c;
        }
        else if(Enum2==0){
            Enum2=c;
        }
        else if(Enum3==0){
            Enum3=c;
        }
    }
    else{
        odd++;
        if(Onum1==0){
            Onum1=c;
        }
        else if(Onum2==0){
            Onum2=c;
        }
        else if(Onum3==0){
            Onum3=c;
        }
    }


    if(d%2==0){
        even++;
        if(Enum1==0){
            Enum1=d;
        }
        else if(Enum2==0){
            Enum2=d;
        }
        else if(Enum3==0){
            Enum3=d;
        }
    }
    else{
        odd++;
        if(Onum1==0){
            Onum1=d;
        }
        else if(Onum2==0){
            Onum2=d;
        }
        else if(Onum3==0){
            Onum3=d;
        }
    }



    if(e%2==0){
        even++;
        if(Enum1==0){
            Enum1=e;
        }
        else if(Enum2==0){
            Enum2=e;
        }
        else if(Enum3==0){
            Enum3=e;
        }
    }
    else{
        odd++;
        if(Onum1==0){
            Onum1=e;
        }
        else if(Onum2==0){
            Onum2=e;
        }
        else if(Onum3==0){
            Onum3=e;
        }
    }

    //printf("%d%d%d",Enum1,Enum2,Enum3);
   // printf("%d%d%d",Onum1,Onum2,Onum3);




//moving on to part (b)

if(odd==3){
    int max=0,smax=0,tmax=0;
    if(Onum1>max){                      //checking for first odd number.
        tmax=smax;
        smax=max;
        max=Onum1;
    }
    else if(Onum1<max && Onum1>smax){
        tmax=smax;
        smax=Onum1;
    }
    else{
        tmax=Onum1;
    }

    if(Onum2>max){                      //checking for second odd number.
        tmax=smax;
        smax=max;
        max=Onum2;
    }
    else if(Onum2<max && Onum2>smax){
        tmax=smax;
        smax=Onum2;
    }
    else{
        tmax=Onum2;
    }

    if(Onum3>max){                  //checking for third odd number.
        tmax=smax;
        smax=max;
        max=Onum3;
    }
    else if(Onum3<max && Onum3>smax){
        tmax=smax;
        smax=Onum3;
    }
    else{
        tmax=Onum3;
    }

    printf("Smallest three odd numbers:\n ")   ;
    printf("%d %d %d",tmax,smax,max);
}

if(even==3){
    int max=0;
    if(Enum1>=Enum2 && Enum1>=Enum3){
        max=Enum1;
    }

    else if(Enum2>=Enum1 && Enum2>=Enum3){
        max=Enum2;
    }
    else{
        max=Enum3;
    }

    printf("Largest number:\n %d",max);

}
/*
    if(a%2==2           //checking first number.
        even+=1;
    else
        odd+=1;


    if(a%2==2)          //checking second number.
        even+=1;
    else
        odd+=1;


    if(a%2==2)          //checking third number.
        even+=1;
    else
        odd+=1;


    if(a%2==2)          //checking fourth number.
        even+=1;
    else
        odd+=1;


    if(a%2==2 && )      //checking fifth number.
        even+=1;
    else
        odd+=1;


   //Moving ahead to part (b)
 */

}
