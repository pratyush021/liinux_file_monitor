#!/bin/sh 
# take arg from command line 
# and run the program
arg="$1"
g++ -o ugly ugly.c 
./ugly "$arg"
