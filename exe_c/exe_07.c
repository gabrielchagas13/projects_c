//Calcular o peso ideal de um homem, sabendo que:
//Peso Ideal de pessoas de gênero masculino: (72.7 x altura) – 58

int main() // Função principal
{
 // Anunciando ao usuário o objetivo do programa
 puts ("\nCalculando o seu peso ideal :)\n");
 
 float X;
 printf("\nDigite sua altura: ");
 scanf("%f", &X);
 
 float altura = X * 72.7 - 58;
 
 printf("seu peso ideal eh de: %f ", altura);
 
 return 0;
}