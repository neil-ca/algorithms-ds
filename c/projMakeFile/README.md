## Using a makefile to compile and link a program 

A makefile is a file that describes the relationship among the sources of a program 
used by the make utility to build (compile and link) the target goal (executable, 
shared object, and more). Makefiles are really important as they help to keep
sources organized and easy to maintain. A program, to become executable, must be 
compiled and linked with other libraries. 

### How it works ... 
Simply, a makefile consits of a set of rules. A rule consists of a target, a list 
of prerequisites, and a command.
    1. The first rule consists of a target called all, and a prerequisite called hello.
there is no command for this rule.
    2. Consists of a target called hello. It has a prerequisite on hello.o and 
a command to link: g++.
    3. Has a target called hello.o, a prerequisite on hello.cpp, and a command to compile: 
g++ -c hello.cpp
    4. The last rule has a clean target with a command to remove all the hello and 
hello.o executables. This forces the recompilation of the files.

---
Example in c++
```cpp
#include <iostream>
#include <ostream>
int main()
{
    std::cout << "Hellou" << std::endl;
    return 0;
}
```
Makefile
```sh
CC = g++
all: hello
hello: hello.o
    ${CC} -o hello hello.o
hello.o: hello.cpp
clean: rm hello.o hello
```


