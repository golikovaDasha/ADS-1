// Copyright 2022 NNTU-CS
#include <cstdint>
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
int k = 0;
for (int i = 2; ; i++) {
  if (checkPrime(i)) {
     k += 1;
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
int sum = 0;
for (int i = 2; i < hbound; i++) {
  if (checkPrime(i)) {
     sum += i;
    }
  }
return sum;
}
