<h1> Command interpreter - Simple Shell poject</h1></p>

The Gates of Shell is a Holberton School project designed to delve into advanced shell program concepts, encompassing processes, system calls, bit manipulation, file management, and error handling.
<p align="center">
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcTLtL_ToHLEo_BWFxD-yf32Ux3zfsH_NPc8Qw&usqp=CAU" width="450" height="350">
<h1> Command interpreter - Simple Shell poject</h1></p>

## BACKGROUND 🐕
This is a colaboration project between two sfotware development students at [Holberton School](https://www.holbertonschool.com/) from Cohort 22, This project is about to create an own simple shell

## SIMPLE SHELL
Is an standard command interpretation for system.

## General
### Flowchart
<p align="center"><img src="https://github.com/zabitaguliyeva/holbertonschool-simple_shell/blob/master/Shell%20flowchart.jpg"></p>

### Origins

- **Original Unix Operating System:**
  - Ken Thompson, Dennis Ritchie, and others at Bell Labs (AT&T) developed the original Unix operating system in the early 1970s.
- **First Version of UNIX Shell:**
  - Ken Thompson authored the initial version of the UNIX shell, known as the Thompson shell or sh.
- **Inventor of B Programming Language:**
  - Ken Thompson is credited with inventing the B programming language, which directly preceded the C programming language.
- **Ken Thompson:**
  - A computer scientist pivotal in Unix OS development, significant contributions to the B programming language, and co-creation of the C programming language.

### Shell Operations

- **Shell Functionality:**
  - Acts as a command-line interpreter, executing user-provided commands, bridging user and OS interactions.
- **PID and PPID:**
  - PID (Process ID) uniquely identifies each process, while PPID denotes the parent process ID.
- **Environment Manipulation:**
  - Utilizes environment variables; commands like `export` in Unix/Linux modify the process environment.
- **Function vs. System Call:**
  - Functions are specific code segments within a program, whereas system calls request services from the OS kernel.
- **Process Creation:**
  - Processes are spawned using system calls like `fork()` in C, duplicating the calling process.

### Main Prototypes

- Three `main` Prototypes in C:
  - `int main(void)`
  - `int main(int argc, char *argv[])`
  - `int main(int argc, char *argv[], char *envp[])`

### Execution and Control

- **Program Execution via execve:**
  - The `execve()` system call in C executes another program, replacing the current process image.
- **Suspending Process Execution:**
  - The `wait()` system call suspends a process until one of its child processes terminates.
- **EOF (End-of-File):**
  - Denotes the end of data in a file or stream, triggered in Unix-like systems by Ctrl+D.

## Getting HSH

To install the shell and leverage its features, clone the current project and compile it, ensuring compatibility with gcc-4.8 and the C90 standard.

## Features

- Prompt display and command input, ending with a new line.
- Error handling for missing executables.
- Handling EOF (Ctrl+D).
- Command line argument support.
- PATH handling for executable location.
- Support for exit features and status.
- Ctrl-C avoidance for shell termination.
- Command separator handling (;).
- Logical operator support (&& and ||).
- Variable replacements: $?, $$.
- Comment handling (#).
- History feature support.
- File input support.

## Builtins

- `exit [STATUS]`: Exit the shell with an optional status.
- `cd [DIRECTORY] | [OPTION]`: Change directory.
- `env`: Display environment variables.
- `setenv [VARIABLE] [VALUE]`: Initialize or create an environment variable.
- `unsetenv [VARIABLE]`: Remove an environment variable.
- `alias [name [='value'] ...]`: Support for aliases.
- `help [BUILTIN]`: Display help for built-in commands.
- `history`: Display command history.

## Authors

- Fakhri Amanov
- Aziz Abbasov

