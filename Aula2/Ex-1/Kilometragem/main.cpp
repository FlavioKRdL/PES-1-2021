
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    
    setlocale(LC_ALL, "Portuguese");
    
    char nome[20];
    float horas, minutos, segundos, distancia, distanciaM, velKmH, velMsS;
    
    cout <<"Digite seu nome: ";
    cin >> nome;
    cout << endl;
    
    cout << "Digite por quantos minutos você andou de bicicleta: ";
    cin >> minutos;
    cout << endl;
    
    cout << "Digite a distância percorrida, em kilometros: ";
    cin >> distancia;
    cout << endl;

    horas = minutos/60;
    
    segundos = minutos * 60;
    
    distanciaM = distancia * 1000;
    
    velKmH = distancia/horas;
    velMsS = distanciaM/segundos;
    
    cout << nome << " percorreu " << distancia << " kilometros em " << minutos << " minutos";
    cout << ", sua velocidade média foi " << velKmH << " kilometros por hora, ou " << velMsS << " metros por segundo.";
    
    return 0;
}

