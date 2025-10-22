#include <stdio.h>
#include <string.h>

struct Aluno{
	char nome[50];
	int matricula;
	float nota;
};

int main(){
	struct Aluno a1;
	
	strcpy(a1.nome, "Cidadao");
	a1.matricula = 1000;
	a1.nota = 8.5;
	
	printf("Aluno: %s", a1.nome);
	printf("\nMatricula: %d", a1.matricula);
	printf("\nNota: %.1f", a1.nota);
}
