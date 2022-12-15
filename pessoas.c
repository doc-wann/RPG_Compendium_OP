#include "console_header.h"

int pessoas_cm(void)
{
    int input;

    printf("\nVoce esta visualizando o compendio de pessoas - \n");
    printf("\n(01) === Senhor Widgell | Mestre da Ordem | Comandante.\n");
    printf("\n >    FIM DO COMPENDIO    <\nSelecione a pagina que quer visualizar\n");
    input  = ft_scan();
    if (input == 1)
    {
        ft_cleanline(100);
        printf("\n Abrindo informacoes sobre Senhor Widgell:\n > Senhor Widgell é o nome dado para o comandante regional de uma base de operacoes da Ordem Downsite. Eles sao agentes extremamente confiaveis e experientes. Qualquer agente da Ordem pode escalar ao ranking de Senhor Widgell, dado o esforço. Eles, os Widgell, por sua vez, respondem a um comandante maior, chamado de -----.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(pessoas_cm());
    }
    else
        return (1);
}
