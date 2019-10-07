#include<stdio.h>

int main(){
	
	// Manipulaçao de arquivos em C
	// Abrir -> fopen
	// Ler o conteudo -> fgets
	// Escrever (atualizar) -> fprintf
	// Apagar -> fopen("nome", "w")
	// Fechar -> fclose
	
	FILE *arquivo; // cria um ponteiro para "arquivo"
	
	// Abrir um arquivo
	
	arquivo = fopen("cidades.txt", "r");
	int linhas = 0;
	
	if(arquivo == NULL){
		printf("Erro! O arquivo nao existe.\n");
	}else{
		printf("O arquivo foi aberto com sucesso.\n");
		// Ler o arquivo
		char buffer[255];
		/*while(!feof(arquivo)){ // file end of file
			fgets(buffer, 255, arquivo); // pegar linha por linha
			printf("%s", buffer);
			linhas++;
		}*/
		
		while(fgets(buffer, 255, arquivo) != NULL){
			printf("%s", buffer);
			linhas++;
		}
		
		printf("Linhas: %d\n", linhas);
	}
	
	fclose(arquivo); // fechar o arquivo
	
	
}
