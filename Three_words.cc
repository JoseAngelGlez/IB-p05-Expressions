/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Three_words.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 31 10 2022
 * @brief A program that reads 3 words (a, b and c) and print them on inverse order.
 * @bugs No bugs
 * @see https://jutge.org/problems/P62421_en
 */

#include <iostream>

int main () {
  std::string word1{0}, word2{0}, word3{0};
  std::cin >> word1 >> word2 >> word3;
  std::cout << word3 << " " <<  word2 << " " << word1 << std::endl;
  return 0;
}
