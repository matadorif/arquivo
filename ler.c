#include<stdio.h>

int main(){
	
	// escrita em arquivo
	
	FILE *arquivo;
	
	arquivo = fopen("estados.txt", "w");
	
	fprintf(arquivo, "%s", "Minas Gerais\nSão Paulo\n");
	
	int dia = 7;
	int mes = 10;
	int ano = 2019;
	
	fprintf(arquivo, "%d/%d/%d\n", dia, mes, ano);
	
	int letra;
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		letra = 97 + rand() % (122 - 97);
		fprintf(arquivo, "%c", letra);
	}
	
	
	fclose(arquivo);
	
}
