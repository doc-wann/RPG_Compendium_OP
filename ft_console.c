#include "console_header.h"

void    ft_cleanline(int qtt)
{
    while (qtt != 0)
    {
        printf("\x1b[1F"); // Move to beginning of previous line
        printf("\x1b[2K"); // Clear entire line
        qtt--;
    }
}
void    ft_load(unsigned int sec)
{
    int sleept;
   
    sleept = sec / 10;
    printf("\n0--------- 10%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n00-------- 20%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n000------- 30%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n0000------ 40%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n00000----- 50%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n000000---- 60%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n0000000--- 70%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n00000000-- 80%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n000000000- 90%%");
    sleep(sleept);
    ft_cleanline(1);
    printf("\n0000000000 100%%");
    sleep(sleept);
    ft_cleanline(1);
}

void ft_categories(char *txt, int var_name)
{
    int var;

    if (var_name == 1)
        var = 1;
    if (var_name == 2)
        var = 1;
    if (var_name == 3)
        var = 1;
    if (var_name == 4)
        var = 1;
    if (var_name == 5)
        var = 1;
    if (var_name == 6)
        var = 1;
    printf("%s", txt);
    printf("%i", var);
    printf(" entradas");
}

int ft_compendium(int c)
{
    char input2;

    if (c == 1)
        return (criaturas_cm());
    if (c == 2)
        return (rituais_cm());
    if (c == 3)
        return (locais_cm());
    if (c == 4)
        return (pessoas_cm());
    if (c == 5)
       return (acontecimentos_cm());
    if (c == 6)
        return (extras_cm());
    return (1);
}

int ft_scan(void)
{
    int ret;
    scanf("%i", &ret);
    fflush(stdin);
    return (ret);
}

int main(void)
{
    int load;
    int s;
    int input;

    s = 1;
    load = 1;
    printf("\n\n > Seja bem vindo ao D.R.P., o arquivo de informacoes sobre anomalias paranormais Downsite.\n");
    ft_load(10);
    printf("\nIdentificacao confirmada, equipe XXX. \n");
    printf("\n");
    printf("\n");
    while (load == 1)
    {
        printf("Seu compendio de informacoes consta com: \n");
        ft_categories("1 - Criaturas, ", 1);
        ft_categories("\n2 - Rituais, ", 2);
        ft_categories("\n3 - Locais, ", 3);
        ft_categories("\n4 - Pessoas, ", 4);
        ft_categories("\n5 - Acontecimentos, ", 5);
        ft_categories("\n6 - Extras, ", 6);
        printf("\n");
        printf("\n");
        printf("Insira o numero da opcao para visualizar: \n");
        input  = ft_scan();
        ft_cleanline(100);
        s = ft_compendium(input);
        ft_cleanline(100);
    }
}
