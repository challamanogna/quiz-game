#include<stdio.h>
    int score(int gain,int loose){
   	int correct;
	if(correct=1){
		gain=5;
		printf("you scored '5' points\n");
	}
	else {
		loose=0;
		printf("you scored '0' points\n");
	} return score;}
	int main(){
	printf("WELCOME TO QUIZ GAME\n");
	int A,B,C,D; int g,l;
	int correct;
	printf("enter to start the game\n");
	int i;
	scanf("enter your choice %d",&i);
	if(i==1){
				printf("let`s start the game!\n");
		printf("1) Which company developed the android operating system\n");
		printf("1) Microsoft\n");
		printf("2) Apple\n");
		printf("3) Google\n");
		printf("4) IBM\n");
		printf("enter your choice:\n");
		scanf("%d",&A);
		if(A==3){
			correct=1;
			printf("correct answer!\n");
			score(g,l);
		}
		else{ 
			printf("wrong answer!Better luck next time\n");
			
		}
		printf("2) Which of the following is not a programming language\n");
		printf("1) Python\n");
		printf("2) Java\n");
		printf("3) HTML\n");
		printf("4) Windows\n");
		printf("enter your choice:\n");
		scanf("%d",&B);
		if(B==4){
			correct=1;
			printf("correct answer!\n");
			score(g,l);
		}
		else{ 
			printf("wrong answer!Better luck next time\n");
				
		}
		printf("3) Which of the following is used for data analysis and visualization\n");
		printf("1) Adobe photoshop\n");
		printf("2) Microsoft Excel\n");
		printf("3) Visual studio\n");
		printf("4) corelDRAW\n");
		printf("enter your choice:\n");
		scanf("%d",&C);
		if(C==4){
			correct=1;
			printf("correct answer!\n");
			score(g,l);
		}
		else{ 
			printf("wrong answer!Better luck next time\n");
				
		}
		printf("4) Which one of these is a cybersecurity threat\n");
		printf("1) Firewall\n");
		printf("2) Antivirus\n");
		printf("3) Phishing\n");
		printf("4) cloud computing\n");
			printf("enter your choice:\n");
		scanf("%d",&D);
		if(D==4){
			correct=1;
			printf("correct answer!\n");
			score(g,l);
		}
		else{ 
			printf("wrong answer!Better luck next time\n");		
		}
	 } 	
	 
	
}