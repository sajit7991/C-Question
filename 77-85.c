/**
	Q77: How do you define and when do we use?
	A: 1. Constant integer: int variable which remain same throught  the whole progaram life. they have only read-only permission. constant variables are stored in the Initialized data segment 
	   2. Constant pointer to integer: interger pointer which only point to only one variable in it lifetime are called constant pointer to integer. it must be Initialized at time of dercation.
	   3. Constant pointer to constant integer: interger pointer which only point to only one variable in it lifetime and don't allow to change the change the value of variable pointing to. it must be Initialized at time of dercation.

	Q78: What are function pointers and when do we use it?
	A: as name says, pointer which points to function are called function pointer. pointer type dercation must be same as funtion retun type and function argument.
	   for example:
		
	   void fooo(int a); 	// foo is the function return void and take one integer.
	   void(*fooPtr)(int) = fooo;	// fooPtr is the pointer which point to funtion which return void and take one integer.
	   typedef void (*fooPtr_t)(int); //fooPtr_t is the typedef of the pointer which point to funtion which return void and take one integer.
	   
		other very usefull funtion man 3 signal();
		
		void (*signal(int sig, void (*func)(int)))(int) // here siganl the pointer point to a function which take 2 agrment, onw is int sig and onther is the funtions pointer that return void and take one integer as agrment. pointer singal point to a function whose retun type is the function pointer that return void and take one integer
		
		// to simplyfiy typedef is use 
		
		typedef (*sa_handler)(int); // using typedef siganl() function is simplyfiy


	Q79 How char pointer and integer pointer access data from memory;
	A: char and integer pointer both are pointer. any pointer size in 32-bit system is 4 bytes and 64-bit system is 8 bytes.
	   A char pointer point to lsb of variable access only 1 bytes, while A integer pointer point to LSB of variable and access 4 bytes from lsb to higher memory addess.
		
	Q80: What is a function pointer?
	A: refer 78
	
	Q81: What is Structure pointer. When do we use it?
	A: as name say pointer point to Structure is called Structure pointer. to access member of Structure using pointer -> is used.

		struct ABC{
			int a;
			int b;
			char c;
		};
		
		void FOOO(struct ABC* ptr)
		{
			// ptr is the Structure pointer of type Structure ABC. struct element ca be access as follows:
			
			printf("%d %d %c", ptr[0].a, ptr->b, ptr->c);
		}
	
	Q82: Can we have a volatile pointer?
	A: Yes, a pointer can be volatile if the variable that it points to can change unexpectedly even though how this might happen is not evident from the code.
	
		int sq(volatile int * p)
		{
			return (*p)*(*p);
		}
		int main()
		{
			volatile  int a = 12;
			printf(" %d",sq(&a));
			return 0;
		}
		
	Q83: What is the difference between an uninitialized pointer and a null pointer?
	A: an uninitialized pointer is the pointer which point to any random addess. grabage value is stored in it.
		NULL pointer in pointer which pointto member loaction 0x0000(NULL).

		int main()
		{
			int * ptr;				//uninitialized pointer
			int * ptr1 = NULL;		//null pointer
		}
	
	Q84: What is the difference char *p = "hello" and  char s[] = "hello"
	A: 	char*p = "hello"						|	char s[]= "hello"
	-------------------------------------------------------------------------------------------
		p is the pointer which point to			|	s is the array which store "hello"				
		a string "hello"						|
												|
		sizeof P is 8 in 64-bit system			|	sizeof of s is 6.
		and 4 in 32-bit system					|
												|			
		p point to read-only value string 		|	s is a array, string value can be change
												|
		p can point to any other string 		|	S is not change able
		also									|
		p = "world"	//possible					|	s = "world" //not possible
		
	
	Q85: what is dangling pointer? How to avoid. Demonstrate using a program
	A:   dangling pointer are those which point to unwanted address. genrlly pointer of local variable to prev call function.
	
		int* fooo()
		{
			int abc;
			return &abc;
		}
	
		int main()
		{
			int *ptr= NULL;
		
			ptr = fooo();	// here ptr is dangling pointer
	
		}





*/