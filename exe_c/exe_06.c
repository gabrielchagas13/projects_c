//Calcular a representação em Farenheit de uma temperatura em graus celsius. Uma medida em celsius
//pode ser convertida em Farenheit através da seguinte fórmula:
//Fahrenheit = celsius x 1.8 + 32

int main() // Função principal
{
 // Anunciando ao usuário o objetivo do programa
 puts ("\nCalculando a temperatura de Celsius em Farenheit\n");
 
 float X;
 printf("\nDigite a temperatura de Celsius, que voce quer saber em Farenheit: ");
 scanf("%f", &X);
 
 float farenheit = X * 1.8 + 32;
 
 printf("Essa temperatura eh de: %f ", farenheit);
 printf("em farenheit");
 
 return 0;
}