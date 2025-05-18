// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 18th, 2025
// Max number in array program in c++

#include <iostream>
#include <random>
#include <string>

int getMaxValue(int array[10]) {
    // Initialize max
    int max = 0;

    // Compare each element to max and update it to be the larger number
    for (int counter = 0; counter < 10; counter++) {
        if (array[counter] > max) {
            max = array[counter];
        }
    }

    // Return max
    return max;
}

int main() {
    // Initialize seed and array
    unsigned int seed = time(0);
    int array[10];

    // Append and display random numbers 1-99 10 times
    for (int counter = 0; counter < 10; counter++) {
        int random_number = (rand_r(&seed) % 100) + 1;
        std::cout << "Added " << random_number << " to the array!\n";
        array[counter] = random_number;
    }

    // Set max to function call passing through array and display it
    int max = getMaxValue(array);
    std::cout << "The largest number in your array was " << max;
}
