This is a simple C++ program written to learn how to fuzz with AFL.

**Install afl-fuzz**: _brew install afl-fuzz_

**Build the program**: _afl-clang++ main.cpp -o main.o_

**Run fuzzer**: _afl-fuzz -i tests -o fuzz_out main.o_

(NB! I had to give afl-fuzz full path to an executable to make it work)
