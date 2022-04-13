/**
 * @file node_stack.cpp
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Node-chain specific stack implementation.
 * @version 1.0
 * @date 2022-04-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdexcept>
#include "node_stack.h"

namespace csc232
{
    template<typename T>
    NodeStack<T>::NodeStack() : headptr{nullptr}, empty{true}
    {
    }

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

    template<typename T>
    bool NodeStack<T>::isEmpty() const
    {
        return empty;
    }

    template<typename T>
    DoublyLinkedNode<T>* NodeStack<T>::peek() const
    {
        try
        {
            return headptr->GetItem();
        }
        catch(const std::exception& e)
        {
            throw ThrowNullHeadException();
        }

    }

    template<typename T>
    T NodeStack<T>::GetItem(const DoublyLinkedNode<T> *node) const
    {
        return node->GetItem();
    }

    template<typename T>
    void NodeStack<T>::clear()
    {
        while (!empty)
        {
            pop();
        }
    }
}
