//
//  Created by Sergio Martin Rubio on 21/06/2020.
//  Copyright © 2020 Sergio Martin Rubio. All rights reserved.
//
// Design a program that finds all numbers from 1 to 1000 whose prime factors,
// when added together, sum up to a prime number.
//

#include <iostream>

using namespace std;

int get_prime_factors_sum(int number);
int is_prime_number(int number);

int main () {
    
    for (int i = 1; i <=1000; i++) {
        int prime_factors_sum = get_prime_factors_sum(i);
        if (is_prime_number(prime_factors_sum)) {
            cout << i << "\n";
        }
    }
}

int get_prime_factors_sum(int number) {
    int factor = 2;
    int sum = 0;
    
    while (number > 1) {
        if(number % factor == 0) {
             sum += factor;
            number /= factor;
        } else {
            factor++;
        }
    }
    
    return sum;
}

int is_prime_number(int number) {
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
