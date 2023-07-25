/**
	Q116 What is the advantage and disadvantage of using a Union over Structure?
	A: Structure and union both are the user defined data type. key diffreance in structre and union is, in structre all data member will get the separate memory
	  location,while in union a comman memory location is shared. both structre and Union have they diffrent property and diffrent uses. so taling abt the advantage and disadvantage doesn't make any sense.
	  
	Q117 In structure members are int, char and static float. Where the object is stored in memory of a static object?
	A: In C defining static data member in structre is not valid. this is comipled time error. where else in Cpp static data member in structure are allowed and stored in the data segection(bss).

	Q118 Explain Structure with padding and non-padding?
	A Structure padding is defined as the process of adding one or more empty bytes between the different data types to align data in memory.
	  to avoid the Structure padding using "#pragma pack(1)" or "__attribute__((packed))"

	Q119 What happens if we use float as a part of switch case?
	A we can't use float as a switch case becouse only interger Value are allowed as switch case.
	
	Q120 What is the significance of Break and Continue?
	A both break and Continue are the control statment for control loop.
		break is use to break and came out of the loop.
		while Continue is use to skip the perticular itration of the loop.

	Q121 What are the different attributes that can be used in switch statement?
	A 	Rule for switch 
	  1. The switch expression must be of an integer or character type.
	  2. The case value must be an integer or character constant.
	  3. The case value can be used only inside the switch statement.
	  4. The break statement in switch case is not must. It is optional. If there is no break statement found in the case,
	  all the cases will be executed present after the matched case. It is known as fall through the state of C switch statement.

	Q122 What are the debugging tools you have been used?
	A : Debugging Tools: There are various tools available for debugging such as debuggers, trace tools, and profilers that can be used to identify and resolve bugs.
		For c/cpp gbd is one of the power full tool to debugging.
		
	Q123 Is it wise to use typecast? Is there any disadvantage of using typecast.
	A: Type casting is the process in which the compiler automatically converts one data type in a program to another one. Type conversion is another name for type casting. 
	   The two types of type casting in C are:
		* Implicit Typecasting.
		* Explicit Typecasting.
	hierarchy of typecast:
		int-> unsigned int-> long -> unsigned long-> long long-> unsigned long long-> float-> double ->long double.
	if Explicit typecast is used not wisely it may lead to various problem/crash.
	
	Q124 What is the advantage of using typedef?
	A sometime we need to copy data of one data type to other data type, for this compiler give warrning, to avoid warring typecast is used.

*/