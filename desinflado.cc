/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file desinflado.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 30 10 2022
 * @brief Es un programa que convierte las letras mayúsculas introducidas en el
 * mismo carácter pero en minúscula.
 * @bugs No bugs
 * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
 */

 #include <iostream>

int main () {

  char mayuscula;
  std::cin >> mayuscula;
  mayuscula = static_cast<int>(mayuscula);
  mayuscula = mayuscula + 32;
  std::cout << mayuscula << "\n";
  return 0;
}
