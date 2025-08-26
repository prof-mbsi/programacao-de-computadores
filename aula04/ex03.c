#include <stdio.h>
#include <string.h>

struct Livro{
	char titulo[50];
	char autor[50];
	int ano;
};

int main(){
	struct Livro livros[2];
	int i;
	
	for(i = 0; i < 2; i++){
		printf("Informe titulo do livro: ");
		scanf("%s", &livros[i].titulo);
		printf("Informe autor do livro: ");
		scanf("%s", &livros[i].autor);
		printf("Informe ano de publicacao: ");
		scanf("%d", &livros[i].ano);
	}
	
	for(i = 0; i < 2; i++){
		if(livros[i].ano >= 2000){
			printf("\nLivro: %s", livros[i].titulo);
		}
	}
}
