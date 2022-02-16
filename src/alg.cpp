// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    // вставьте код функции
for (int i = 2; i < value; i++) {
  if (value % i == 0) {
    return false;
}

}
return true;
}
int k = 2;
uint64_t nPrime(uint64_t n) {
    // вставьте код функции
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
    // вставьте код функции
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
}
int m = 0;
uint64_t sumPrime(uint64_t hbound) {
    // вставьте код функции
while (hbound != 0) {
int c = 1;
hbound--;
for (int i = 2; i <= hbound; i++) {
   if (hbound % i == 0) {
     c++;
     }
}
if (c == 2) {
  m += hbound;
  return sumPrime(hbound);
        }
    }
return m;
}
