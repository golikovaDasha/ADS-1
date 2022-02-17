// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value < 2) {
  return false;
}
if (value == 2) {
  return true;
}
for (int i = 2; i <= sqrt(value); i++) {
  if (value % i == 0) {
     return false;
}
}
return true;
}
uint64_t k = 0;
uint64_t nPrime(uint64_t n) {
while (n != 0) {
  if (checkPrime(k) == true) {
     k++;
     return nPrime(n - 1);
}
k++;
return nPrime(n);
}
return k - 1;
}

uint64_t nextPrime(uint64_t value) {
while (1) {
int c = 1;
value++;
for (int i = 2; i <= value; i++) {
  if (value % i == 0) {
     c++;
   }
}

if (c == 2) {
  return value;
   }
}


uint64_t sumPrime(uint64_t hbound) {
uint64_t m = 0;
for (int i = 0; i < hbound; i++) {
  if (checkPrime(i)) {
     m += i;
    }
  }
return m;
}
