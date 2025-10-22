#include <stdio.h>

float mediaDois(float x, float y){
	return (x + y) / 2;
}

float mediaTres(float x, float y, float z){
	return (x + y + z) / 3;
}

int main(){
	float a, b, c;
	printf("\n Informe valor para a: ");
	scanf("%f", &a);
	printf("\n Informe valor para b: ");
	scanf("%f", &b);
	printf("\n Informe valor para c: ");
	scanf("%f", &c);
	printf("\nMedia entre %.1f e %.1f: %.2f", a, b, mediaDois(a, b));
	printf("\nMedia entre %.1f, %.1f e %.1f: %.2f", a, b, c, mediaTres(a, b, c));
}
