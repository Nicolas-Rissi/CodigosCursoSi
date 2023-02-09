#include "stdio.h"
/*
Dada a matriz matF= {{1,5,6,4,8},{2,8,5,3,6},{7,1,3,5,0},{1,6,4,9,2}}. 
Calcule individualmente a média dos elementos do triângulo superior, do inferior e da diagonal principal. 
Exiba a matriz, as três médias e indique qual a maior das 3 somas.
*/
int main()
{
	int nic_i, nic_j, nic_qtd_princ=0, nic_qtd_sup=0, nic_qtd_inf=0, nic_soma_princ=0, nic_soma_sup=0, nic_soma_inf=0;
	float nic_media_princ=0, nic_media_inf=0, nic_media_sup=0;
	int nic_matF[5][5]= {{1,5,6,4,8},{2,8,5,3,6},{7,1,3,5,0},{1,6,4,9,2},{1,2,3,4,5}};
	for(nic_i=0;nic_i<5;nic_i++){//calcula e salva as medias da matriz
		for(nic_j=0;nic_j<5;nic_j++){
			if(nic_i==nic_j){//diagonal principal
				nic_soma_princ = nic_soma_princ + nic_matF[nic_i][nic_j];
				nic_qtd_princ++;	
			}
			else if(nic_i>nic_j){//triângulo inferior
				nic_soma_inf = nic_soma_inf + nic_matF[nic_i][nic_j];
				nic_qtd_inf++;
			}
			else{//triangulo superior
				nic_soma_sup = nic_soma_sup + nic_matF[nic_i][nic_j];
				nic_qtd_sup++;
			}
		}
	}
	printf("Esta eh a matriz.\n\n");
	for(nic_i=0;nic_i<5;nic_i++){//exibe a matriz
		for(nic_j=0;nic_j<5;nic_j++){
			printf("%d\t",nic_matF[nic_i][nic_j]);
		}
		printf("\n");
	}
	nic_media_princ =(float) nic_soma_princ/ nic_qtd_princ;
	nic_media_inf =(float) nic_soma_inf/ nic_qtd_inf;
	nic_media_sup =(float) nic_soma_sup/ nic_qtd_sup;
	printf("\nAs media da diagonal principal eh %.2f, a media do triangulo inferior eh %.2f e a media do triangulo superior eh %.2f",nic_media_princ, nic_media_inf, nic_media_sup);
	int nic_maior;
	if(nic_soma_princ>nic_soma_inf and nic_soma_princ>nic_soma_sup){
		printf("\nA maior soma eh a diagonal principal com valor %i",nic_soma_princ);
	}
	else if(nic_soma_inf>nic_soma_princ and nic_soma_inf>nic_soma_sup){
		printf("\nA maior soma eh o triangulo inferior com valor %i",nic_soma_inf);
	}
	else{
		printf("\nA maior soma eh o triangulo superior com valor %i",nic_soma_sup);
	}
	return 0;
}
