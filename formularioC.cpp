#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	char nome[255];
	char sobreNome[255];
	float salario;
	char profissao[255];
	
	printf("\nDigite seu nome: ");
	scanf("%s",&nome);
	
	printf("\nDigite seu sobrenome: ");
	scanf("%s",&sobreNome);
	
	printf("\nDigite o sal�rio: ");
	scanf("%f",&salario);
	
	printf("\nDigite sua profiss�o: ");
	scanf("%s",&profissao);
	
	return 0;
}
