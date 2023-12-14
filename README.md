# C - Stacks, Queues - LIFO, FIFO
<hr>

<img src="https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png" />

## Compilation & Output
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
- Any output must be printed on `stdout`
- Any error message must be printed on `stderr`

<hr>

## Tests
* We strongly encourage you to work all together on a set of tests

<hr>

# The monty program

## Usage:
```monty file```
### If the user does not give any file or more than one argument to your program, print the error message<br>
`USAGE: monty file`, followed by a new line, and exit with the status <b>EXIT_FAILURE</b>
### If, for any reason, it’s not possible to open the file, print the error message:
```Error: Can't open file <file>```, followed by a new line, and exit with the status <b>EXIT_FAILURE</b>
where <file> is the name of the file
### If the file contains an invalid instruction, print the error message:
`L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status <b>EXIT_FAILURE</b>
where is the line number where the instruction appears.(<em>Line numbers always start at 1</em>)
### The monty program runs the bytecodes line by line and stop if either:
- `it executed properly every line of the file`<br>
- `it finds an error in the file`<br>
- `an error occured`<br>
### If you can’t malloc anymore, print the error message:
```Error: malloc failed```, followed by a new line, and exit with status <b>EXIT_FAILURE</b>.
### You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)
