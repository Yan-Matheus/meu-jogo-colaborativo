#include <stdio.h>
#include <ctype.h>

int main (){

    char escolha;

printf("voce entrou em uma porta que tinha aparecido em sua casa, do outro lado dela havia nada alem de uma escuridao infinita:\n");
printf("Continuar?: Y/N\n");


scanf("%c", &escolha);
escolha = toupper(escolha);


 if (escolha == 'Y') {
        printf("Voce tentou dar um passo, mais seu pe nao encontrou o chao. Em vez disso voce começou a cair.\n\nvoce nao sabe quanto tempo passou, talvez minutos, talvez horas, mais voce nao se importa mais.\n\n");
        printf("Com o tempo suas memorias começaram a se tornar mais turvas, cheiro se tornou apenas um conceito estranho e as cores apenas lembranças.\n\n");
        printf("Voce mesmo ate esqueceu seu nome.\n\n\n");
        printf("Tudo que voce consegue lembrar, e do escuro que se expande eternamente ao seu redor.\n\n");
        printf("Fim.");
 } else if (escolha == 'N') {
 printf("Voce decidiu que isso era demais para voce, fechando a porta voce voltou a sua rotina diaria.\n\n");
 printf("E quanto voce foi ver se a porta ainda estava la, ele tinha dissaparecido.");
 printf("\n\nTalvez ela nunca tinha existido. voce com certeza nao esta nem ai.\n\n");
 printf("Fim.");
 } else{

 printf("Voce nao conseguio decidir se iria entrar dentro da sala escura ou nao, em vez disso ficando congelado na porta.");
 printf("\n\nDepois de aproximadamente 2 minutos, voce recuperou seus sentidos.");
 printf("\n\nPorque voce tava encarando a parede?");
 printf("\n\nFim.");
 }
  return 0;
}
//FunÃ§Ã£o de iniciar o jogo?
// FunÃ§Ã£o de iniciar o jogo?
