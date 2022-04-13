/**
 * @file array_stack.cpp.
 * @author Josh Borthick (github.com/joshb019919).
 * @brief Implementations of ArrayStack (array_stack.h).
 * @version 1.0.
 * @date 2022-04-13.
 *
 * @copyright Copyright (c) 2022.
 *
 */

#include <stdexcept>
#include <iostream>
#include <string>
#include "array_stack.h"

namespace csc232
{
    template<typename T>
    ArrayStack<T>::ArrayStack() : top{-1}
    {
        // Empty
    }

    template<typename T>
    ArrayStack<T>::ArrayStack(const T& item) : array{item, 0}, top{-1}
    {}

    template<typename T>
    bool ArrayStack<T>::isFull() const
    {
        return top < SIZE - 1;
    }

    template<typename T>
    bool ArrayStack<T>::isEmpty() const
    {
        return top == -1;
    }

    template<typename T>
    bool ArrayStack<T>::push(const T& item)
    {
        bool pushed{false};
        if (!isFull())
        {
            ++top;
            array[top] = item;
            pushed = true;
        }

        return pushed;
    }

    template<typename T>
    bool ArrayStack<T>::pop()
    {
        bool popped{false};
        if (!isEmpty())
        {
            --top;
            popped = true;
        }

        return popped;
    }

    template<typename T>
    T ArrayStack<T>::peek() const
    {
        assert(!isEmpty());
        return array[top];
    }

    template<typename T>
    void ArrayStack<T>::clear()
    {
        top = -1;
    }
}
