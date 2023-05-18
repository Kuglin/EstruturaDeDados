#ifndef NOARVORE_H
#define NOARVORE_H

#include <iostream>
using namespace std;

class NoArvore {

    private:

        int info;
        NoArvore* prim;
        NoArvore* prox;
    

    public:

        NoArvore(int info);
        void setInfo(int info);
        int getInfo();
        void setPrim(NoArvore* prim);
        NoArvore* getPrim();
        void setProx(NoArvore* prox);
        NoArvore* getProx();
        string toString();

};

#endif