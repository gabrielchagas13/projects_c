// Calcular o seu peso ideal, sabendo que:
// Peso Ideal de pessoas de gênero masculino: (72,7 x altura) – 58
// Peso Ideal de pessoas de gênero feminino: (62,1 x altura) – 44,7

int main() 
{
 float altura_homem = 1.75, altura_mulher = 1.60;
 float peso_ideal_homem = 72.7 * altura_homem - 58;
 float peso_ideal_mulher = 62.1 * altura_mulher - 44.7;

 printf ("\n Um homem com %f ", altura_homem);
 printf ("de altura, seu peso ideal seria de %f ", peso_ideal_homem);
 printf ("\n Uma mulher com %f ", altura_mulher);
 printf ("de altura, seu peso ideal seria de %f ", peso_ideal_mulher);
 return 0;
}