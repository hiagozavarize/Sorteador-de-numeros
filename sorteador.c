#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define tamArray 1000

int main() {

  setlocale(LC_ALL, "pt-BR");

  int numero_sorteado;
  int ja_sorteado;
  int qtdnumeros;
  int num_inicial;
  int num_final;
  int i;
  int j;
  int continuar;
  int caixa_num[tamArray];

  do
    {
      printf("Quantos números deseja sortear? ");
      scanf("%d", &qtdnumeros);

      printf("Qual o intervalo de números sortear?\n");

      printf("De: ");
      scanf("%d", &num_inicial);
    
      printf("A: ");
      scanf("%d", &num_final);

      srand(time(NULL));

      for (i = 0; i < qtdnumeros; i++) {

        do{
          ja_sorteado = 0;
          numero_sorteado = rand() % (num_final + 1);
          for (j = 0; j < i; j++){
            if(caixa_num[j] == numero_sorteado)
            {
              ja_sorteado = 1;
              break;
            }
          }
        } while (ja_sorteado); 

        caixa_num[1] = numero_sorteado;
        printf("%d\n", numero_sorteado);

      }

      printf("Quer sortear novamente? SIM(1) NÃO(2)");
      scanf("%d", &continuar);

    }while (continuar == 1);
  
  return 0;
}
