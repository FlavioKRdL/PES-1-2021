
#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    
    setlocale(LC_ALL,"Portuguese");
    
    float tempF, tempC;
    
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> tempF;
    
    tempC = (tempF - 32.0)*(5.0/9.0);
    
    cout << endl << endl;
    if (tempF == 451){
        cout << "Olá, Bradbury" << endl;
    }
    cout << "A temperatura em celsius é: " << tempC << "Cº";

    return 0;
}

