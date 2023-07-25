/**
	Q89: What are semaphores & why are they used?
	A: semaphores are the ipc method for synchronize processes or threads. One
		common use of a semaphore is to synchronize access to a block of shared memory,
		in order to prevent one process from accessing the shared memory at the same
		time as another process is updating it. 
	There are two main typr of semaphore : system V semaphore and posix semaphores. there are futher classification base on binary and counting and named and unnamed semaphores



	Q90: What is a process. How a process is spawn?
	A: A process is basically a program in execution. The execution of a process must progress in a sequential fashion.
	  To put it in simple terms, we write our computer programs in a text file and when we execute this program, it becomes a process which performs all the tasks mentioned in the program.
	  process can created other process called child process with help of  vaious linux system calls such as : system(), fork(), exec() calls
	  process called those systemcall become parent process and process which created are called as child process.
	  
	  
	  
	Q91: What is segmentation fault in C?
	A: when a process try to access memory which beyond the memory location it does not have permission. then segmentation error occour.
	
	Q92: Under what circumstances, segmentation fault is encountered. How it can be avoided?
	A: when a process try to access memory which beyond the memory location it does not have permission. then segmentation error occour. 
	   occou genarlly access the pointer which pointing to random address, or free memory, or access array element out-of-bound. to avoid once work to pointer is done assign them as null pointer. to check wether they are vaild or not.
	   
	
*/