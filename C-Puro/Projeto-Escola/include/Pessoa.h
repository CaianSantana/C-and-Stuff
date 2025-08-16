#ifndef PESSOA_H
#define PESSOA_H

#define NOME_MAX 100
#define MATRICULA_MAX 12
#define CPF_MAX 15

#include <stdint.h>

typedef struct{
    uint8_t dia;
    uint8_t mes;
    uint16_t ano;
}Data;

typedef struct{
    char matricula[MATRICULA_MAX];
    char nome[NOME_MAX];
    char sexo;
    Data nascimento;
    char cpf[CPF_MAX];
}Pessoa;

uint8_t criar_data(Data *nova_data, uint8_t dia, uint8_t mes, uint16_t ano);
uint8_t criar_pessoa(Pessoa *nova_pessoa, const char *matricula, const char *nome, char sexo, const Data *nascimento, const char *cpf);
uint8_t validar_data(const Data *data);
uint8_t validar_cpf(const char *cpf);

#endif