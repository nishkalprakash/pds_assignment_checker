/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Visual Studio Code
   OS			: MS Windows 11
   */

  #include<stdio.h>
  #include<time.h>
  #include<stdlib.h>

  int main(void){
      srand(time(0));
      
      int numA, numB, n,i,pA,pB,bA,bB,dA,dB,totA,totB,numA_,numB_;
      totA = 0; totB = 0;
      pA = pB = bA = bB = dA = dB = 0;
      printf("Number of rounds: ");
      scanf("%d", &n);

      for(i = 1; i <= n; i++){
          bA = bB = 0;
          numA = (rand() % (1000 - 5 + 1)) + 5;
          numB = (rand() % (1000 - 5 + 1)) + 5;
          numA_ = numA; numB_ = numB; //storing the numbers
          //calculating no. of digits and points in case digits are same
          while(numA !=0){
              pA = pA + numA % 10;
              numA = numA/10;
              dA++;
          }
          while(numB != 0){
              pB = pB + numB % 10;
              numB = numB/10;
              dB++;
          }
          //setting winner if no. of digits are same
          if(dA == dB){
             if(pA > pB){
                bA = 1;
             }else if(pB > pA){
                 bB = 1;
             }else{
                 //randomly selecting a winner
                  bA = rand() % 2;
                  if (bA){
                     bB = 0;
                 }
             }
          }
          //In case digits are not same
          else if(dA > dB){
              bA = 1;
              pA = dA;
              pB = dB;
          }
          else{
              bB = 1;
              pB = dB;
              pA = dA;
          }
          //output
          printf("\nRound %d\n",i);
          printf("\nA's number:%d     B's number:%d",numA_,numB_);
          printf("\nA's point :%d     B's point :%d",pA,pB);
          printf("\nA's badge :%d     B's badge :%d",bA,bB);
          if(bA){
              printf("\n\nA is wins round %d",i);
          }
          else{
              printf("\n\nB is wins round %d",i);
          }
          totA = totA + pA;
          totB = totB + pB;
        }  

        printf("\n\nFINAL RESULT => A's total score: %d, B's total score: %d",totA,totB);
        if (totA > totB){
            printf("\n\nA wins the game");
        }
        else if(totB > totA){
            printf("\n\nB wins the game");
        }
        else{
            printf("\n\nIts a draw");
        }
        return 0;
  }