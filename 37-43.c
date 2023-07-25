/**
	Q37: Can we pass any parameter and return a value fromthe ISR
	A: The ISR returns nothing and does not allow passing any parameter. 
	   An ISR is called when a hardware or software event occurs, and the code does not call it. 
	   That's why no parameters are passed into an ISR. As the code does not call ISR, there is no calling code to 
	   read the returned values of the ISR.
	
	Q38: What is a static function?
	A: A static function in C is a function that has a scope that is limited to its file.
	
	Q39: What is an inline function?When do you use inline functions?
	A: An inline function is one for which the compiler copies the code from the function definition 
	   directly into the code of the calling function rather than creating a separate set of instructions in memory.
	   Inline functions are commonly used when the function definitions are small, and the functions are called several times in a program.
	
	Q40: What is a recursion function.?
	A: functions which calling itself are called recursion functions
	
	Q41: Can a pointer be returned from a function?
	A: yes,pointer can we return from the function, but before returing be sure retunr pointer should not be the refrecing to local variable of function.
		for example: 
		int* functionRetunIntPointer();
	
	Q42:Is it safe to call printf() inside Interrupt Service Routine?
	A: calling printf() in ISR will introduce many areas for potential problems. printf() is not reentrant so unless interrupts are disabled while calling it, it cannot be called from main code.
	
	Q43 How do you measure interrupt latency
	A: Interrupt latency is the time that elapses between the occurrence of an interrupt and the execution of the first instruction of the interrupt service routine (ISR) that handles the interrupt. 
	   It is a measure of the system’s ability to respond to external events in a timely manner. 
	   The shorter the interrupt latency, the more responsive the system will be. 
	   Interrupt latency is expressed in core clock cycles.
*/