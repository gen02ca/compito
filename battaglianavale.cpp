#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 8
main()
{ srand(time(NULL));
	int n,i,j,c=0,navi=0;
	
	char m[N][N];
	for(i=0;i<N;i++){		        	//rimpimento
		 for(j=0;j<N;j++){
			 if((i==0) || (i==N-1))
			 	m[i][j]='-';
			 else if((j==0) || (j==N-1))
			 	m[i][j]='|';
			 else
				m[i][j]=126;
		}
	}
	
	while(navi<N-1){	//mette le navi
		i=rand()%N;
		j=rand()%N;
		
		if(m[i][j]!=30){
			m[i][j]=30;
			navi++;
		}
	}
	//m[2][4]=30;
	//m[1][2]=30;			
	//m[3][3]=30;
	
	for(i=0;i<N;i++){	//stampa
		printf("\n");
		for(j=0;j<N;j++)					
			printf(" %c ",m[i][j]);
	}
	
	while(c<5){ 	//colpisci
		printf("\ninserisci la riga:\n");
		scanf("%d",&i);
		printf("inserisci la colonna:\n");
		scanf("%d",&j);
		if(m[i][j]==30)
			printf( " \naffondata\n");
		else
			printf( " \nacqua\n");
		c++;
	}
}
