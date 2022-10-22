#include <stdio.h>
#include <stdbool.h>

typedef enum{
	Laranja=1, Maca, Melancia
}SABOR;

typedef enum{
	Bolo=1, Suco
}TIPO_EN;

typedef struct{
	SABOR sabor;
	char cobertura[1];
}BOLO;

typedef struct{
	SABOR sabor;
}SUCO;

typedef union{
	BOLO bolo;
	SUCO suco;
}TIPO;

typedef struct {
	float valor;
	TIPO tipo;
	TIPO_EN tipo_en;
}PRODUTO;

typedef struct {
	int id_pedido, qtd_produtos;
	PRODUTO produto[2];
	float valor_total;
}PEDIDOS;

void cadpedido(int *indice, PEDIDOS pedidos[][3], int *pedido_auto);
void inicializa(int *indice, int max_day_mem, PEDIDOS pedidos[][3], int max_pedidos_dia);
void valortotal(PEDIDOS pedidos[][3], int max_day_mem, int max_pedidos_dia);
void maiorpedido(PEDIDOS pedidos[][3], int max_day_mem, int max_pedidos_dia);
void pedidosdodia(PEDIDOS pedidos[][3], int max_pedidos_dia);
bool is_invalid(int valor, int min, int max);


int main(){
	int max_pedidos_dia=3, max_day_mem=7, indice[max_day_mem], opcao, pedido_auto=1;
	PEDIDOS pedidos[max_day_mem][max_pedidos_dia];
	
	inicializa(indice, max_day_mem, pedidos, max_pedidos_dia);
	
	do{
		
		do {
			printf("\n1. Register order\n");
			printf("\n2. View total amount of all purchases\n");
			printf("\n3. View largest order made\n");
			printf("\n4. View products ordered by week day\n");
			printf("\n5. Exit\n");
			scanf("%d", &opcao);
		} while(is_invalid(opcao, 1, 5));
		
		switch(opcao){
			case 1:
				cadpedido(indice, pedidos, &pedido_auto);
				break;
			case 2:
				valortotal(pedidos, max_day_mem, max_pedidos_dia);
				break;
			case 3:
				maiorpedido(pedidos, max_day_mem, max_pedidos_dia);
				break;
			case 4:
				pedidosdodia(pedidos, max_pedidos_dia);
				break;
			default:
				printf("\nInvalid Option!\n");
				break;
		}
		
	}while(opcao!=5);
	
	printf("\nEnd of execution\n");
	return 0;
}

void inicializa(int *indice, int max_day_mem, PEDIDOS pedidos[][3], int max_pedidos_dia){
	int i, j;
	
	for(i=0; i<max_day_mem; i++){
		indice[i]=0;
	}
	
	for(i=0; i<max_day_mem; i++){
		for(j=0; j<max_pedidos_dia; j++){
			pedidos[i][j].valor_total=0;
			pedidos[i][j].qtd_produtos=0;	
		}
	}
	
}

bool is_invalid(int valor, int min, int max) {
	bool invalido = valor < min || valor > max;
	if(invalido) printf("\nInvalid input\n");
	return invalido;
}

void cadpedido(int *indice, PEDIDOS pedidos[][3], int *pedido_auto){
	int opcao, dia, pedido, i, sabor, aux=*pedido_auto;
	
	do{
		printf("\nWeek Day: (1 to 7, sunday to saturday)\n");
		scanf(" %d", &dia);	
	}while(is_invalid(dia, 1, 8));
	
	if(indice[dia]==3){
		printf("\nRegister limit reached!\n");
		return;
	}
	
	pedido = indice[dia]+1;
	pedidos[dia][pedido].id_pedido=aux;
	
	indice[dia]++;
	aux++;
	*pedido_auto=aux;
	
	do{
		printf("\nOrder product amount: (1 to 2)\n");
		scanf(" %d", &pedidos[dia][pedido].qtd_produtos);	
	}while(is_invalid(pedidos[dia][pedido].qtd_produtos, 1, 2));
	
	for(i=0; i<pedidos[dia][pedido].qtd_produtos; i++){
		do{
			printf("\nProduct type: (1 - Cake, 2 - Juice)\n");
			scanf(" %d", &opcao);	
		}while(is_invalid(opcao, 1, 2));
	
	
		switch(opcao){
			case 1:
				printf("\nProduct value: (in $)\n");
				scanf(" %f", &pedidos[dia][pedido].produto[i].valor);
				pedidos[dia][pedido].produto[i].tipo_en=opcao;
				pedidos[dia][pedido].valor_total+=pedidos[dia][pedido].produto[i].valor;
				do{
					printf("\nChoose cake flavor: ( 1 - Orange, 2 - Apple )\n");
					scanf(" %d", &sabor);	
				}while(is_invalid(sabor, 1, 2));
				pedidos[dia][pedido].produto[i].tipo.bolo.sabor=sabor;
				printf("\nCover (s - for yes,n - for no)\n");
				scanf(" %c", pedidos[dia][pedido].produto[i].tipo.bolo.cobertura);
				break;
				
			case 2:
				printf("\nProduct value: (in $)\n");
				scanf(" %f", &pedidos[dia][pedido].produto[i].valor);
				pedidos[dia][pedido].produto[i].tipo_en=opcao;
				pedidos[dia][pedido].valor_total+=pedidos[dia][pedido].produto[i].valor;
				do{
					printf("\nChoose cake flavor: ( 1 - Orange, 2 - Apple, 3 - Watermelon )\n");
					scanf(" %d", &sabor);	
				}while(is_invalid(sabor, 1, 3));
				pedidos[dia][pedido].produto[i].tipo.suco.sabor=sabor;
				break;
 		}
	}
	
	printf("Order registered with success\n");
	
	
}

void valortotal(PEDIDOS pedidos[][3], int max_day_mem, int max_pedidos_dia){
	int i, j;
	float valorTotal=0;
	
	for(i=0; i<max_day_mem; i++){
		for(j=0; j<max_pedidos_dia; j++){
			valorTotal += pedidos[i][j].valor_total;
		}
	}
	
	printf("\nTotal: %.2f\n", valorTotal);
}

void maiorpedido(PEDIDOS pedidos[][3], int max_day_mem, int max_pedidos_dia){
	int i, j, id;
	float maiorValor=0;
	
	for(i=0; i<max_day_mem; i++){
		for(j=0; j<max_pedidos_dia; j++){
			if(pedidos[i][j].valor_total>=maiorValor){
				maiorValor = pedidos[i][j].valor_total;
				id = pedidos[i][j].id_pedido;
			}
		}
	}
	
	printf("\nOrder ID: %d\n", id);
	printf("\nTotal value: %.2f\n", maiorValor);
}

void pedidosdodia(PEDIDOS pedidos[][3], int max_pedidos_dia){
	int i, j, dia;
	
	do{
		printf("\nWeek Day: (1 to 7, sunday to saturday)\n");
		scanf(" %d", &dia);	
	}while(is_invalid(dia, 1, 7));
	
	for(i=0; i<=max_pedidos_dia; i++){
		if(pedidos[dia][i].id_pedido!=0){
			for(j=0; j<pedidos[dia][i].qtd_produtos; j++){
				printf("\nOrder ID: %d\n", pedidos[dia][i].id_pedido);
				printf("\nProduct type: %d\n", pedidos[dia][i].produto[j].tipo_en);
				printf("\nProduct value: %.2f\n", pedidos[dia][i].produto[j].valor);
				printf("----\n");	
			}
		}
	}
}
