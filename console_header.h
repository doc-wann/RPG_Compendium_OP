#ifndef CONSOLE_H
# define CONSOLE_H

#include <stdio.h>
#include <unistd.h>
#include <windows.h>

void    ft_cleanline(int qtt);
void    ft_load(unsigned int sec);
void    ft_categories(char *txt, int var_name);
int     ft_compendium(int c);
int     criaturas_cm(void);
int     extras_cm(void);
int     rituais_cm(void);
int     locais_cm(void);
int     pessoas_cm(void);
int     acontecimentos_cm(void);
int     ft_scan(void);

#endif