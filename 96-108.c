/**
	Q96: Where string is stored?
	A: string litreal are acutlly data/text which are store in the data section.
	   container which point/stored string can be strored in various section depend on the stroage type of c.
	   
	Q97: Static variable defined in a header file, and this header file is included in 2 different files, what will happen? How to modify a static variable from other file.
	A: if a static variable in heaader file is defined and got include in multiple files. this mean multiple decation of that static variable is done, which created ambiqity for compiler which variable is which thus comipler throw comipler error. 
	   to avoid this preprocess(#ifdef) and extern storage type can be used.
	   
	Q98: What happens if the same static variable is intialliaze in 2 different files.   
	A: same as Q97
	
	Q99:What is the difference between Local, global and static variables.
	A: Local variable also called as auto variable scope of these variable lies within the block. memory assign to local vaiable in start of block and  relase at end of block.
	   Global vaiable store in the data section of program. scope of these vaiable start with the program and end after end of program. they can access at any point in life cycle of a program
	   static vaiable are also store in the data section of program. scope of these vaiable start with the program and end after end of program.they can be access only with in the obj file of program where they are intialliaze/decated ;
	
	Q100: What is the difference between const & const volatile. When do we use const and const volatile used?
	A: The const keyword specifies that the pointer cannot be modified after initialization; the pointer is protected from modification thereafter.
       The volatile keyword specifies that the value associated with the name that follows can be modified by actions.
	   Genrally  in embedded  const volatile are use to pointer which refer the hardware regertor.
	   
	Q101: What is the precedence of variables if local, static and global variable has the same name (Example – int var)
	A: refer Q99
		
		for eq:
		
			int var; //global variable
			int main()
			{
				{
					int var //local vaiable
					var = 10; //local vaiable is update
					printf("var = %d &var = %p\n",var,&var);
				}
				
				var  = 100; //global variable is update
				printf("var = %d &var = %p\n",var,&var);
				{
					static int var;
					
					var =20; //local static vaiable is update
					printf("var = %d &var = %p\n",var,&var);
				}
				
				var  = 50; //global variable is update
				printf("var = %d &var = %p\n",var,&var);
				
			}
		
	Q102: What is constant and volatile? When do we use constant and volatile in embedded programing?
	A: refer Q100
		
	Q103: What is a register variable. When do we need to use register variable
	A: some variables are access very frequenty. Register is a keyword in C which suggests the system to use register as a memory
	for a variable instead of RAM. This accelerates the reading and writing of memory and enhances the overall performance.

	Q104: What is interrupt latency?
	A: The term interrupt latency refers to the delay between the start of an Interrupt Request (IRQ) and the start of the respective Interrupt Service Routine (ISR). 
	
	Q105: How do you measure interrupt latency?
	A: interrupt latency is measure in the mcu clock cycle.
	
	Q106: What is a nested interrupt?
	A: Nested interrupt handling is where the software is prepared to accept another interrupt, even before it finishes handling the current interrupt. this is allowed to serve the high proirty interrupt.
	
	Q107: Explain the interrupt execution sequence?
	A: When an I/O device completes an I/O operation, the below sequence of hardware events takes place: 
		1. The device issues an interrupt signal to processor.
		2. Processor completes execution of current instruction before responding to interrupt.
		3. Processor tests for interrupts and sends an acknowledgement signal to device that issued the interrupt.
		4. The minimum information needed to be stored for task being currently executed before CPU starts executing interrupt routine (using its registers) are: 
			(a) Status of processor that is contained in register known as program status word (PSW), and
			(b) Location of next instruction to be executed, of currently executing program that is contained in program counter (PC).
		5. Processor now loads PC with entry location of interrupt-handling program which will respond to this interrupting condition. Once PC has been loaded, processor proceeds to execute next instruction,
		which is the next instruction cycle that begins with an instruction fetch. Since the instruction fetch is determined by contents of the PC, result is that control is transferred to interrupt-handler program. The execution results in the subsequent operations:
		6. PC & PSW relating to interrupted program have already been saved on system stack. Additionally the contents of processor registers are also needed to be saved on stack which are used by called Interrupt Servicing Routine since these registers may be modified by interrupt-handler.
		below Figure displays a simple illustration. Here a user program is interrupted after instruction at location N. Contents of all of registers and address of next instruction (N+1) are pushed on to stack.
		7. Interrupt handler next processes interrupt. This involves determining of event which caused the interrupt and also status information relating to I/O operation.
		8. When interrupt processing is finish, saved register values are retrieved from stack and restored to registers that are displayed in Figure (b).
		9. Final step is to restore values of PSW and PC from stack. Consequently the instruction to be executed will be from previously interrupted program.
		
		
		|----------|	  |----------|	
		|Interrupt |	  |	current  |		 save current 		 load ISR		  save process 							restore old 
		|signal    |	  |instrution|		 process PWD & ===>  address	===>  state info    ===> process IRQ ===> 	process state	===> restored old pwd and PC
		|given to  |====> |completes | ===>  PC in stack		 to PC													information
		|processor |	  |	         |       memory
		|----------|      |----------|   
	
	Q108: Can a variable be both constant and volatile in C?
	A: yes, in C specifies in embedded system a vaiable can be constant and volatile at once. gernally pointer which access hardware register are decdared as const volatile.
	

*/