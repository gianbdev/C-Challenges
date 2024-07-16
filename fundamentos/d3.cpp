#include <iostream>

int main() {
  int n1, n2, s;

  std::cout << "Introduce el primer número: ";
  std::cin >> n1;

  std::cout << "Introduce el segundo número: ";
  std::cin >> n2;

  s = n1 + n2;

  std::cout << "La suma de " << n1 << " y " << n2 << " es: " << s << std::endl;

  return 0;
}
