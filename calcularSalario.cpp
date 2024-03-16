#include <iostream>
int main(){
float valorHora, horasTrabalhadas, salario;

std::cin >> valorHora;
std::cin >> horasTrabalhadas;

salario = valorHora * horasTrabalhadas;

std::cout << salario;
}