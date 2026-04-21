#ifndef UTIL_H
#define UTIL_H

#include <time.h>

// Converte time_t para string formatada
void format_date(time_t t, char *buffer, int max);

/* função pra comparar os documentos em ordem alfabetica*/
/* recebe um ponteiro para dois documentos (genéricos) e retorna um valor q representa a ordem (positivo, negativo ou zero) */
int ordem_alfabetica(const void *a, const void *b);

/* função q compara os docs em ordem de tamanho (menor pra maior)*/
/* recebe um ponteiro para dois documentos (genéricos) e retorna um valor na mesma lógica da função anterior */
int ordem_tamanho(const void *a, const void *b);

/* função q compara os docs em ordem cronológica (mais antigo pra mais novo)*/
/* recebe um ponteiro para dois documentos (genéricos) e retorna um valor na mesma lógica da função anterior */
int ordem_cronologica(const void *a, const void *b);

#endif