
the function  malloc is used to allocate a certain amount of memory during the execution of a program. The malloc function will request a block of memory from the heap.
 If the request is granted, the operating system will reserve the requested amount of memory.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

Take a look at the following example:


	#include<stdio.h>

	int main()
	{
		int *ptr_one;

		ptr_one = (int *)malloc(sizeof(int));

		if (ptr_one == 0)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}

		*ptr_one = 25;
		printf("%d\n", *ptr_one);

		free(ptr_one);

		return 0;
	}

Note: If you compile on windows the windows.h file should be included to use malloc.

The malloc statement will ask for an amount of memory with the size of an integer (32 bits or 4 bytes). If there is not enough memory available, the malloc function will return a NULL. If the request is granted a block of memory is allocated (reserved). The address of the reserved block will be placed into the pointer variable.

The if statement then checks for the return value of NULL. If the return value equals NULL, then a message will be printed and the programs stops. (If the return value of the program equals one, than that’s an indication that there was a problem.)

The number twenty-five is placed in the allocated memory. Then the value in the allocated memory will be printed. Before the program ends the reserved memory is released.

Malloc and structures
A structure can also be used in a malloc statement.

Take a look at the example:


	#include<stdio.h>

	typedef struct rec
	{
    		int i;
    		float PI;
    		char A;
	}RECORD;

	int main()
	{
    		RECORD *ptr_one;

    		ptr_one = (RECORD *) malloc (sizeof(RECORD));

    		(*ptr_one).i = 10;
    		(*ptr_one).PI = 3.14;
    		(*ptr_one).A = 'a';

    		printf("First value: %d\n",(*ptr_one).i);
    		printf("Second value: %f\n", (*ptr_one).PI);
    		printf("Third value: %c\n", (*ptr_one).A);

    		free(ptr_one);

    		return 0;
	}

Note: the parentheses around *ptr_one in the printf statements.
This notation is not often used. Most people will use ptr_one->i instead. So (*ptr_one).i = 25 and ptr_one->i = 25 are the same.

If you want to use the structure without the typedef the program will look like this:


	#include<stdio.h>

	struct rec
	{
    		int i;
    		float PI;
    		char A;
	};

	int main()
	{
		struct rec *ptr_one;
		ptr_one =(struct rec *) malloc (sizeof(struct rec));

		ptr_one->i = 10;
    		ptr_one->PI = 3.14;
    		ptr_one->A = 'a';

    		printf("First value: %d\n", ptr_one->i);
    		printf("Second value: %f\n", ptr_one->PI);
    		printf("Third value: %c\n", ptr_one->A);

    		free(ptr_one);

   		return 0;
	}

One last tip before we end the tutorial: Always use sizeof. Never use this notation malloc(4). (Requesting 4bytes for the integer in the examples). This will make your code much more portable.

If you look at the dynamic memory functions of the stdlib.h library you will see that there are more functions that you can use to allocate dynamic memory. The following four dynamic memory functions can be found in the stdlib.h library:
