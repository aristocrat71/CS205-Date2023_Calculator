# CS205-Date2023_Calculator
This was an assignment project given to us in BTech course CS205, in 3rd Semester by Prof. Anoop Jacob Thomas.
This program can calculate the date and week day of a given date any X days later.

------------------------------------------------------------------------------------------------
The question description :

You will implement a date and day of week calculator for the 2023 calendar year. The 
calculator repeatedly reads in three numbers (in a line) from the standard input that are
interpreted as month dayofmonth daysafter, calculates the dates in the year and days of
week for the dates, and outputs the information. For example, input “1 1 31” is 
interpreted as the following: the first 1 means the 1st month in the year, January; the 
second 1 means the 1st day in January; and the 31 means 31 days after the date January
1, 2023 (we assume the year is 2023 to simplify the program), which is February 1, 2023.
The program also calculates the days of week for each of the dates. More specifically, 
for input “1 1 31”, the calculator should produce the following output:
“31 days after Tuesday, January 1, 2023 is Friday, February 1, 2023. “
The first input number must be from 1 to 12 representing the 12 months in 2023, the 
second input number must be a day in the month (e.g. for 1-31 for January, 1-28 for 
February, and so forth). The third number is larger than or equal to 0. The program 
should report an error (and exit) if the input is incorrect. If a day is not in 2023, the 
program should output that. Following are a sample input file (redirect to be the 
standard input) and the corresponding output.
Input file:
1 1 20
1 1 31
2 1 0
1 1 32
4 5 0
2 1 28
1 1 59
6 10 100
7 20 300
12 20 2
Output:
20 days after Sunday, January 1, 2023 is Saturday, January 21, 2023.
31 days after Sunday, January 1, 2023 is Wednesday, February 1, 2023.
0 days after Wednesday, February 1, 2023 is Wednesday, February 1, 2023.
32 days after Sunday, January 1, 2023 is Thursday, February 2, 2023.
0 days after Wednesday, April 5, 2023 is Wednesday, April 5, 2023.
28 days after Wednesday, February 1, 2023 is Wednesday, March 1, 2023.
59 days after Sunday, January 1, 2023 is Wednesday, March 1, 2023.
100 days after Saturday, June 10, 2023 is Monday, September 18, 2023.
300 days after Thursday, July 20, 2023 is a date not in 2023.
2 days after Wednesday, December 20, 2023 is Friday, December 22, 2023.
------------------------------------------------------------------------------------------------

Thank you.
