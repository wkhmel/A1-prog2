#include "util.h"
#include <stdio.h>
#include <time.h>

void format_date(time_t t, char *buffer, int max) {
    struct tm *info = localtime(&t);
    strftime(buffer, max, "%d/%m/%Y %H:%M:%S", info);
}

int ordem_alfabetica(const void *a, const void *b) {
    /*convertendo o ponteiro do tipo void (generico pra comparação) p tipo Document */
    const Document *docA = (const Document *)a;
    const Document *docB = (const Document *)b;

    /* dá zero se forem iguais, valor negativo se o primeiro for menor q o segundo e positivo caso contrario */
    return strcmp(docA->name, docB->name);
}

int ordem_tamanho(const void *a, const void *b) {
    const Document *docA = (const Document *)a;
    const Document *docB = (const Document *)b;

    /* subtrai do valor que tem mais bytes o valor que tem menos bytes */
    return (docA->size > docB->size) - (docA->size < docB->size);
}

int ordem_cronologica(const void *a, const void *b) {
    const Document *docA = (const Document *)a;
    const Document *docB = (const Document *)b;
    /* retorna a diferença de data (do que é mais recente para o mais antigo)*/
    return (docA->date > docB->date) - (docA->date < docB->date);
}
