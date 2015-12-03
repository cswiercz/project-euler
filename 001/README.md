# Project Euler #001

Major concepts learned:

## C++ Exceptions

I usually follow test-driven development practices in my own code. This is my
first time throwing exceptions in C++. The function `test()` will throw an
exception if the known result *"the sum of multiples of three or five less than
10 is equal to 23"* does not pass.

To use exceptions, include the library:

    #include <exception>

All exceptions inherit from `std::exception`. You can use `exception` on its own
but you cannot provide any arguments if, say, you want to display a message
explaining why the exception was thrown.

There are several exceptions derived directly from `exception`. However, there
seem to be two main types:

* `logic_error`: thrown when the condition causing the error could have been
  detected by the client before calling the failing code
* `runtime_error`: thrown when the error results from a condition that the
client could not have tested before calling the failing code

Since we're testing if our own code is working `runtime_error` seems more
appropriate and this is what's used in testing my solutions.

## Other Thoughts

Not sure if this is how I'm going to lay out my solutions. Once I learn more
about C++-style testing I'll most likely change the layout.
