
# 0x03 Debugging

This repository contains assignments for learning how to debug programs in C.

## Getting Started

Before starting this module, you should have a basic understanding of computer programming concepts and should have some familiarity with C programming concepts.

## Debugging Tools

In order to debug the programs, you will be using `gcc` compiler with options `-g` and `-Wall`. Additionally, you can use the following tools:

-   `gdb`: a powerful command-line debugger that allows you to run programs with breakpoints, examine variables, and step through code one line at a time.
-   `valgrind`: a tool that helps you detect memory management problems in your programs.
-   `printf`: a simple yet powerful debugging tool that allows you to print out variables and other information as your program runs.

## Project Requirements

-   All programs should compile without any warnings or errors.
-   Your code should follow the `Betty` style.
-   All functions must be thoroughly tested.
-   Programs should be able to take different inputs and produce the expected output.

## List of tasks

- [x]  0. Multiple mains :
	- create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`
    
- [x]  1. Like, comment, subscribe :
	- Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
			
			#include <stdio.h>

			/**
			* main - causes an infinite loop
			* Return: 0
			*/

			int main(void)
			{
			        int i;

			        printf("Infinite loop incoming :(\n");

			        i = 0;

			        while (i < 10)
			        {
			                putchar(i);
			        }

			        printf("Infinite loop avoided! \\o/\n");

			        return (0);
			}
- [x]  2. 0 > 972? : 
	- Fix the code in `2-largest_number.c` so that it correctly prints out the largest of three numbers, no matter the case.

			#include "main.h"

			/**
			 * largest_number - returns the largest of 3 numbers
			 * @a: first integer
			 * @b: second integer
			 * @c: third integer
			 * Return: largest number
			 */

			int largest_number(int a, int b, int c)
			{
			    int largest;

			    if (a > b && b > c)
			    {
			        largest = a;
			    }
			    else if (b > a && a > c)
			    {
			        largest = b;
			    }
			    else
			    {
			        largest = c;
			    }

			    return (largest);
			}
	    
- [x] 3. Leap year: 


This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.

- Fix the  `print_remaining_days()`  function so that the output works correctly for  _all_  dates and  _all_  leap years.
-   Line count will not be checked for this task.
-   You can assume that all test cases have valid months (i.e. the value of  `month`  will never be less than  `1`  or greater than  `12`) and valid days (i.e. the value of  `day`  will never be less than  `1`  or greater than  `31`).
-   You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

	-   3-main_a.c

		```
		#include <stdio.h>
		#include "main.h"

		/**
		* main - takes a date and prints how many days are left in the year, taking
		* leap years into account
		* Return: 0
		*/

		int main(void)
		{
		    int month;
		    int day;
		    int year;

		    month = 4;
		    day = 01;
		    year = 1997;

		    printf("Date: %02d/%02d/%04d\n", month, day, year);

		    day = convert_day(month, day);

		    print_remaining_days(month, day, year);

		    return (0);
		}
		```

	- 3-convert_day.c
		```
		#include "main.h"

		/**
		* convert_day - converts day of month to day of year, without accounting
		* for leap year
		* @month: month in number format
		* @day: day of month
		* Return: day of year
		*/

		int convert_day(int month, int day)
		{
		    switch (month)
		    {
		        case 2:
		            day = 31 + day;
		            break;
		        case 3:
		            day = 59 + day;
		            break;
		        case 4:
		            day = 90 + day;
		            break;
		        case 5:
		            day = 120 + day;
		            break;
		        case 6:
		            day = 151 + day;
		            break;
		        case 7:
		            day = 181 + day;
		            break;
		        case 8:
		            day = 212 + day;
		            break;
		        case 9:
		            day = 243 + day;
		            break;
		        case 10:
		            day = 273 + day;
		            break;
		        case 11:
		            day = 304 + day;
		            break;
		        case 12:
		            day = 334 + day;
		            break;
		        default:
		            break;
		    }
		    return (day);
		}
		```



	-  3-print_remaining_days.c (This is the code to work on)
		```
		#include <stdio.h>
		#include "main.h"

		/**
		* print_remaining_days - takes a date and prints how many days are
		* left in the year, taking leap years into account
		* @month: month in number format
		* @day: day of month
		* @year: year
		* Return: void
		*/

		void print_remaining_days(int month, int day, int year)
		{
		    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
		    {
		        if (month >= 2 && day >= 60)
		        {
		            day++;
		        }

		        printf("Day of the year: %d\n", day);
		        printf("Remaining days: %d\n", 366 - day);
		    }
		    else
		    {
		        if (month == 2 && day == 60)
		        {
		            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		        }
		        else
		        {
		            printf("Day of the year: %d\n", day);
		            printf("Remaining days: %d\n", 365 - day);
		        }
		    }
		}
		```
## Contributing

If you have any suggestions or improvements for the tasks or exercises, please feel free to contribute. You can do this by forking the repository, making your changes, and submitting a pull request. All contributions are welcome and appreciated.
