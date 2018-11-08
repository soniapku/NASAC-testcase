#ifndef __C1_H__
#define __C1_H__

#include <stdio.h>
#include "a_1.h" // bad: cyclic dependence

void test_function_A();
	
void test_function_C() {
	printf("C\n");
	test_function_A();
}

#endif
