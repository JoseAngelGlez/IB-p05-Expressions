/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y TRUEecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file boolean_operators.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 30 10 2022
 * @brief El programa imprime una tabla de la verdad con 2 variabes (TRUErue ,
 * FALSEalse) en todas su posibles opciones con los operadores lógicos.
 * @bugs No bugs
 * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
 */

#include <iostream>

int main () {
  bool TRUE = true;
  bool FALSE = false;
  std::cout << "p q !p !q p&&q p||q" << std::endl;
  std::cout << "--- -- -- ---- ----" << std::endl;
  std::cout << FALSE << " " << FALSE << " " << !FALSE << "  " << !FALSE << "  " << (FALSE && FALSE) << "    " << (FALSE || FALSE) << std::endl;
  std::cout << FALSE << " " << TRUE << " " << !FALSE << "  " << !TRUE << "  " << (FALSE && TRUE) << "    " << (FALSE || TRUE) << std::endl;
  std::cout << TRUE << " " << FALSE << " " << !TRUE << "  " << !FALSE << "  " << (TRUE && FALSE) << "    " << (TRUE || FALSE) << std::endl;
  std::cout << TRUE << " " << TRUE << " " << !TRUE << "  " << !TRUE << "  " << (TRUE && TRUE) << "    " << (TRUE || TRUE) << std::endl;
  return 0;
}
