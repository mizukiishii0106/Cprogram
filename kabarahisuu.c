#include<stdio.h>
int main(void) {
  int a,b,c,d,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O;
  int sum,fate;

  echo "# Cprogram" >> README.md
	  git init
	  git add Cprogram
	  git commit - m "first commit"
	  git remote add origin https ://github.com/mizukiishii/Cprogram.git
  git push - u origin master

	  git remote add origin https ://github.com/mizukiishii/Cprogram.git
  git push - u origin master


printf("西暦:");
scanf("%d",&a);
printf("誕生月:");
scanf("%d",&b);
printf("誕生日:");
scanf("%d",&c);
printf("知りたい運勢(1:性格,2:仕事運,3:恋愛運,4:相性):");
scanf("%d",&d);

A=a/1000;
B=a%1000;
C=B/100;
D=B%100;
E=D/10;
F=D%10;

if(b==11){
	G=b;
	H=0;
}else{
	G=b/10;
	H=b%10;

}

if(c==11 || c==22){
	I=c;
	J=0;
}else{
	I=c/10;
	J=c%10;
}

sum=A+C+E+F+G+H+I+J;

if(sum==11 || sum==22){
	fate=sum;
}else{
	K=sum/10;
	L=sum%10;
	M=K+L;
	if(M==11){
		fate=M;
	}else{
		N=M/10;
		O=M%10;
		fate=N+O;
	}
}

if(fate==1){
	switch(d){
		case 1:
			printf("性格:意志が強く、判断力や処理能力にも優れているリーダー向きの性格です。\n");
			break;
		case 2:
			printf("仕事:独立心が旺盛なので自分がトップに立って自営する道で成功する可能性が高いでしょう。\n");
			break;
		case 3:
			printf("恋愛:情熱的で積極的なので、熱烈でドラマチックな恋をします。\n");
			break;
		case 4:
			printf("相性:運命数では「3」や「8」の人と相性がいいです。\n");
			break;
	}
}

if(fate==2){
	switch(d){
		case 1:
			printf("性格:思いやりがあり、感受性の強いロマンチストです。\n");
			break;
		case 2:
			printf("仕事:人の気持ちが理解できるのでサービス業や医療福祉に関わる職も良いでしょう。\n");
			break;
		case 3:
			printf("恋愛:献身的に尽くすタイプなので、好きな人のためなら自己犠牲もいといません。\n");
			break;
		case 4:
			printf("相性:運命数では「6」や「9」の人と相性がいいです。\n");
			break;
	}
}

if(fate==3){
	switch(d){
		case 1:
			printf("性格:人付き合いを大切にし、常に努力をし続ける秀才タイプです。\n");
			break;
		case 2:
			printf("仕事:新聞記者や運転手など変化や移動の多い仕事が向いています。\n");
			break;
		case 3:
			printf("恋愛:思いこみが激しく、恋人同士になった途端冷める可能性があります。\n");
			break;
		case 4:
			printf("相性:運命数では「1」や「8」の人と相性がいいです。\n");
			break;
	}
}

if(fate==4){
	switch(d){
		case 1:
			printf("性格:保守的で安定を好み、内気でじっくり考えてから行動にうつすタイプです。\n");
			break;
		case 2:
			printf("仕事:安定志向が強く勤勉なので公務員や大企業、特に経理などがむいています。\n");
			break;
		case 3:
			printf("恋愛:大人で落ち着いたタイプと結婚を視野に入れた恋愛をする傾向があります。\n");
			break;
		case 4:
			printf("相性:運命数では「6」や「9」の人と相性がいいです。\n");
			break;
	}
}

if(fate==5){
	switch(d){
		case 1:
			printf("性格:行動的で物事に対する反応が早く、世の中の動きに敏感なタイプです。\n");
			break;
		case 2:
			printf("仕事:アイデア豊富で、常に変化を求めるため、営業職や広告宣伝業が向いているでしょう。\n");
			break;
		case 3:
			printf("恋愛:新しいものが好きで、感情のままに動くので、次々と恋いをするタイプです。\n");
			break;
		case 4:
			printf("相性:運命数では「7」や「8」の人と相性がいいです。\n");
			break;
	}
}

if(fate==6){
	switch(d){
		case 1:
			printf("性格:美的センスに優れ、行動もスマートです。\n");
			break;
		case 2:
			printf("仕事:美的センスを活かせる職業がおすすめです。\n");
			break;
		case 3:
			printf("恋愛:初めは甘えん坊ですが、交際期間が長くなると尽くしたくなるタイプです。\n");
			break;
		case 4:
			printf("相性:運命数では「2」や「4」の人と相性がいいです。\n");
			break;
	}
}

if(fate==7){
	switch(d){
		case 1:
			printf("性格:感情をあらわにすることはなく、クールなタイプです。\n");
			break;
		case 2:
			printf("仕事:知的好奇心が活かせる研究職がむいています。\n");
			break;
		case 3:
			printf("恋愛:自分のことを理解してくれる相手を求めます。\n");
			break;
		case 4:
			printf("相性:運命数では「3」や「8」の人と相性がいいです。\n");
			break;
	}
}

if(fate==8){
	switch(d){
		case 1:
			printf("性格:自分の信じる道を突き進む情熱的なタイプです。\n");
			break;
		case 2:
			printf("仕事:競争し、ライバルとしのぎを削る報道関係が向いています。\n");
			break;
		case 3:
			printf("恋愛:相手の気持ちを考えず、後で相性の不一致に気づくでしょう。\n");
			break;
		case 4:
			printf("相性:運命数では「1」や「3」の人と相性がいいです。\n");
			break;
	}
}

if(fate==9){
	switch(d){
		case 1:
			printf("性格:理想を信じる心のきれいな聖人タイプです。\n");
			break;
		case 2:
			printf("仕事:癒しに関わるセラピストや医療の仕事が向いています。\n");
			break;
		case 3:
			printf("恋愛:自分が幸せになるかどうかで選んでよいでしょう。\n");
			break;
		case 4:
			printf("相性:運命数では「2」や「4」の人と相性がいいです。\n");
			break;
	}
}

if(fate==11){
	switch(d){
		case 1:
			printf("性格:いつも夢を追いかけているタイプです。\n");
			break;
		case 2:
			printf("仕事:流行に敏感なのでファッション業界がむいています。\n");
			break;
		case 3:
			printf("恋愛:気まぐれで、相手に尽くしたと思うとわがままになります。\n");
			break;
		case 4:
			printf("相性:運命数では「2」や「7」の人と相性がいいです。\n");
			break;
	}
}

if(fate==22){
	switch(d){
		case 1:
			printf("性格:抜群のバランス感覚を持っているカリスマタイプです。\n");
			break;
		case 2:
			printf("仕事:上に立ちたがりなので、攻めの姿勢を貫けるところが向いています。\n");
			break;
		case 3:
			printf("恋愛:好き嫌いが激しい面もありますが、一度好きになると寛容です。\n");
			break;
		case 4:
			printf("相性:運命数では「4」や「5」の人と相性がいいです。\n");
			break;
	}
}
    
    

return 0;
} 
