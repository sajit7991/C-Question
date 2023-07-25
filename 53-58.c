/**
	Q53: What are the different Modifiers and qualifiers in C?
	A: modifier in c are:
		long ,short,unsigned,signed
	   qualifiers in c are :
	   const, volatile ,restrict ,_Atomic
	
	Q54: infinite loops often arise in embedded systems. How do you write an infinite loop in C?
	A: 	infinite loops  after use in embedded system as per use cases.
		for example:
		
			int main()
			{
				//	using while loop
					while(1)
					{
						//do something
					}
					
				//	using for loop
					for(;;)
					{
						//do something
					}
				
			}
		
	Q55 infinite loops often arise in embedded systems. How do you code an infinite loop?
	A: Same as 54.
	
	Q56 Which loop is better FOR or WHILE loop? Which one is more efficient? How do you decide which loop to use?
	A: it's not abt the which loop is better is depend on use case. any logic can be build using any loop. we often use for loop when we kwon the breaking condition while while loop is ofter use when w don't know the breaking condition
	
	
	Q57 How Macros work. What are the standard macros available as a part of standard C library. How macros are taken into consideration during compilation?
	A: Macro in c is defined by the #define directive. Macro is a name given to a piece of code, so whenever the compiler encounters a macro in a program, it will replace it with the macro value.
	   some standard macro are : __LINE__ , __func__ , __FILE__ , __DATE__ , etc
	   Macro are resolve in pre processor stage.
	
	Q58 Is it wise to have multi-line Macros? Under what circumstances multi-line macros to be used? 
	A: We can write multiline macros like functions, but for macros, each line must be terminated with backslash '\' character.
	   for small part of code to avoid  the stack creation for each funtion call multiline macro are use.
	   
	  
	
*/