/**
 * @file csc232.h
 * @author Josh Borthick (github.com/joshb019919)
 * @brief Each StackInterface extention is included here.
 * @version 1.0
 * @date 2022-04-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CSC232_COMMON_H_
#define __CSC232_COMMON_H_

#include <stdexcept>
#include <string>
#include <iostream>
#include "stack_interface.h"
#include "dnode.h"
#include "node_stack.h"
#include "array_stack.h"


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
