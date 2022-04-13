/**
 * @file main.cpp
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Program to simulate a client to the stacks.
 * @version 1.0
 * @date 2022-04-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <string>

#include "csc232.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @brief Assemble a string from the boolean input.
 *
 * Use of inline function suggested by StackOverflow user OJ at:
 * https://stackoverflow.com/questions/29383/converting-bool-to-text-in-c
 *
 * @param b The boolean value to judge.
 * @return const char* const String for "true" or "false".
 */
inline static const char* const BoolToString(bool b)
{
    return b ? "yes" : "no";
}

using namespace csc232;

int main(void)
{
    // An integer array set to size 10
    int arr[10];
    int a = 0;
    int b = 1;
    int c = 10;


    return EXIT_SUCCESS;
}
