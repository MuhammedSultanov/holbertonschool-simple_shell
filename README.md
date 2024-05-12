<h1 align = "center">Simple Shell</h1>
<img align="center" alt="shell" width="400" src="https://cdn.pixabay.com/photo/2013/07/13/13/41/bash-161382_1280.png">

## About
The shell is the Linux command line interpreter. It provides an interface between the user and the kernel and executes programs called commands. For example, if a user enters `ls` then the shell executes the `ls` command.
## Example of Use
* Compile the program to create the `hsh` executable file.
* run the executable as follows `./hsh`
* Enter basic commands like: `ls`, you can add flags along with `ls` command such as `-l`, `-la`(`ls -l`, `ls -la`)
* press enter after entering the command
* to end the execution of the `simple_shell` program press `ctrl + d` or write the word `exit`
Your shell should work like this in interactive mode:
```
$ ./hsh
(NM$) /bin/ls
 execute.c  file_loc.c  get_line.c  main.c  main.h  man_1_simple_shell  print_env.c  splitter.c  take_path.c hsh
(NM$)
(NM$) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Error Handling
- If execve() cannot find or execute the specified command, the shell displays an error message, including a brief explanation of the error (using perror()), and then
  returns to the prompt.
- If the fork() call fails, the shell exits with an error message.
- Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
- The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)

### Description of what each file shows:
|Function|Description|
|----|-------|
|main.h|holds prototypes of functions spread across all files|
|main.c|holds main process code|
|execute.c|starts the executing of process|
|file_loc.c|finds the location of command on given path|
|take_path.c|forks the process with given condtions|
|get_line.c|takes the line from user's input|
|splitter.c|splits the line and makes array|
|print_env.c|prints the environment when user needs|
|man_1_simple_shell|custom manpage for mini shell|

## Requirements

To compile and run the shell, you need:
> *C Compiler:* The source code is written in C, so you'll need a C compiler like GCC to compile it.

> *Operating System:* The shell is designed for Unix-like operating systems. It may work on other systems with minor modifications, but it's primarily intended for Unix-based environments. <br>

**That's all you need to get started with compiling and running the shell!**



### Environment
* Language: C
* OS: Ubuntu 20.04 LTS
* Compiler: gcc 11.4.0
* Style guidelines: [Betty style](https://github.com/alx-tools/Betty/tree/master)
## Bugs
No known bugs exists within the program as of this writing.

## Flowchart
![Flowchart diagram for shell](https://github.com/MuhammedSultanov/holbertonschool-simple_shell/blob/main/flow.png)

## Authors
* Nahid Isayev | [@Akuro1411](https://github.com/Akuro1411)`
* Muhammed Sultanov | [@MuhammedSultanov](https://github.com/MuhammedSultanov)
