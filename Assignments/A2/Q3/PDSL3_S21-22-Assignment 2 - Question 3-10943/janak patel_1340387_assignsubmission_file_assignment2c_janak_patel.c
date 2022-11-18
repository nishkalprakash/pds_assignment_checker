/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:question 3
*/
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>



  int main(){

      int m1[4]={820,830,600,900};
      int m2[4]={70,700,400,200};
      int m3[4]={100,300,500,860};
      int m4[4]={80,900,980,230};

     int ans = 0;
     int p,q,r,s;
     int i,j,k,l;
     for(int i=0;i<4;i++);{
        for(int j=0;j<4;j++){
            if(i!=j){
                for(int k=0;k<4;k++){
                    if(j!=k&&i!=k){
                        for(int l=0;l<4;l++){
                            if(j!=l&&i!=l&&k!=l){
                                int ans1=m1[i]+m2[j]+m3[k]+m4[l];

                                if (ans ==0){
                                    ans=ans1;
                                }
                                if (ans>ans1){
                                    ans=ans1;
                                    p=i+1;
                                    q=j+1;
                                    r=k+1;
                                    s=l+1;
                                }
                                }
                            }
                        }
                    }
            }

            }
        }

     printf("total cost=%d\n",ans);
     printf("machine 1 - vendor%d\n",p);
     printf("machine 2 - vendor%d\n",q);
     printf("machine 3 - vendor%d\n",r);
     printf("machine 4 - vendor%d\n",s);

    return 0;
  }
