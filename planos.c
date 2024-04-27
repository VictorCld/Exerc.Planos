#include <stdio.h>
#include <stdlib.h>

// variavei de entrada
char nome_cliente[40];
char cpf[11];
char dataNasc[10];
int Quant_dependente;

float valor_individual, valorTotal;

char nome_cliente_odonto[40];
char cpf_odonto[11];
char dataNasc_odonto[10];
int Quant_dependente_odonto;
float valor_individual_odonto, valorTotal_odonto;
int tipoplano;

int main(){
	printf("Informe seu tipo de plano: \n1. Saude\n0. Odontologico\n");
	scanf("%d", &tipoplano);
	if(tipoplano = 1){
		planoDeSaude();
	} else{
		planoOdontologico();
	}
}


int planoDeSaude(){
	printf("Informe seu nome: \n");
	scanf("%s", &nome_cliente);
	printf("Informe seu CPF: \n");
	scanf("%s", &cpf);
	printf("Informe sua data de nascimento: \n");
	scanf("%s", &dataNasc);
	printf("Informe a quantidade de dependentes: \n");
	scanf("%d", &Quant_dependente);
	valor_individual = 100;
	valorTotal = valor_individual*Quant_dependente ;
	printf("Nome do cliente: %s \n", nome_cliente);
    printf("Cpf do cliente: %s \n", cpf);
    printf("Data de nascimento do cliente: %s \n", dataNasc);
    printf("Quantidade de dependentes: %d \n", Quant_dependente);
    printf("Valor total da fatura: %f \n", valorTotal);
}

int planoOdontologico(){
   printf("Informe seu nome: \n");
	 scanf("%s", &nome_cliente_odonto);
	 printf("Informe seu CPF: \n");
	 scanf("%s", &cpf_odonto);
	 printf("Informe sua data de nascimento: \n");
	 scanf("%s", &dataNasc_odonto);
	 printf("Informe a quantidade de dependentes: \n");
	 scanf("%d", &Quant_dependente_odonto);
	valor_individual = 80;
	valorTotal = valor_individual*Quant_dependente ;
	 printf("Nome do cliente: %s \n", nome_cliente_odonto);
   printf("Cpf do cliente: %s \n", cpf_odonto);
   printf("Data de nascimento do cliente: %s \n", dataNasc_odonto);
   printf("Quantidade de dependentes: %d \n", Quant_dependente_odonto);
   printf("Valor total da fatura: %f \n", valorTotal_odonto);
}
