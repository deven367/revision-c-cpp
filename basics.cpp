#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[]) {
  printf("Hello world\n");
  int x;
  // scanf("%d", &x);
  // printf("Value of x is %d\n", x);

  std:: cout << "/* Demo */" << '\n';
  int y;
  std::cin >> y;
  std::cout << "this is the value of " << y << '\n';
  std::cout << "this is just amazing" << '\n';

  float a,b;
  std::cin >> a >> b;
  if (a > b)
    std::cout << a/b << '\n';
  else
    std::cout << b/a << '\n';
  return 0;

}
float summation(int n){
  return 0.0;
}
