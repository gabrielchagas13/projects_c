//Calcular o peso ideal de uma mulher, sabendo que:
//Peso Ideal de pessoas de gênero feminino: (62.1 x altura) – 44.7

int main() // Função principal
{
 // Anunciando ao usuário o objetivo do programa
 puts ("\nCalculando o seu peso ideal :)\n");
 
 float X;
 printf("\nDigite sua altura: ");
 scanf("%f", &X);
 
 float altura = X * 62.1 - 44.7;
 
 printf("seu peso ideal eh de: %f ", altura);
 
 return 0;
}