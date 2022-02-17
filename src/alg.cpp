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
uint64_t nPrime(uint64_t n) {
uint64_t k = 0;
for (int i = 0; ; i++) {
  if (checkPrime(i)) {
     k++;
     if (k == n) {
       return i;
    }
    }       
  }
}

uint64_t nextPrime(uint64_t value) {
for (int i = value + 1; ; i++) {
  if (checkPrime(i)) {
     return i;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
int l = 0;
int m = 0;
while (l < hbound) {
  if (checkPrime(l)) {
     m += l;
}
l++;
}
return m;
}
