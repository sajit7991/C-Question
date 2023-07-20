/**
	Q20: Explain the different Stages of compilation
	A: The compilation process can be divided into four stages:
		1. Pre-processing
			A "hello.c" file is pass to pre-processing where all pre-processor like typedef, macro etc are resolve. output of Pre-processing is "hello.i" file.
			gcc flag : gcc -Wall -E hello.c > hello.i
		2. Compiling
			After Pre-processing hello.i file will go to compilation satge.here compiler converts hello.i file into assembly code which is hello.s
			gcc flag : gcc -Wall -S hello.c
		3. Assembling
			here assembly code is converted into object (obj/.o) file.
			gcc flag : gcc -Wall -c hello.c
		
		4. Linking.
			linker will combine the object code of library files(.lib/.a/.so) with the object code(.o) of our program. outputfile will be hello.exe/ hello.out
			
		
		NOTE: to save all intermide files while compilation use 
			"gcc -save-temps hello.c"
		

	Q21: When do you get compilation error?
	A: Compilation error refers to a state when a compiler fails to compile a piece of computer program source code, either due to errors in the code, or, 
		more unusually, due to errors in the compiler itself. A compilation error message often helps programmers debugging the source code.

	Q22: When do you get linking error?
	A: Linker errors occur when the linker is trying to put all the pieces of a program together to create an executable, and one or more pieces are missing. 
		Typically, this can happen when an object file or libraries can't be found by the linker. 

	Q23:What is the difference between Segmentation fault and Bus error?
	A Segmentation Fault : occur when the program tries to write/read outside the memory allocated for it or when writing memory which can only be read.
		In other words when the program tries to access the memory to which it doesn’t have access to. 
	  Bus Error : occur when a process is trying to access memory that the CPU cannot physically address.
		In other words the memory tried to access by the program is not a valid memory address

	Q24: What happens if the same external variable is declared in multiple c file?
	A: if same global variable is declared in multiple c file linking error will occour. linker will not able to diffeace between multiple same name variable.
	
	Q25 Why makefile is used?
	A Makefile is a set of commands (similar to terminal commands) with variable names and targets to create object file and to remove them. 
	In a single make file we can create multiple targets to compile and to remove object, binary files. You can compile your project (program) any number of times by using Makefile

*/