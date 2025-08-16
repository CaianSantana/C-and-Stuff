#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

typedef Pessoa Aluno; 

typedef struct{
    Pessoa *lista;
    uint8_t qtd;
}CorpoDiscente;

extern CorpoDiscente *corpo_discente_principal;

uint8_t add_aluno(const Pessoa *novo_aluno);
uint8_t rm_aluno(const char *matricula);
uint8_t att_aluno(const char *matricula, const char *nome, char sexo, const Data *nascimento, const char *cpf);
const Professor* buscar_aluno(const char *matricula);
#endif