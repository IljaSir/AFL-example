This is a simple C++ program written to learn how to fuzz with AFL.

Install afl-fuzz: brew install afl-fuzz
Build the program: afl-clang++ main.cpp -o main.o
Run fuzzer: afl-fuzz -i tests -o fuzz_out main.o
(NB! I had to give afl-fuzz full path to an executable to make it work)