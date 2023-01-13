#include <stdio.h>

int main() {

  char op;
  float first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%f %f", &first, &second);

  switch (op) {
    case '+':
      printf("%f + %f = %f", first, second, first + second);
      break;
    case '-':
      printf("%f - %f = %f", first, second, first - second);
      break;
    case '*':
      printf("%f * %f = %f", first, second, first * second);
      break;
    case '/':
      printf("%f / %f = %f", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}