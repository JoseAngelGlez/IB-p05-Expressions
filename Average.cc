/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Average.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 31 10 2022
 * @brief A program that sum a sequence of numbers and print their average.
 * @bugs No bugs
 * @see https://jutge.org/problems/P78142_en
 */

#include <iostream>

int main () {
  int total_numbers, help;
  double numbers[1000000], sum{0.0};
  std::cin >> total_numbers;
  while (total_numbers > 1000000 || total_numbers <= 0) {
    std::cout << "Error, total of numbers should be (0-1000000)";
  }
  for (help = 0; help < total_numbers; help++){
    std::cout << help + 1 << std::endl;
    std::cin >> numbers[help];
    sum += numbers[help];
  }
  double average;
  average = sum / numbers
  std::cout << average << std::endl;
  return 0;
}
    
