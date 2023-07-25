/** 
	Q63 : How to detect stack corruption?
	A: stack corruption can be dectect with various tools. GDB is one the wisely use tools.
		The corrupt stack problem can be avoided by following some best practices in C and C++ programming. Here are a few tips to keep in mind −
		Always initialize variables − uninitialized variables can cause stack to become corrupt. Make sure to initialize all variables before using them.
		Be careful with pointers − pointers are powerful tools, but they can also cause stack to become corrupt. Make sure to properly initialize and manage all pointers to prevent memory leaks and invalid stack pointers.
		Use stack-safe functions − some functions, such as strcpy(), can cause buffer overflows. Use stack-safe functions, such as strncpy(), to avoid these issues.
		Use bounds checking − make sure to perform bounds checking on all arrays and buffers to prevent buffer overflows and stack corruption.
		Use memory-safe libraries − C and C++ have a wide range of memory-safe libraries, such as GSL and Boost. Consider using these libraries to prevent memory leaks and other memory-related issues.
	
	Q64 If stack corruption is happening how you can avoid them? Demonstrate using a program
	A: same as 63.
*/

