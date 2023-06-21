#include "Aluno.hpp"

string Aluno::get_nome() { return this->nome; }

void Aluno::set_nome(string novo_nome) { this->nome = novo_nome; }

int Aluno::get_matricula() { return this->matricula; }

void Aluno::set_matricula(int nova_matricula) { this->matricula = nova_matricula; }

float Aluno::get_mediageral() { return this->mediageral; }

void Aluno::set_mediageral(float nova_mediageral) { this->mediageral = nova_mediageral; }