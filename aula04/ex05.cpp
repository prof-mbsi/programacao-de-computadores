#include <stdio.h>
#include <string.h>

struct Livro{
	char titulo[50];
	char autor[50];
	int ano;
};

int main(){
	struct Livro livros[5];
	int i;
	char autor[50];
	
	for(i = 0; i < 5; i++){
		printf("Informe titulo do livro: ");
		scanf("%s", &livros[i].titulo);
		printf("Informe autor do livro: ");
		scanf("%s", &livros[i].autor);
		printf("Informe ano de publicacao: ");
		scanf("%d", &livros[i].ano);
	}
	
	printf("\nQual autor vc deseja pesquisar? ");
	scanf("%s", &autor);
	
	for(i = 0; i < 5; i++){
		if(strcmp(livros[i].autor, autor) == 0){
			printf("\nLivro: %s", livros[i].titulo);
			printf("\nAutor: %s", livros[i].autor);
			printf("\nAno: %d", livros[i].ano);
		}
	}
}
