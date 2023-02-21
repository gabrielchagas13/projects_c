//Calcular a área de um círculo. Planeje qual(is) dado(s) precisa(m) ser lido(s), qual resulta de um cálculo
//e qual precisa ser escrito.


int main() // Função principal
{
 // Anunciando ao usuário o objetivo do programa
 puts ("\nCalculando a area de um circulo\n");
 
 float X;
 printf("\nDigite o raio do circulo: ");
 scanf("%f", &X);
 
 float area = X * 2 * 3.14;
 
 printf("A area do cirulo eh: %f ", area);
 
 return 0;
}
