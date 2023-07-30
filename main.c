#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define true  1
#define false 0
#define b 254


int main()
 {
 	
	int satir=0, sutun=0, toprak=0;
	int score=0;
	int i,j;
	printf("MAYIN TARLASININ BOYUTUNU GIRINIZ:(orn:5 10):");
	scanf("%d",&satir);
	scanf("%d",&sutun);
	int tarla[satir][sutun];
	int t[satir][sutun];//t tarlasi oyuncuya gösterilecek hali
	//rastgele tarlayi olustuR
	for (i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		
			tarla[i][j]=rand()%2;
			t[i][j]=5;
		if(tarla[i][j]==0){
			toprak++;
		}
		}

		}
	
	
	//test amacli mayinlar
/*	printf("kontrol amacli tarla\n");
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%2d",tarla[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//oyun baslasin
	
*/
	while(1){
		
		for(i=0;i<satir*satir;i++){
			printf("%c ",b);
		}
		printf("\n");
	

		for( i=0;i<satir;i++){
			
			printf("%c",b);
			for(j=0;j<sutun;j++){
				
				printf("%2d ",t[i][j]);
			}
			printf("\n");
		}
		for(i=satir*satir;i>0;i--){
		
		printf("%c ",b);
	}
	for(i=satir*satir;i>0;){
		if(i=1){
			for(j=0;j<sutun;j++){
				printf("%c ",b);
			}
		}
		i--;
	}
		printf("INDEXLERI GIRINIZ:");
		
		scanf("%d",&i);
		scanf("%d",&j);
		
		if(i>=0 && j>=0 && i<satir && j<sutun){
			if(t[i][j]==5 && tarla[i][j]==0){
				
				t[i][j]=tarla[i][j];
				toprak--;
				score++;
				if(toprak==0){
				
					printf("BUTUN MAYINLARI BULDUNUZ!!!\n");
						printf("SCORE:%d",score);
					return 0;
			}
		}
		else if(t[i][j]==5 && tarla[i][j]==1){
			printf("MAYINA BASTINIZ!!!\n");
				printf("SCORE:%d",score);
			return 0;	
				}
			
	
	else { 
			printf("DAHA ONCE ACTIGINIZ YERI ACMAYA CALISTINIZ!!!");
		
		}
		
	}
else {
	printf("GECERSIZ INDEX GIRDINIZ!!!");
	
	
}
}
printf("\nSCORE:",score);
return 0;
}



