#include <stdlib.h>
#include <stdio.h>
#include "fizzbuzz.h"

const char *fizzbuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        return "FizzBuzz";
    } else if (number % 3 == 0) {
        return "Fizz";
    } else if (number % 5 == 0) {
        return "Buzz";
    } else {
        static char result[5];
        snprintf(result, 5, "%d",number);
        return result;
    }
}