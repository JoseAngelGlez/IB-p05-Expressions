/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file arithmetic_operators.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 30 10 2022
 * @brief El programa lee 2 números cualquiera y realiza todas las operaciones
 * atimeticas o de comparación con esos valores.
 * @bugs No bugs
 * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
 */

#include <iostream>

int main () {
  int number1 , number2 ;
  std::cin >> number1 >> number2 ;
  int addition ;
  addition = number1 + number2;
  std::cout << number1 << " + " << number2 << " = " << addition << "\n";
  int substraction ;
  substraction = number1 - number2 ;
  std::cout << number1 << " - " << number2 << " = " << substraction << "\n"; 
  int multiplication ;
  multiplication = number1 * number2 ;
  std::cout << number1 << " * " << number2 << " = " << multiplication << "\n";
  int division ;
  division = number1 / number2 ;
  std::cout << number1 << " / " << number2 << " = " << division << "\n";
  int reminder ;
  reminder = number1 % number2 ;
  std::cout << number1 << " % " << number2 << " = " << reminder << "\n";
  if (number1 > number2) {
    std::cout << number1 << " > " << number2 << " = TRUE" << "\n";
    }
  else {
    std::cout << number1 << " > " << number2 << " = FALSE" << "\n";
    }
  if (number1 < number2) {
    std::cout << number1 << " < " << number2 << " = TRUE" << "\n";
    }
  else {
    std::cout << number1 << " < " <<  number2 << " = FALSE" << "\n";
    }
  if (number1 == number2) {
    std::cout << "(" << number1 << " = " << number2 << ")" << " = TRUE" << "\n";
    }
  else {
    std::cout << "(" << number1 << " = " << number2 << ")" << " = FALSE" << "\n";
    }
  return 0;
}
  
