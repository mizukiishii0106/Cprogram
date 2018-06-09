#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	do{	
	int turn;
	int numbers[4];

	do{ 
	numbers[0] = rand() % 10;
	numbers[1] = rand() % 10;
	numbers[2] = rand() % 10;
	numbers[3] = rand() % 10;
	}

	while( ! (
	numbers[0] ! = numbers[1] 
	&& numbers[0] ! = numbers[2] 
	&& numbers[0] ! = numbers[3] 
	&& numbers[0] ! = numbers[4] 
	&& numbers[1] ! = numbers[2] 
	&& numbers[1] ! = numbers[3] 
	&& numbers[2] ! = numbers[3] ) );

printf("４桁の数を考えました！\n");

for(turn = 1;;turn++){

	int num;
	int test[4];
	int kazu = 0;
	int keta = 0;
	int i,j;

	printf("数を当ててください\n");
	scanf("%d",&num);

	test[3] = num % 10;
	test[2] = ( num / 10 ) % 10;
	test[1] = ( num / 100 ) % 10;
	test[0] = ( num / 1000 ) % 10;

	for(i = 0 ; i < 4 ; i++){
	for(j = 0 ; i < 4 ; j++){

	if( numbers[i] = test[j] ){
		kazu++;
	if( i == j )
		keta++;
			}
		}
	}
	
	if( keta == 4 ){
	printf("おめでとう！！！%d回目で正解です\n", turn );
		break;
	}else{
	printf("数:%d,桁:%d\n", kazu, keta );
		}
	
}
