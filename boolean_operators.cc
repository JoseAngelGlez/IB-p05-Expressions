/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file boolean_operators.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 30 10 2022
 * @brief El programa imprime una tabla de la verdad con 2 variabes (True ,
 * False) en todas su posibles opciones con los operadores lógicos.
 * @bugs No bugs
 * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
 */

#include <iostream>

int main () {
  bool T = true;
  bool F = false;
  std::cout << "p q !p !q p&&q p||q" << std::endl;
  std::cout << "--- -- -- ---- ----" << std::endl;
  std::cout << F << " " << F << " " << !F << "  " << !F << "  " << (F && F) << "    " << (F || F) << std::endl;
  std::cout << F << " " << T << " " << !F << "  " << !T << "  " << (F && T) << "    " << (F || T) << std::endl;
  std::cout << T << " " << F << " " << !T << "  " << !F << "  " << (T && F) << "    " << (T || F) << std::endl;
  std::cout << T << " " << T << " " << !T << "  " << !T << "  " << (T && T) << "    " << (T || T) << std::endl;
  return 0;
}
