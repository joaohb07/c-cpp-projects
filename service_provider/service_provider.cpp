#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cod;
    char descricao[20];
} ServicoDefinido;

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    int codigoServico;
    int numServico;
    float valorServico;
    int codCliente;
} ServicoPrestado; // Define o nome do novo tipo criado

ServicoPrestado matriz[30][3];
int contadorServicos=0;
ServicoDefinido servicosDefinidos[4];


void populandoServicos(){
    for (int i =0; i<4; i++){
        servicosDefinidos[i].cod=-1;
    }
}
void populandoMatrizes(){
    for (int i=0;i<30;i++){
        matriz[i][0].codCliente=-1;
        matriz[i][1].codCliente=-1;
        matriz[i][2].codCliente=-1;
    }
}
void cadastro(){
    int codigo;
    char descricao[20];
    int verificaExistencia = 0;
    printf("\nType the code of your service (top=4)\n");
    scanf("%d", &codigo);
    if(contadorServicos==4){
        printf("\nResgiter Service storage is full!\n");
        return;
    }else{
        for(int i = 0; i<4; i++){
        if(servicosDefinidos[i].cod==codigo){
            printf("\nThere is already a service registered with this code!\n");
            verificaExistencia = 1;
            break;
        }
      }
    }
    if(verificaExistencia!=1){
        printf("\nService description:\n");
        scanf(" %[^\n]", descricao);
        servicosDefinidos[contadorServicos].cod=codigo;
        strcpy (servicosDefinidos[contadorServicos].descricao,descricao);
        printf("\nService type registered with success\n");
        contadorServicos++;
    }
    return;
}
void opcao2(){
    int dia;
    int contadorMatriz=0;
    printf("\nType the date(1 to 7)\n");
    scanf("%d", &dia);
    for(int i = 0; i<3; i++){
        if(matriz[dia-1][i].codCliente!=-1){
            contadorMatriz++;
        }
    }
    if(contadorMatriz==3){
        printf("All services that happened this day are registered!\n");
    }else{
        int cod;
        printf("\nType service code:\n");
        scanf("%d", &cod);
        int verifica = 0;
        for (int i = 0; i<4; i++){
            if(servicosDefinidos[i].cod==cod){
                verifica=1;
                break;
            }
        }
        if(verifica==0){
            printf("Invalid service code!\n");
        }else{
            for(int i = 0; i<3; i++){
                if(matriz[dia-1][i].codCliente==-1){
                    int num,codCliente;
                    float valor;
                    printf("\nService number:\n");
                    scanf("%d",&num);
                    printf("\nService value:\n");
                    scanf("%f", &valor);
                    printf("\nClient code:\n");
                    scanf("%d",&codCliente);
                    matriz[dia-1][i].codCliente=codCliente;
                    matriz[dia-1][i].numServico=num;
                    matriz[dia-1][i].valorServico=valor;
                    matriz[dia-1][i].codigoServico=cod;
                    printf("Service registered with success\n");
                    break;
                }
            }
        }
    }
    return;
}
void opcao3(){
    printf("\nType the date(1 to 7)\n");
    int dia;
    scanf("%d", &dia);
    int contadorServicosNaoPrestados=0;
    for(int i =0; i<3; i++){
        if(matriz[dia-1][i].codCliente!=-1){
            printf("\nService code %d | Day %d | Value %.2f\n",matriz[dia-1][i].codigoServico,matriz[dia-1][i].numServico,matriz[dia-1][i].valorServico);
            contadorServicosNaoPrestados=1;
        }
    }
    if(contadorServicosNaoPrestados==0){
        printf("\nNo services registered this day\n");
    }
    return;
}
void opcao4(){
    float valorMinimo,valorMaximo;
    printf("\nType the minimum value of the interval ( in $ )\n");
    scanf("%f",&valorMinimo);
    printf("\nType the maximum value of the interval ( in $ )\n");
    scanf("%f",&valorMaximo);
    int contadoresValor=0;
    for(int i = 0; i<30; i++){
        for(int ii =0; ii<3; ii++){
            if(matriz[i][ii].codCliente!=-1 && matriz[i][ii].valorServico >=valorMinimo && matriz[i][ii].valorServico<=valorMaximo){
                printf("\nService code %d | Number %d | Value %.2f\n", matriz[i][ii].codigoServico, matriz[i][ii].numServico, matriz[i][ii].valorServico);
                contadoresValor=1;
            }
        }
    }
    if(contadoresValor==0){
        printf("\nNo services in this value interval\n");
    }
    return;
}
void opcao5(){
    int contadorCadastro=0;
    for (int i = 0; i<30; i++){
        for(int ii=0; ii<3; ii++){
            if(matriz[i][ii].codCliente!=-1){
                for(int iii = 0; iii<4; iii++){
                    if(servicosDefinidos[iii].cod == matriz[i][ii].codigoServico){
                        printf("\n| No. %d |Service code %d | Number  %d | Value ($) %.2f | Client code %d | Description %s", i+1, matriz[i][ii].codigoServico, matriz[i][ii].numServico, matriz[i][ii].valorServico, matriz[i][ii].codCliente, servicosDefinidos[iii].descricao);
                        contadorCadastro=1;
                    }
                }
            }
        }
    }
    if(contadorCadastro==0){
        printf("No services registered.\n");
    }
    return;
}
void opcao6(){
    printf("\nEnd of Execution\n");
}

int main(){
    populandoServicos();
    populandoMatrizes();
    int opcao;
    while(opcao!=6){
        printf("\nChoose your option:\n1. Register a service.\n2. Register a service on a specific day\n3. Show services of chosen day\n4. Show services by cost\n5. Show general report\n6. Exit\n");
        scanf("%d", &opcao);
        if(opcao==1){
            cadastro();
        }else if(opcao==2){
            opcao2();
        }else if(opcao==3){
            opcao3();
        }else if(opcao==4){
            opcao4();
        }else if(opcao==5){
            opcao5();
        }else if(opcao==6){
            opcao6();
        }else{
            printf("\nInvalid option!\n");
        }
    }
    return 0;
}

