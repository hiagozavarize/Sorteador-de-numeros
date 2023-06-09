#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamArray 1000

int main() {

  int numero_sorteado, ja_sorteado, qtdnumeros, num_inicial, num_final, continuar;
  int caixa_num[tamArray];

  do{
      printf("Quantos numeros deseja sortear? ");
      scanf("%d", &qtdnumeros);

      printf("Qual o intervalo de numeros sortear?\n");

      printf("De: ");
      scanf("%d", &num_inicial);
    
      printf("A: ");
      scanf("%d", &num_final);

      srand(time(NULL));

      for (int i = 0; i < qtdnumeros; i++) {

        do{
          ja_sorteado = 0;

          numero_sorteado = rand() % (num_final + 1);

          for (int j = 0; j < i; j++){
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

      printf("Quer sortear novamente? SIM(1) NAO(2)");
      scanf("%d", &continuar);

    }while (continuar == 1);
  
  return 0;
}
