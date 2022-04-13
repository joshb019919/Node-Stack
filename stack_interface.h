/**
 * @file stack_interface.h
 * @author Josh Borthick (github.com/joshb019919)
 * @brief  Interface for the Stack class.
 * @version 1.0
 * @date 2022-04-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CSC232_STACK_INTERFACE_H_
#define __CSC232_STACK_INTERFACE_H_

namespace csc232
{
    template<typename T>
    class StackInterface
    {
        public:
        /**
         * @brief Pure virtual methods to be overwritten in the source file.
         *
         */
            virtual bool isEmpty() const = 0;
            virtual bool pop() = 0;
            virtual void clear() = 0;
            virtual ~StackInterface() = default;
    };

}
#endif  // __CSC232_STACK_INTERFACE_H_
