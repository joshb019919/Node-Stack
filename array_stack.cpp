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

#include "array_stack.h"

namespace csc232
{
    /**
     * @brief Construct a new empty Array Stack<T>:: Array Stack object.
     *
     * top is set to -1 so each push can add correctly.
     *
     * @tparam T The type of array stack.
     */
    template<typename T>
    ArrayStack<T>::ArrayStack() : top{-1}
    {
        // Empty
    }

    /**
     * @brief Construct a new Array Stack< T>:: Array Stack object.
     *
     * @tparam T The type of the array stack.
     * @param item The first item in the stack.
     */
    template<typename T>
    ArrayStack<T>::ArrayStack(const T& item) : array{item, 0}, top{-1}
    {}

    /**
     * @brief Return whether the stack is full or not.
     *
     * @tparam T The stack's type.
     * @return true The stack is full.
     * @return false The stack is empty.
     */
    template<typename T>
    bool ArrayStack<T>::isFull() const
    {
        return top >= SIZE - 1;
    }

    /**
     * @brief Return whether the stack is empty or not.
     *
     * @tparam T The stack's type.
     * @return true The stack is empty.
     * @return false The stack is full.
     */
    template<typename T>
    bool ArrayStack<T>::isEmpty() const
    {
        return top == -1;
    }

    /**
     * @brief Add one item to the top of the stack.
     *
     * @tparam T The stack's and item's type.
     * @param item The item to add.
     * @return true An item was added.
     * @return false The stack was already full.
     */
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

    /**
     * @brief Remove one item from the top of the stack.
     *
     * @tparam T The type of the stack.
     * @return true An item was removed.
     * @return false The stack was already empty.
     */
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

    /**
     * @brief Reveal the the item in the node at the top of the stack.
     *
     * @tparam T The type of the stack.
     * @return T The item of type T
     */
    template<typename T>
    T ArrayStack<T>::peek() const
    {
        if (isEmpty())
        {
            return T{};
        }
        return array[top];
    }

    /**
     * @brief Empty the stack.
     *
     * @tparam T The stack's type.
     */
    template<typename T>
    void ArrayStack<T>::clear()
    {
        top = -1;
    }
}
