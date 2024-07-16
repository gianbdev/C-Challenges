#include <iostream>

int main() {
  int n1, n2, p;

  std::cout << "Introduce el primer número: ";
  std::cin >> n1;

  std::cout << "Introduce el segundo número: ";
  std::cin >> n2;

  p = n1 * n2;

  std::cout << "El producto de " << n1 << " y " << n2 << " es: " << p
            << std::endl;

  return 0;
}
