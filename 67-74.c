/**
	Q67: What is the stack overflow ?
	A: A stack overflow is a type of buffer overflow error that occurs when a computer program tries to use more memory space
	in the call stack than has been allocated to that stack. The call stack, also referred to as the stack segment, is a fixed-sized
	buffer that stores local function variables and return address data during program execution.
	Genrally 8Mb is deafult stack size for program. how ever stack size can change at run time using function "setrlimit()"
	
	Q68: What is the cause of the stack overflow?
	A: One of the most common causes of a stack overflow is the recursive function, 
	a type of function that repeatedly calls itself in an attempt to carry out specific logic.
	Each time the function calls itself, it uses up more of the stack memory. if function is called uncondition contol type stack overflow is observed.
	
	Q69: How you can access memory from hardware point. Demonstrate using program?
	A: To access memory from thr hardware point. program shall be running in kernal mode and program must know the address of regester ,and what they are use for.
		if unwated regester is access is may result into core dump, reset of mcu or in wore case damage of mcu.
		
		int main()
		{
			//
			#define REGESTER_XYZ  (void*)0x000002000
			
			char *reg; 
			
			reg = (char*)REGESTER_XYZ;
			
			prinf("%d",*reg);
		
		}
		
	Q70: What are the different addressing modes?
	A: In 8051 There are six types of addressing modes:
		1. Immediate AddressingMode:
			In this Immediate Addressing Mode, the data is provided in the instruction itself. The data is provided immediately after the opcode.
			These are some examples of Immediate Addressing Mode.
				MOVA, #0AFH;
				MOVR3, #45H;
				MOVDPTR, #FE00H;
		2. Register AddressingMode:
			In the register addressing mode the source or destination data should be present in a register (R0 to R7). These are some examples of RegisterAddressing Mode.
				MOV R5, 07H
		3. Direct AddressingMode:
			In the Direct Addressing Mode, the source or destination address is specified by using 8-bit data in the instruction. Only the internal data memory can be used in this mode.
			Here some of the examples of direct Addressing Mode.
				MOV80H, R6;
				MOVR2, 45H;
				MOVR0, 05H;
		4. Register IndirectAddressing Mode:
			In this mode, the source or destination address is given in the register. By using register indirect addressing mode, the internal or external addresses can be accessed.
			The R0 and R1 are used for 8-bit addresses, and DPTR is used for 16-bit addresses, no other registers can be used for addressing purposes.
			Let us see some examples of this mode.
				MOV0E5H, @R0;
				MOV@R1, 80H	
		5. Indexed AddressingMode:
			In the indexed addressing mode, the source memory can only be accessed from program memory only. The destination operand is always the register A.
			These are some examples of Indexed addressing mode.
				MOVCA, @A+PC;
				MOVCA, @A+DPTR;
		6. Implied AddressingMode:
			In the implied addressing mode, there will be a single operand. These types of instruction can work on specific registers only.
			These types of instructions are also known as register specific instruction. Here are some examples of Implied Addressing Mode.
				RLA;
				SWAPA;

	Q71: What are the different situation which results in memory corruptions and how do you overcome?
	A: There are three main types of memory errors that can cause 
	   the Memory corruption: accessing uninitiated, accessing out-of-bounds as well as accessing freed memories. 
	   Also, different software bugs can cause these errors.
	
	Q72:What is the difference between memcpy and memmove?
	A: The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.
	   
	   The memmove() function copies n bytes from memory area src to
       memory area dest.  The memory areas may overlap: copying takes
       place as though the bytes in src are first copied into a
       temporary array that does not overlap src or dest, and the bytes
       are then copied from the temporary array to dest.
	
	Q73: What are the different functions supported by Stack?
	A: The following are the basic operations served by stacks.
		* push : Adds an element to the top of the stack.
		* pop : Removes the topmost element from the stack.
		* isEmpty : Checks whether the stack is empty.
		* isFull : Checks whether the stack is full.
		* top : Displays the topmost element of the stack.
	
	Q74: How to access the fixed memory location in embedded C?
	A: 	following is the code to show to access the fixed memory location in embedded C.
		int main()
		{
			int readValue = 145;
			int *ptr = (int*) &readValue;
			printf("readValue using ptr = %d \n",*ptr);
		}
	
	
*/