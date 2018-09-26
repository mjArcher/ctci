#!/bin/bash
g++ -g main.cpp -o a.out
valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all ./a.out
# valgrind --leak-check=yes,full --show-leak-kinds=all ./a.out
