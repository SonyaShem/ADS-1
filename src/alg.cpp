// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int count = 0;
  for(int i = 1; i <= value; i++){
    if(value % i == 0) { count++; }
  }
  if(count == 2) { return true; }
  else { return false; }
}

uint64_t nPrime(uint64_t n) {
  int row = 0;
  int num = 2;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2) { row++; }
    if (row == n) {
        return num;
        break;
    }
    num++;
  }
}

uint64_t nextPrime(uint64_t value) {
  int row = 0;
  int num = value + 1;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2) {
        return num;
        break;
    }
    num++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  int num = 2;
  int sum = 0;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2 && num < hbound) { sum += num; }
    if (num >= hbound) {
        return sum;
        break;
    }
    num++;
  }
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  int prev = -1;
  int num = lbound;
  int twins = 0;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2 && num < hbound) {
        if (num - prev == 2) { twins++; }
        prev = num;
    }
    if (num >= hbound) {
        return twins;
        break;
    }
    num++;
  }
}
// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int count = 0;
  for(int i = 1; i <= value; i++){
    if(value % i == 0) { count++; }
  }
  if(count == 2) { return true; }
  else { return false; }
}

uint64_t nPrime(uint64_t n) {
  int row = 0;
  int num = 2;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2) { row++; }
    if (row == n) {
        return num;
        break;
    }
    num++;
  }
}

uint64_t nextPrime(uint64_t value) {
  int row = 0;
  int num = value + 1;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2) {
        return num;
        break;
    }
    num++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  int num = 2;
  int sum = 0;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2 && num < hbound) { sum += num; }
    if (num >= hbound) {
        return sum;
        break;
    }
    num++;
  }
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  int prev = -1;
  int num = lbound;
  int twins = 0;
  while (true) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) { count++; }
    }
    if (count == 2 && num < hbound) {
        if (num - prev == 2) { twins++; }
        prev = num;
    }
    if (num >= hbound) {
        return twins;
        break;
    }
    num++;
  }
}
