# bridge-patterns

Various ways of implementing a bridge pattern in c++17/20
This repo is part of my deeper practice of design patterns and will hopefully be helpful to visitors

DISCLOSURE: all of the code in this repo is my own original code (though inspired by research I've done online and in ChatGPT)

A couple of implementations of the bridge pattern are coded and explained:

- minimal bridge (where the implementation is encapsulated)
- bridge with injector and builder (using boost/di)

I plan to add a number of further implementations of the bridge pattern because there is a wide range of applications and each tends to benefitmost from a particular flavor of the pattern.

Buid notes:

- I used clang 19.1.2 to build with CMake in VS code.
- also works with gcc compiler on Linux
