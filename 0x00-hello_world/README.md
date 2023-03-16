##Hello World. The first C program

[0. Preprocessor](./0-preprocessor) - Preprocessing a c file prepares the convertion of the middle level language to machine code. At this stage, the comments are removed from the program as they are not executed. Also the header files are expanded. To run a c file up to the preprocessing stage, we can run `gcc -E $CFILE -o c`. The `-E` option tells the computer to stop the compilation process after the preprocessing stage. The file be preprocessed has been saved to an environmental variable `CFILE`. the `-o` option helps us to specify how we may wish the output file to be named, which in our case it will be named `c`.

[1. Compiler](./1-compiler) - At the compiling stage, the program is converted to assembly code. However, in this task, we will compile it to machine code which is an object file. `gcc -c main.c`. If our file is named `main.c`, then an object file will be created as `main.o`.

[2. Assembler](./2-assembler) - At the Assembling stage, the program is converted to machine code. However, in this task we will convert the program to an assembly code with `gcc -S $CFILE`. `-S` option tells the computer to stop the process after the compilation stage.

[3. Name](./3-name) - This is the Linking stage. At this stage, the program is compiled and made executable. The linking basically links any of the required resources such as system calls to the program and therefore make it to be executable. `gcc -o cisfun $CFILE`. Since we have not used any option to specify why the compilation process should stop, it will continue up to the last part of linking the program. `-o` option is only used tospecify how the output file will be named. In this case, the executable file will be called `cisfun`.

[4. Hello, puts](./4-puts.c) - puts is an inbuilt function in c that prints a value to the screen. It can be used with single quotes for short characters but for long characters, double quotes inside the parentheses are expeceted. In this task, we want to print the statement together with an opening quotes on the screen. However, the opening and closing quotes inside the parentheses are used to mean that the statement is a full regular string and hence not printed on screen. To add the one to be displayed on the screen, we must use the `\` to escape the `"` and treat it as a regular charceter.


