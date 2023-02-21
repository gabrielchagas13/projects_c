int main() 
{
 // Declaração e atribuição do valor da base do retângulo
 float base = 3.5;
 // Declaração e atribuição do valor da altura do retângulo
 float altura = 2.0;
 // Declaração, atribuição e cálculo da área do retângulo
 float area = base * altura;
 // Escrita na tela da área do retângulo
 printf("\nUm retangulo de base igual a %f", base);
 printf("\n e altura igual a %f", altura);
 printf("\n tem uma area igual a %f\n", area);
 return 0;
}

int main() // Função principal
{
 // Anunciando ao usuário o objetivo do programa
 puts(“\nSoma de dois números\n”);
 // Declaração e leitura do primeiro valor
 float X;
 printf(“\nDigite o primeiro valor: “);
 scanf(“%f”, &X);
 // Declaração e leitura do segundo valor
 float Y;
 printf(“\nDigite o segundo valor: “);
 scanf(“%f”, &Y);
 // Cálculo da soma dos valores lidos
 float R = X + Y;
 // Escrita na tela do resultado do cálculo
 printf("\n%f + %f = %f", X, Y, R);
 return 0;
}