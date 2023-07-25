/**
	Q87: How preprocessors work. What are the standard preprocessors available as a part of standard C library. How preprocessors are taken into care during compilation.
	A:  The preprocessors are the directives, which give instructions to the compiler to preprocess the information before actual compilation starts.
		All preprocessor directives begin with #, and only white-space characters may appear before a preprocessor directive on a line.
		During the compilation stages we have 1 stage as pre-processors at this stage all preprocessors defincation / code replace / condition compling happended.
		
		pre-processors -> compiler -> assmbler -> linker -> loader
	
		The standard preprocessors available : 
		
		#define			Used to define a macro
		#undef 			Used to undefine a macro
		#include 		Used to include a file in the source code program
		#ifdef 			Used to include a section of code if a certain macro is defined by #define
		#ifndef			Used to include a section of code if a certain macro is not defined by #define
		#if				Check for the specified condition
        #else			Alternate code that executes when #if fails
		#elif			Alternate condition that executes when #if fails
		#endif 			Used to mark the end of #if, #ifdef, #elif and #ifndef
		#pragma			Used to provide the additional information to the compiler
		
	
*/