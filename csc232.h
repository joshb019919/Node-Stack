#ifndef __CSC232_COMMON_H_
#define __CSC232_COMMON_H_

#include "stack_interface.h"
#include "dnode.h"
#include "node_stack.h"
#include "array_stack.h"

#include <stdexcept>
#include <string>

class NullHeadException : public std::logic_error
{
    public:
    explicit NullHeadException()
        : std::logic_error("Node stack is empty.\n")
        {
        }
};

void ThrowNullHeadException()
{
    throw NullHeadException();
}

#endif  // __CSC232_COMMON_H_
