
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;


int main(int argc, char** argv) {

    setlocale(LC_ALL,"Portuguese");
    
    float nota1, nota2, nota3, media;
    char nome[20];
    
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    
    cout << endl << "Digite a primeira nota: ";
    cin >> nota1;
    
    cout << endl << "Digite a segunda nota: ";
    cin >> nota2;
    
    cout << endl << "Digite a terceira nota: ";
    cin >> nota3;
    
    media = (nota1 + nota2 + nota3)/3;
    
    cout << "Aluno " << nome << " possui média de " << media;
    
    return 0;
}

