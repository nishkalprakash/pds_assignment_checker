#include <stdio.h>
int main(){
    int a,b,c,d,e;

    //int maxo=0;// to store the maximum value among the three odd numbers
    //int maxe=0;// to store the maximum value among the three even numbers
    int p=-1, q=-1, r=-1;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    int sum= ((a%2)+(b%2)+(c%2)+(d%2)+(e%2));

    if(sum==3){//odd
            if(a%2==1){
                if(p==-1)
                    p=a;
                else if(q==-1)
                    q=a;
                else if(r==-1)
                    r=a;
            }
            if(b%2==1){
                if(p==-1)
                    p=b;
                else if(q==-1)
                    q=b;
                else if(r==-1)
                    r=b;
            }
            if(c%2==1){
                if(p==-1)
                    p=c;
                else if(q==-1)
                    q=c;
                else if(r==-1)
                    r=c;
            }
            if(d%2==1){
                if(p==-1)
                    p=d;
                else if(q==-1)
                    q=d;
                else if(r==-1)
                    r=d;
            }
            if(e%2==1){
                if(p==-1)
                    p=e;
                else if(q==-1)
                    q=e;
                else if(r==-1)
                    r=e;
            }

            printf("Smallest three odd numbers:\n");
            if(p>q && p>r){ //p

                if(q>r)
                    printf("%d, %d, %d\n",r, q, p);
                else
                    printf("%d, %d, %d\n", q, r, p);
            }
            if(q>p && q>r){ //q

                if(r>p)
                    printf("%d, %d, %d\n",p, r, q);
                    else
                        printf("%d, %d, %d\n",r, p, q);
            }
            if(r>p && r>q){ //r

                if(p>q)
                    printf("%d, %d, %d\n",q, p, r);
                    else
                        printf("%d, %d, %d\n",p, q, r);
            }


        }
        //sum==3 closed

        else{//sum=2
             /*       if(a%2==0){
                if(p==-1)
                    p=a;
                else if(q==-1)
                    q=a;
                else if(r==-1)
                    r=a;
            }
            if(b%2==0){
                if(p==-1)
                    p=b;
                else if(q==-1)
                    q=b;
                else if(r==-1)
                    r=b;
            }
            if(c%2==0){
                if(p==-1)
                    p=c;
                else if(q==-1)
                    q=c;
                else if(r==-1)
                    r=c;
            }
            if(d%2==0){
                if(p==-1)
                    p=d;
                else if(q==-1)
                    q=d;
                else if(r==-1)
                    r=d;
            }
            if(e%2==0){
                if(p==-1)
                    p=e;
                else if(q==-1)
                    q=e;
                else if(r==-1)
                    r=e;
            }
            //max
            printf("Largest number:\n");
            if(p>q && p>r) printf("%d\n",p);
            if(q>p && q>r) printf("%d\n",q);
            if(r>p && r>q) printf("%d\n",r);
            */
            int max=a;
            if(b>max) max=b;
            if(c>max) max=c;
            if(d>max) max=d;
            if(e>max) max=e;
            printf("Largest number:%d\n", max);




    }//sum=2 closed

    return 0;




}
