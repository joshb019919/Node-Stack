/**
 * @file array_stack.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-04-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "stack_interface.h"

#ifndef __ARRAY_STACK_CUSTOM_
#define __ARRAY_STACK_CUSTOM_

namespace csc232
{
    template<typename T>
    class ArrayStack : public StackInterface<T>
    {
        private:
        static const int SIZE = 10;
        T array[SIZE];
        int top;

        public:
            explicit ArrayStack();
            explicit ArrayStack(const T& item);
            bool isFull() const;
            bool isEmpty() const override;
            bool push(const T& item);
            bool pop() override;
            T peek() const : throw ;
            void clear() override;
    };
}

#include "array_stack.cpp"

# endif // __ARRAY_STACK_CUSTOM_
