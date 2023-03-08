// Write a program to identify of the a number is positive or negative
#include <iostream>
using namespace std;
void prachi(int a) {
  if (a < 0) {
    cout << "Negative Number";

  } else if (a == 0) {
    cout << "Neither positive nor negative";

  } else {
    cout << "Positive number";
  }
}

int main() {
  // std::cout << "Hello World!\n";
  int k;
  cin >> k;
  prachi(k);
}