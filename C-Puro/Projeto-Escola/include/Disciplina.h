#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#define NOME_MAX 100
#define VAGAS_MAX 100
#define CODIGO_MAX 7
#include <stdint.h>
#include "Professor.h"

typedef struct{
    char nome[NOME_MAX];
    char codigo[CODIGO_MAX];
    uint16_t semestre;
    Professor *professor_titular;
    char nome_alunos[VAGAS_MAX][NOME_MAX];
    uint8_t vagas_disponiveis;
}Disciplina;

extern Disciplina *lista_disciplinas;

uint8_t add_disciplina(Disciplina *disciplinas, const char *nome, const char *codigo, uint16_t semestre, Professor *professor_titular, uint8_t vagas_disponiveis);
uint8_t rm_disciplina(const char *codigo);
uint8_t att_disciplina(const char *codigo, const char *nome, uint16_t semestre, Professor *professor_titular, uint8_t vagas_disponiveis);
uint8_t matricular_aluno(const char *codigo, const char *nome_novo_aluno);
const Disciplina* buscar_disciplina(const char *codigo);

#endif