#include "console_header.h"

int extras_cm(void)
{
    int input;

    printf("\nVoce esta visualizando o compendio de extras - \n");
    printf("\n(01) === Equipe Delta | Recrutas | Classe C\n");
    printf("\n >    FIM DO COMPENDIO    <\nSelecione a pagina que quer visualizar\n");
    input  = ft_scan();
    if (input == 1)
    {
        ft_cleanline(100);
        printf("\n Abrindo informacoes sobre Zumbis-de-Sangue:\n > Zumbis sao criaturas originadas da propria essencia da morte, cadaveres contaminados pelo paranormal, trazidos de volta a vida como marionetes das entidades. Essas criaturas sao extremamente perigosas, e podem surgir em qualquer lugar onde a membrana esta fraca.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(extras_cm());
    }
    else
        return (1);
}
