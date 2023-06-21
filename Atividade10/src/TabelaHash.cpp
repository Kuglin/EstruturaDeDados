#include "TabelaHash.hpp"

TabelaHash::TabelaHash(int n) {

    this->tabela = new Aluno*[n];
    this->tam_tabela = n;
}

int TabelaHash::hash(int k) {

    return k % tam_tabela;

}

Aluno* TabelaHash::get(int k) {

    int h = hash(k);

    while (tabela[h] != nullptr) {
        if (tabela[h]->get_matricula() == k)
            return tabela[h];
        
        h = (h+1) % tam_tabela;
        cout << h << "\n";
    }

    return nullptr;

} 

void TabelaHash::set(string nome, int matricula, float mediageral) {

    int h = hash(matricula);

    while (tabela[h] != nullptr) {
        if (tabela[h]->get_matricula() == matricula)
            break;
        h = (h+1) % tam_tabela;
    }

    if (tabela[h] == nullptr) {
        tabela[h] = new Aluno();
        tabela[h]->set_matricula(matricula);
    }

    tabela[h]->set_nome(nome);
    tabela[h]->set_mediageral(mediageral);

}

void TabelaHash::remove(int k) {

    int h = hash(k);

    while (tabela[h] != nullptr) {
        if (tabela[h]->get_matricula() == k)
            break;
        h = (h+1) % tam_tabela;
    }

    if (tabela[h] == nullptr)
        return;

    delete tabela[h];
    tabela[h] = nullptr;

}

string TabelaHash::toString() {

    string s = "";

    for (int i = 0; i < tam_tabela; i++) {
        if (tabela[i] != nullptr)
            s += to_string(tabela[i]->get_matricula()) + " ";
    }

    return s;

}

