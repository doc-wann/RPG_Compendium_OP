#include "console_header.h"

int acontecimentos_cm(void)
{
    int input;

    printf("\nVoce esta visualizando o compendio de acontecimentos - \n");
    printf("\n(01) === A fundacao Downsite | 1942 | Historia da Ordem\n");
    printf("\n(02) === Indícios de vazamentos paranormais | 1950 | Historia da Ordem\n");
    printf("\n(01) === Uma sobrevivente de Ludwig | 1953 | Historia da Ordem\n");
    printf("\n(01) === A excavação de Ludwig | 2017 | Historia da Ordem\n");
    printf("\n >    FIM DO COMPENDIO    <\nSelecione a pagina que quer visualizar\n");
    input  = ft_scan();
    if (input == 1)
    {
        ft_cleanline(100);
        printf("\n Abrindo informacoes sobre A fundação Downsite:\n > A fundação começou como um programa dos governos aliados durante o aquecimento da segunda guerra. Haviam relatos, vazados por autoridades militares ao redor de todo o mundo, denunciando descobertas muito além da compreensão humana - Criaturas colossais, mortas, porém em estado de preservação perfeito. A simples exposição a sua existência era capaz de despedaçar a mente humana, desfazendo sua sanidade e o tornando escravo daquilo que foi denominado de 'Outro Lado'. \n > Nós éramos a força de defesa contra essas entidades, contra a exploração de seus resquícios. A primeira grande demonstração de poder das entidades aconteceu em uma pequena cidade, chamada Ludwig, nos confins rurais da União Soviética. \n > Lá, nós seguimos com a primeira expedição Downsite - a equipe original. Criminosos extremamente capacitados foram recrutados como parte de um 'Programa de Satisfação de Dividias Governamentais', onde a conclusão de uma investigação sobre o paradeiro de um antigo Bunker militar experimental russo os garantiria a chance de apagar seus registros. \n > Pouco se sabe sobre como a missão resultou. Pouco mais de uma semana depois do seu inicio, o grupo enviado entrou em contato, anunciando que a missão havia sido um fracasso. Com um esforço coletivo das nações unidas, a área foi bombardeada e todos os registros da operação foram apagados, incluindo os nomes dos agentes. Acreditamos, por anos, que aquilo havia silenciado a mobilização de pesquisas com elementos paranormais.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(acontecimentos_cm());
    }
    if (input == 2)
    {
        ft_cleanline(100);
        printf("\n Abrindo informacoes sobre Indicios de Vazamentos Paranormais:\n > O programa Downsite teve mais algumas chamadas durante os anos subsequentes a sua ativação, e grande parte dos casos resultaram na completa dizimação das equipes, junto a todas as provas relacionadas. As outras ocorrências, embora geralmente relacionadas ao paranormal, eram casos muito pouco desenvolvidos em relação ao caso de Ludwig. A fundação Downsite parecia estar conseguindo conter o paranormal de maneira efetiva, barata e sigilosa. Os criminsos que fugiam das suas expedições eram caçados e executados, evitando qualquer tipo de vazamentos. \n > Alguns anos depois, foi evidenciada uma droga conhecida como 'Composto X', circulando nos alto escaloes militares. Nossos pesquisadores identificaram a droga como sendo produzida com algum tipo de material organico, com componentes impossiveis. Era uma droga paranormal capaz de criar super-soldados, sacrificando parte da sua sanidade como custo. A droga tambem parecia ser um otimo agente neurologico, causando explosoes constantes de dopamina no cerebro, causando dependencia. \n > A ordem mostrou interesse na substancia, mas seu fornecedor era extremamente cauteloso. Demoraram anos ate que contato fosse estabelecido - O sujeito nao dizia nada sobre o seu passado, mas claramente havia perdido a sanidade a muito tempo. As tentativas de rastrear a origem da sustancia nos levaram de volta para a cidade de Ludwig - De algum modo, a substância havia se espalhado pelo subterraneo da cidade, tornando as cavernas abaixo fontes ricas da droga.\n\n");
        printf("\n Retornando ao compendio...");
        sleep(10);
        return(acontecimentos_cm());
    }
    else
        return (1);
}
