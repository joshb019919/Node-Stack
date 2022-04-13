/**
 * @file dnode.cpp
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Implementations for DoublyLinkedNode class.
 * @version 1.0
 * @date 2022-03-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "dnode.h"

namespace csc232
{
    /**
     * @brief Construct a new Doubly Linked Node< T>:: Doubly Linked Node object.
     *
     * @tparam T The item type.
     * @param node_item The item to store in the node.
     * @param prev Pointer to the previous node.
     * @param next Pointer to the next node.
     */
    template <typename T>
    DoublyLinkedNode<T>::DoublyLinkedNode(const T &node_item,
                                          DoublyLinkedNode<T> *prev,
                                          DoublyLinkedNode<T> *next)
        : item{node_item}, next{next}, prev{prev}
    {
    }

    /**
     * @brief Get the item in the node.
     *
     * @tparam T The item's type.
     * @return T The item of item type T.
     */
    template <typename T>
    T DoublyLinkedNode<T>::GetItem() const
    {
        return item;
    }

    /**
     * @brief Get the pointer to the previous node.
     *
     * @tparam T The node's type.
     * @return DoublyLinkedNode<T>* The pointer to the previous node.
     */
    template <typename T>
    DoublyLinkedNode<T> *DoublyLinkedNode<T>::GetPrev() const
    {
        return prev;
    }

    /**
     * @brief Get the pointer to the next node.
     *
     * @tparam T The node's type.
     * @return DoublyLinkedNode<T>* The pointer to the next node.
     */
    template <typename T>
    DoublyLinkedNode<T> *DoublyLinkedNode<T>::GetNext() const
    {
        return next;
    }

    /**
     * @brief Store an item in the node, overwriting any previous item.
     *
     * @tparam T The item's and node's type.
     * @param node_item The item to store in the node.
     */
    template <typename T>
    void DoublyLinkedNode<T>::SetItem(const T &node_item)
    {
        item = node_item;
    }

    /**
     * @brief Set the next pointer to a different node.
     *
     * @tparam T The node's type.
     * @param dnode_ptr The node that next should point to.
     */
    template <typename T>
    void DoublyLinkedNode<T>::SetNext(DoublyLinkedNode<T> *dnode_ptr)
    {
        next = dnode_ptr;
    }

    /**
     * @brief Set the prev pointer to a different node.
     *
     * @tparam T The node's type.
     * @param dnode_ptr The node that prev should point to.
     */
    template <typename T>
    void DoublyLinkedNode<T>::SetPrev(DoublyLinkedNode<T> *dnode_ptr)
    {
        prev = dnode_ptr;
    }
}
