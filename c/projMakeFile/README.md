## Using a makefile to compile and link a program 

A makefile is a file that describes the relationship among the sources of a program 
used by the make utility to build (compile and link) the target goal (executable, 
shared object, and more). Makefiles are really important as they help to keep
sources organized and easy to maintain. A program, to become executable, must be 
compiled and linked with other libraries. 

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


