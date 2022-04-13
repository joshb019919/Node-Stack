/**
 * @file node_stack.h
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Node-chain specific stack class.
 * @version 1.0
 * @date 2022-04-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CSC232_NODE_STACK_H_
#define __CSC232_NODE_STACK_H_

#include "stack_interface.h"
#include "dnode.h"

namespace csc232
{
    template<typename T>
    class NodeStack : public StackInterface<T>
    {
        private:
            DoublyLinkedNode<T>* headptr;
            bool empty;
        public:
            NodeStack();
            bool isEmpty() const override;
            DoublyLinkedNode<T>* peek() const;
            bool pop() override;
            bool push(DoublyLinkedNode<T> *node);
            void clear() override;
            T GetItem(const DoublyLinkedNode<T> *node) const;

    };
}

#include "node_stack.cpp"

#endif  // __CSC232_NODE_STACK_H_
