#include <cstring>

#include "big_data_int.h"

int main() {
  cout << "please input two numbers:" << endl;
  string s_a, s_b;
  cin >> s_a;
  cin >> s_b;

  cout << "Please input the operator(+,-,*,/,%):" << endl;
  string op;
  cin >> op;

  big_data_int a(s_a), b(s_b), c;

  char* buf = new char[s_a.length()];

  memcpy(buf, s_a.c_str(), s_a.length());

  switch (op.c_str()[0]) {
    case '+':
      c = a + b;
      break;
    case '-':
      c = a - b;
      break;
    case '*':
      c = a * b;
      break;
    case '/':
      c = a / b;
      break;
    case '%':
      c = a % b;
      break;
    default:
      cout << "Wrong operator input" << endl;
      return -1;
  }

  cout << "Result is:" << endl << c.data() << endl;

  return 0;
}