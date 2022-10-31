/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Division_2_numbers.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 21 10 2022
 * @brief Programa que divide 2 numeros enteros y devuelve la solucion y el resto de la division
 * @bugs No bugs
 *
 * @see https://jutge.org/problems/P48107_en
 */

#include <iostream>

int main() {
  int number1,number2,integer,reminder;
  std::cin>>number1>>number2;
  if (number2>0) {
    integer=number1/number2;
    reminder=number1%number2;
    std::cout<<integer<<" "<<reminder<<"\n";
  }
  else if(number2<=0) {
    std::cout<<"El 2º número ha de ser mayor de 0"<<"\n";
  }
  return 0;
}

