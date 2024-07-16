#include <iostream>
using namespace std;

int main() {
  double a, r, pi = 3.1416;
  cout << "Ingrese su radio a calcular: " << endl;
  cin >> r;

  a = (r * r) * pi;

  cout << "El area de su circulo es: " << a << endl;

  return 0;
}
