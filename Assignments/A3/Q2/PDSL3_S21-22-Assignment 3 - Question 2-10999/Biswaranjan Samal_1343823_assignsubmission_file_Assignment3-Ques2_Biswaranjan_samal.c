/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:3,Question 2
*/




#include <stdio.h>


int main(){
char sequence1[1000],sequence2[1000];
printf("Enter Sequence 1:");
scanf("%s",sequence1);
printf("Enter Sequence 2:");
scanf("%s",sequence2);
int len1 = 0,len2 = 0;
int i,j,k,l;
for(len1 = 0;sequence1[len1] != '\0';len1++);
for(len2 = 0;sequence2[len2] != '\0';len2++);

int dash = len1 - len2;
	//	len1 > len2
if(len1 >= len2)
    {
    int score,minScore,pos1,pos2;
    if(dash == 2){
    score = 0,minScore = 100000;
    for(i = 0;i < len1-1;i++){
              for(j = i+1;j < len1;j++){
					score = 0;
					for(k = 0,l = 0;k < len1 && l < len2;k++,l++){
						if(k == i || k == j){
							l--;
							continue;
						}
						if(sequence1[k] != sequence2[l])
							score++;
					}
					if(minScore > score){

						minScore = score;
						pos1 = i;
						pos2 = j;
					}
				}
			}
			minScore += 2*dash;
			printf("\nSequence 2: Position 1:%d\tPosition 2:%d\tScore:%d\n",pos1,pos2,minScore);
		}
    else if(dash == 1)
        {
        score = 0,minScore = 100000;
        for(i = 0;i < len1;i++){
        score = 0;
        for(k = 0,l = 0;k < len1 && l < len2;k++,l++){
        if(k == i){
                    l--;
                    continue;
                 }

        if(sequence1[k] != sequence2[l])
						score++;
				}
				if(minScore > score){

					minScore = score;
					pos1 = i;
				}
			}
			minScore += 2*dash;
			printf("\nSequence 2: Position 1:%d\tScore:%d\n",pos1,minScore);
		} else {
			for(k = 0,l = 0;k < len1 && l < len2;k++,l++){
				if(sequence1[k] != sequence2[l])
					score++;
			}
			if(minScore > score)
				minScore = score;
			printf("\nScore:%d\n",minScore);
		}
	} else {
		dash *= -1;
		int score,minScore,pos1,pos2;
		if(dash == 2){
			score = 0,minScore = 100000;
			for(i = 0;i < len2-1;i++){
				for(j = i+1;j < len2;j++){
					score = 0;
					for(k = 0,l = 0;k < len2 && l < len1;k++,l++){
						if(k == i || k == j)
                            {
							l--;
							continue;
						}
						if(sequence2[k] != sequence1[l])
							score++;
					}
					if(minScore > score)
                        {

						minScore = score;
						pos1 = i;
						pos2 = j;
					}
				}
			}
			minScore += 2*dash;
			printf("\nSequence 1: Position 1:%d\tPosition 2:%d\tScore:%d\n",pos1,pos2,minScore);
		}
		else
		{
			score = 0,minScore = 100000;
			for(i = 0;i < len2;i++)
                {
				score = 0;
				for(k = 0,l = 0;k < len2 && l < len1;k++,l++)
                    {
					if(k == i)
					{
                     l--;
                     continue;
					}
					if(sequence2[k] != sequence1[l])
						score++;
            }
            if(minScore > score)
                {
                minScore = score;
                pos1 = i;
                }
            }
    minScore += 2*dash;
    printf("\nSequence 1: Position 1:%d\tScore:%d\n",pos1,minScore);
            }
            }
    }
