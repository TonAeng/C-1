#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <iostream>
#include <conio.h>
struct data{
	int w;
	int wr;
	int l;
	int ll;
	int lr;
	int t;
	int tr;
	int Total;
	int ww;
	char player;
	char computer;		
};
char playershape() {
	char shape;
	printf("[r]rock, [p]paper, [s]scissors, [q]quit: ");
	scanf(" %c", &shape);
	return tolower(shape);
}

char computershape() {
    char s[] = {'r', 'p', 's'};
    return s[rand() % 3];
		
}
int main(){
	srand(time(NULL));
	char sum[3][10]={"you win","you lose","tie"};
	int i[100],j,Totall,pointer;
	
	struct data number;
	number.computer;
	number.player;
	number.l=0;
	number.ll;
	number.lr;
	number.t=0;
	number.Total=0;
	number.tr;
	number.w=0;
	number.wr;
	number.ww;

	number.player = playershape();
	while(number.player != 'q'){
		number.computer = computershape();
		printf("player = %c, computer = %c ",number.player,number.computer);
		if(number.player == number.computer){
			printf("\n------------------------------------------\n");
			printf("    Competition results\n\t!!%s.!!\n",sum[2]);
			number.t=number.t+1;
			number.ww=0;
			number.ll=0;
			i[j]=2;
			j++;
		}else{
			if (number.player == 'r' && number.computer == 's') {
				printf("\n------------------------------------------\n");
       			 printf("    Competition results\n\t!! %s.!!\n",sum[0]);
       			 number.w=number.w+1;
       			 number.ww=number.ww+1;
       			 number.ll=0;
       			 i[j]=0;
       			 j++;
		   		 } else if (number.player == 'p' && number.computer == 'r') {
		   		 	printf("\n------------------------------------------\n");
   			     printf("    Competition results\n\t!! %s.!!\n",sum[0]);
   			     number.w=number.w+1;
   			     number.ww=number.ww+1;
   			     number.ll=0;
   			     i[j]=0;
       			 j++;
 			     } else if (number.player == 's' && number.computer == 'p') {
 			     	printf("\n------------------------------------------\n");
       			 printf("    Competition results\n\t!! %s.!!\n",sum[0]);
       			 number.w=number.w+1;
       			 number.ww=number.ww+1;
       			 number.ll=0;
       			 i[j]=0;
       			 j++;
			   	}else{
			   		
			   		printf("\n------------------------------------------\n");
				printf("    Competition results\n\t!! %s.!!\n",sum[1]);
				number.l=number.l+1;
				number.ll=number.ll+1;
				number.ww=0;
				i[j]=1;
       			j++;
			}
		}
		number.Total=number.Total+1;
		number.wr=number.w*100/number.Total;
		number.lr=number.l*100/number.Total;
		number.tr=number.t*100/number.Total;
		printf("------------------------------------------\n");
		printf("\tConclusion\n");
		printf(" win :%d \t win rate:%d/100 \n",number.w,number.wr);
		printf(" lose :%d \t lose rate:%d/100 \n",number.l,number.lr);
		printf(" tie :%d \t tie rate:%d/100 \n",number.t,number.tr);
		printf("------------------------------------------\n"); 
		printf("Total of games:");
		printf("%d\n",number.Total);
		printf("------------------------------------------\n"); 
		getch();
		system("cls");
		if(number.ww==5){
			printf("Today you are lucky.");
			getch();
			system("cls");
		}
		if(number.ll==5){
			printf("Today you are unlucky");
			getch();
		    system("cls");
		}
		if(number.Total==10){
			printf("I know you are free");
			getch();
			system("cls");
		}
		number.player = playershape();
		
	}
	Totall=number.Total;
	for(j=0;j<Totall;j++){
		i[j];		
		pointer=i[j];
		printf("\n[%d]%s\n",j+1,sum[pointer]);
	}
}
