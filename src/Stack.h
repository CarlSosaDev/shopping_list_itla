/*
 * Stack.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef STACK_H_
#define STACK_H_
#include "Element.h"
class Stack
{
	private:
		Element* _last;
	public:
		void push(Element*);
		Element* pop();
		Stack();
};

#endif /* STACK_H_ */
