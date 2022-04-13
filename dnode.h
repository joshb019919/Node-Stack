/**
 * @file dnode.h
 * @author your name (you@domain.com)
 * @brief The DoublyLinkedNode header file.
 *
 * @note DoublyLinkedNode implementations in dnode.cpp in src directory.
 *
 * @version 1.0
 * @date 2022-03-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CSC232_DOUBLY_LINKED_NODE_H_
#define __CSC232_DOUBLY_LINKED_NODE_H_

/**
 * @brief DoublyLinkedNode class template.
 *
 * @note I had originally declared a virtual interface class which this
 * @note class extended, but the tests were not designed to work with
 * @note interfaces and was throwing lots of errors.
 *
 * @details Linked chain of nodes with an item, a pointer to the next
 * @details node, and a pointer to the previous node.  Next and prev
 * @details pointers are nullptr by default.
 *
 */
namespace csc232
{
    template <class T>
    class DoublyLinkedNode
    {
    private:
        T item;
        DoublyLinkedNode<T> *next;
        DoublyLinkedNode<T> *prev;

    public:
        explicit DoublyLinkedNode(const T &node_item = T{},
                                  DoublyLinkedNode<T> *prev = nullptr,
                                  DoublyLinkedNode<T> *next = nullptr);
        void SetItem(const T &node_item);
        void SetPrev(DoublyLinkedNode<T> *dnode_ptr);
        void SetNext(DoublyLinkedNode<T> *dnote_ptr);
        T GetItem() const;
        DoublyLinkedNode<T> *GetPrev() const;
        DoublyLinkedNode<T> *GetNext() const;
    };
}
#include "dnode.cpp"

#endif // __CSC232_DOUBLY_LINKED_NODE_H_
