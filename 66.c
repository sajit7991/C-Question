/**
	Q: Explain memory layout in C and how different variables are stored. What is reason for initializing and not initializing variables in memory
	A:	A typical memory representation of a C program consists of the following sections.
		1. Text segment  (i.e. instructions)
		2. Initialized data segment 
		3. Uninitialized data segment  (bss)
		4. Heap 
		5.Stack 
		
		|---------------------------------------|	Higher address
		|			Commands Line Argrument		|
		|---------------------------------------|	=====|
		|			Stack						|		 |
		|				|						|		 |
		|				|						|		 |		Dynaminc
		|				|						|		 |====>	Memory
		|				V						|		 |		Layout
		|---------------------------------------|		 |
		|				^						|		 |
		|				|						|		 |
		|		HEAP	|						|	=====|   
		|---------------------------------------|
		|		Uninitialized data segment		|
		|---------------------------------------|
		|		Initialized data segment 		|
		|---------------------------------------|
		|		text/code sections				|	
		|---------------------------------------|	Lower Address
		
				
		1. Text Segment:
			After we compile the program, a binary file generates, which is used to execute our program by loading it into RAM. This binary file contains instructions,
			and these instructions get stored in the text segment of the memory.
			Text segment has read-only permission that prevents the program from accidental modifications.
			Text segment in RAM is shareable so that a single copy is required in the memory for frequent applications like a text editor, shells, etc.
		2. Initialized data segment
			Initialized data segment or data segment is part of the computer's virtual memory space of a C program that contains values of all external, global, static,
			and constant variables whose values are initialized at the time of variable declaration in the program. Because the values of variables can change during program execution,
			this memory segment has read-write permission. We can further classify the data segment into the read-write and read-only areas. const variable comes under the read-only area.
			The remaining types of variables come in the read-write area.
			For example,
				const hello* = "Data segment";
			Here, the pointer variable hello comes under the read-write area, and the value of the string literal "Data segment" lies comes under initialized read-only data segment.
		3. Uninitialized data segment
			An uninitialized data segment is also known as bss (block started by symbol). The program loaded allocates memory for this segment when it loads. Every data in bss is
			initialized to arithmetic 0 and pointers to null pointer by the kernel before the C program executes. BSS also contains all the static and global variables, initialized
			with arithmetic 0. Because values of variables stored in bss can be changed, this data segment has read-write permissions.
		4. Heap
			Heap is used for memory which is allocated during the run time (dynamically allocated memory). Heap generally begins at the end of bss segment and, they grow and shrink
			in the opposite direction of the Stack. Commands like malloc, calloc, free, realloc, etc are used to manage allocations in the heap segment which internally use sbrk and
			brk system calls to change memory allocation within the heap segment. Heap data segment is shared among modules loading dynamically and all the shared libraries in a process.
		5. Stack
			The stack segment follows the LIFO (Last In First Out) structure and grows down to the lower address, but it depends on computer architecture. Stack grows in the direction opposite
			to heap. Stack segment stores the value of local variables and values of parameters passed to a function along with some additional information like the instruction's return address,
			which is to be executed after a function call.
			default 8Mb is set as stacksize. but by using setrlimit() stack size can we change at run time. 

*/







