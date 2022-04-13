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
    return b ? "true" : "false";
}

using namespace csc232;

int main(void)
{
    // An integer array set to size 10
    ArrayStack<int> *arr = new ArrayStack<int>();
    string empty = BoolToString(arr->isEmpty());
    string full = BoolToString(arr->isFull());
    string popped = BoolToString(arr->pop());
    // string peeked = arr.peek();
    string pushed = BoolToString(arr->push(10));
    string still_empty = BoolToString(arr->isEmpty());
    string still_not_full = BoolToString(arr->isFull());
    int peeked_again = arr->peek();
    string popped_again = BoolToString(arr->pop());
    arr->push(10);
    arr->push(11);
    arr->push(12);
    arr->push(13);
    arr->clear();
    arr->push(10);
    arr->push(10);

    cout << "Should be true: " << empty << endl;
    cout << "Should be false: " << full << endl;
    cout << "Should be false: " << popped << endl;
    cout << "Should be true: " << pushed << endl;
    cout << "Should be false: " << still_empty << endl;
    cout << "Should be false: " << still_not_full << endl;
    cout << "Should be 10: " << peeked_again << endl;
    cout << "Should be true: " << popped_again << endl;

    ArrayStack<int> *trv = new ArrayStack<int>();
    while (trv)
    {
        cout << trv->peek() << endl;
        cout << trv->pop() << endl;
        // trv = trv->
    }

    return EXIT_SUCCESS;
}
