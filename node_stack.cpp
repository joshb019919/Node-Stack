/**
 * @file node_stack.cpp
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Node-chain specific stack implementations (node_stack.h).
 * @version 1.0
 * @date 2022-04-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "node_stack.h"

namespace csc232
{
    /**
     * @brief Construct a new empty Node Stack< T>:: Node Stack object.
     *
     * @tparam T The stack's type.
     */
    template<typename T>
    NodeStack<T>::NodeStack() : headptr{nullptr}, empty{true}
    {
    }

    /**
     * @brief Add one node to the node stack.
     *
     * This will always return true.
     *
     * @tparam T The stack's type.
     * @param node The doubly linked node to add.
     * @return true The node was added.
     */
    template<typename T>
    bool NodeStack<T>::push(DoublyLinkedNode<T> *node)
    {
        node->SetNext(headptr);

        if (!empty)
        {
            headptr->SetPrev(node);
        }

        headptr = node;
        empty = false;

        return true;
    }

    /**
     * @brief Remove one node from the top of the stack.
     *
     * @tparam T The stack's type.
     * @return true The node was removed.
     * @return false The stack was already empty.
     */
    template<typename T>
    bool NodeStack<T>::pop()
    {
        bool isRemoved{false};

        if (!empty)
        {
            DoublyLinkedNode<T> *tmp = headptr;

            headptr = headptr->GetNext();

            delete tmp;
            tmp = nullptr;
            isRemoved = true;

            empty = headptr->GetNext() ? false : true;
        }

        return isRemoved;
    }

    /**
     * @brief Return whether the stack is empty.
     *
     * @tparam T The stack's type.
     * @return true The stack is empty.
     * @return false The stack is not empty.
     */
    template<typename T>
    bool NodeStack<T>::isEmpty() const
    {
        return empty;
    }

    /**
     * @brief Reveal the item in the first stack's
     *
     * @tparam T The stack's type.
     * @return DoublyLinkedNode<T>*
     */
    template<typename T>
    T NodeStack<T>::peek() const
    {
        if (empty)
        {
            return T{};
        }

        return headptr->GetItem();
    }

    /**
     * @brief
     *
     * @tparam T The stack's type.
     * @param node
     * @return T
     */
    template<typename T>
    T NodeStack<T>::GetItem(const DoublyLinkedNode<T> *node) const
    {
        return node->GetItem();
    }

    /**
     * @brief Empty the stack
     *
     * @tparam T The stack's type.
     */
    template<typename T>
    void NodeStack<T>::clear()
    {
        while (!empty)
        {
            pop();
        }
    }

    template<class T>
    NodeStack<T>::~NodeStack()
    {
        while (!empty)
        {
            pop();
        }
    }
}
