# More Functions & Nested loops

[0. isupper](./0-isupper.c) - A program to checker whether the character passed as the argument of the function if an uppercase or not. We make use of the `isupper()` function in the standard Library and defined in the `ctype.h` header file.

[1. isdigit](./1-isdigit.c) - This task aims at checking for digits (0 through 9). It uses the `isdigit()` function in the standard Library defined in the `ctype.h` header file.

[2. Collaboration is multiplication](./2-mul.c) - A function that takes two integers and return their product. The custom function is called `mul()` and has been defined in the `main.h` found on the project.

[3. The numbers speak for themselves](./3-print_numbers.c) - A program to print all the numbers from 0 to 9. We make use of a `for` loop and to print the number we use `_putchar()` that has been defined in the custom header file `main.h`.

[4. I believe in numbers and signs](./4-print_most_numbers.c) - A program that uses the `_putchar()` as above to print all digits from 0 to 9 except 2 and 4. To do this, we can use the logical and `&&` while giving our conditions such that `i != 2 && i != 4 `, i is not equal to 2 and not equal to 4.

[5. Numbers constitute the only universal language](./5-more_numbers.c) - A program to print numbers from 0 to 14, 10 times separated by new line. The task requires us only to use the `_putchar()` function 3 times.

[6. The shortest distance between two points is a straight line](./6-print_line.c) - A program to print lines with `-` character as many as the user want. If the number of lines passed as the argument is less than or equal to 0, then the program should only print a new line. To print, we must only use `_putchar()`.

[7. I feel like I am diagonally parked in a parallel universe](./7-print_diagonal.c) - A program to print diagonal line on the terminal using the `\` character and spaces. f the argument of the function is less than 0 or equal to 0, then a new line is printed. Otherwise, `\` is printed separated by a new line as many times as required. The program keeps track of the `\` being printed so that it adds some spaces on to it to make all the \ to form a diagonal line. Also, I realized that when printing `\`, which is an escape character, we must add another, so that the first escapes the later.

[8. You are so much sunshine in every square inch](./8-print_square.c) - A program that prints `#` character to form a square. The size of the square is specified in the argument being passed to the function. The function prints the characters as many times as the size given in both x and y direction to form a square. This is achieved by using a nested while loop. If the `size <= 0` the program prints a new line. The program shoul only use the `_putchar()` function to print characters.




