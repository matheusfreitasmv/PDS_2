#include <iostream>
#include <assert.h> 
#include "RingArray.h"

void fer_assert(const bool expr, const char* msg) {
  if (!expr) {
    std::cout << msg << std::endl;
    exit(1);
  }
}

template <class T, unsigned N>
void RingArray<T, N>::add(T value) {  
  // TODO: implement this method.
 // assert(_last >= 0 && _last < N);  //checar antes de colcoar
  if(isFull() ){
    std::cout << "Erro: anel cheio.";
    exit(1);
  }
  buf[_last] = value;
  _last++;
}

template <class T, unsigned N>
T RingArray<T, N>::get() {
  // TODO: implement this method.
  //assert(_last >= 0 && (_last - 1)< N);
  if(isEmpty()) {
    std::cout << "Erro: anel vazio.";
    exit(1);
  }
  unsigned aux = _first;
  _first++;
  return buf[aux];
}

template <class T, unsigned N>
bool RingArray<T, N>::isFull() const {
  // TODO: implement this method.
  if((_last +1) >= N) {
    return true;
  }
  return false;
}

template <class T, unsigned N>
bool RingArray<T, N>::isEmpty() const {
  // TODO: implement this method.
  if(_first >= (_last + 1) ) {
    return true;
  }
  return false;
}

template <class T>
void test_add_then_get() {
  RingArray<T, 8> r;
  T value;
  while (std::cin >> value) {
    r.add(value);
  }
  while (!r.isEmpty()) {
    std::cout << r.get() << std::endl;
  }
}

template <class T>
void test_add_or_get() {
  RingArray<T, 8> r;
  T value;
  char c;
  while (std::cin >> c) {
    if (c == '+') {
      std::cin >> value;
      r.add(value);
    } else if (c == '-') {
      std::cout << r.get() << std::endl;
    } else {
      std::cout << "Invalid operation\n";
    }
  }
}

int main () {
  char data;
  while (std::cin >> data) {
    switch (data) {
      case 'd': test_add_then_get<double>();
                break;
      case 's': test_add_then_get<std::string>();
                break;
      case 'D': test_add_or_get<double>();
                break;
      case 'S': test_add_or_get<std::string>();
                break;
      default: std::cout << "Invalid type\n";
    }
  }
  return 0;
}