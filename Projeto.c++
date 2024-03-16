#include <iostream>

int main(){
    int tempoTotal, tempoQuePassou, tempoRestante;
    std::cin >> tempoTotal;
    std::cin >> tempoQuePassou;
    tempoRestante = tempoTotal - tempoQuePassou;
    std::cout << tempoRestante;
    return 0;
}