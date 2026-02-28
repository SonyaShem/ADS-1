// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  uint64_t count = 0;
  for (uint64_t i = 1; i <= value; i++) {
    if (value % i == 0) {
      count++;
    }
  }
  if (count == 2) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  uint64_t row = 0;
  uint64_t num = 2;
  while (true) {
    uint64_t count = 0;
    for (uint64_t i = 1; i <= num; i++) {
        if (num % i == 0) {
          count++;
        }
    }
    if (count == 2) {
      row++;
    }
    if (row == n) {
        return num;
    }
    num++;
  }
}

uint64_t nextPrime(uint64_t value) {
  uint64_t num = value + 1;
  while (true) {
    uint64_t count = 0;
    for (uint64_t i = 1; i <= num; i++) {
        if (num % i == 0) {
          count++;
        }
    }
    if (count == 2) {
        return num;
    }
    num++;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t num = 2;
  uint64_t sum = 0;
  while (true) {
    uint64_t count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
          count++;
        }
    }
    if (count == 2 && num < hbound) {
      sum += num;
    }
    if (num >= hbound) {
        return sum;
    }
    num++;
  }
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  uint64_t prev = 2;
  uint64_t num = lbound;
  uint64_t twins = 0;
  while (true) {
    uint64_t count = 0;
    for (uint64_t i = 1; i <= num; i++) {
        if (num % i == 0) {
          count++;
        }
    }
    if (count == 2 && num < hbound) {
        if (num - prev == 2) {
          twins++;
        }
        prev = num;
    }
    if (num >= hbound) {
        return twins;
    }
    num++;
  }
}
