#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

typedef Pessoa Professor;

typedef struct{
    Pessoa *lista;
    uint8_t qtd;
}CorpoDocente;

extern CorpoDocente *corpo_docente_principal;

uint8_t add_professor(const Pessoa *novo_professor);
uint8_t rm_professor(const char *matricula);
uint8_t att_professor(const char *matricula, const char *nome, char sexo, const Data *nascimento, const char *cpf);
const Professor* buscar_professor(const char *matricula);
#endif