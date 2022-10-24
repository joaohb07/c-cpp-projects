#include <stdio.h>

void le_dados();
float media();
int menor();
int maior();
int qtdade();

int vetorIdade[15];
char vetorSexo[15];
float vetorSalario[15];
int vetorFilhos[15];

int main(void)
{

    le_dados();
    printf("\nAverage Salary:%.2f |", media());
    printf("Youngest Age: %d |", menor());
    printf("Oldest Age: %d\n", maior());
    printf("Womens with more than 3 children that receive up to $500,00: %d\n", qtdade());
    return 0;
}

void le_dados(){
    for (int i = 0; i < 15; i++){
        printf("\nType the age of n. %d\n", i);
        scanf("%d", &vetorIdade[i]);
        
        printf("\nType the gender of n. %d\n", i);
        scanf("%s", &vetorSexo[i]);
        
        printf("\nType the income of n. %d\n", i);
        scanf("%f", &vetorSalario[i]);
        
        printf("\nType the number of sons of n. %d\n", i);
        scanf("%d", &vetorFilhos[i]);
    }
}

float media(){
    float sp = 0;
    for (int i = 0; i < 15; i++){
        sp += vetorSalario[i];
    }
    return (sp/15);
}

int menor(){
    int menor = vetorIdade[0];
    for (int i = 0; i < 15; i++){
        if(vetorIdade[i]<=menor){
            menor = vetorIdade[i];
        }
    }
    return menor;
}

int maior(){
    int maior = 0;
    for (int i = 0; i < 15; i++){
        if(vetorIdade[i]>=maior){
            maior = vetorIdade[i];
        }
    }
    return maior;
}

int qtdade(){
    int mulheres = 0;
    
    for(int i = 0; i < 15; i++){
        if(vetorSexo[i]=='M' && vetorFilhos[i] == 3 && vetorSalario[i] <= 500){
            mulheres++;
        }
    }
    
    return mulheres;
}
