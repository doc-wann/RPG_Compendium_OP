#include "console_header.h"

int locais_cm(void)
{
    int input;

    printf("\nVoce esta visualizando o compendio de locais - \n");
    printf("\n(01) === Little Gold | Canada | Missao 01.\n");
    printf("\n >    FIM DO COMPENDIO    <\nSelecione a pagina que quer visualizar\n");
    input  = ft_scan();
    if (input == 1)
    {
        ft_cleanline(100);
        printf("\n A cidade de Little Gold é localizada na fronteira entre o Canadá e o Alaska - Ela foi marcada na base de dados da Ordem depois que a equipe Cascalho desapareceu em suas dependencias, durante uma missao secreta.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(locais_cm());
    }
    else
        return (1);
}
