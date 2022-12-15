#include "console_header.h"

int rituais_cm(void)
{
    int input;

    printf("\nVoce esta visualizando o compendio de rituais - \n");
    printf("\n(01) === Transcendencia | NDU - 15 | Muito comum.\n");
    printf("\n >    FIM DO COMPENDIO    <\nSelecione a pagina que quer visualizar\n");
    input  = ft_scan();
    if (input == 1)
    {
        ft_cleanline(100);
        printf("\n Abrindo informacoes sobre Transcendencia:\n > Com o tempo, um agente pode sentir o chamado do outro lado. De algum modo que ainda nao compreendemos, a exposiçao extensiva a criaturas e eventos paranormais tende a ligar um agente com aquilo que reside alem. Nesses casos, eles podem transcender, muitas vezes acompanhados de itens amalidcoados pelo outro lado, para absorver seu poder, amarrando ainda mais sua existencia ao paranormal - A influencia do paranormal e cruel, e deve ser optada apenas com total ciencia dos riscos.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(rituais_cm());
    }
    else
        return (1);
}
