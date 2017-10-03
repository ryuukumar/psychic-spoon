#include <iostream>
using namespace std;

int add(int a, int b) {
  return a+b;
}

int main() {
  cout << "Copyright 2017 Aditya Kumar.\nSome rights reserved.\n\n\n";
  int no, nt;
  cout << "Number 1: ";
  cin >> no;
  cout << "Number 2: ";
  cin >> nt;
  cout << "Sum: " << add(no,nt) << ".\n";
}
