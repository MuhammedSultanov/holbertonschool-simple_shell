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
($) /bin/ls
hsh main.c shell.c
($)
($) exit
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
## Bugs
No known bugs exists within the program as of this writing.
## Authors
Nahid Isayev | [@Akuro1411](https://github.com/Akuro1411)
