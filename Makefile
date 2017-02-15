# Generic Makefile for compiling a single C program and linking with relevant
# MyroC, bluetooth, jpeg, etc. libraries for CSC 161
#
# Written by Jerod Weinman, 14 January 2015
# Extended by Henry M. Walker, 15 January 2015
# Edited by Peter-Michael Osera, 10 February 2016
#
# Changes (10 February 2016)
# + Changed paths to point to MyroC 3.0 location on MathLAN
# + Changed compiler flags to compile using the c11 standard

# To build a program "foo" from "foo.c", simply type "make foo". 
# To build an object file "foo.o" from "foo.c", simply type "make foo.o"
# We rely on make's implicit rules foo.c -> foo.o for compiling and
# foo.o --> foo for linking

# Set preprocessor flags
CPPFLAGS=-I/home/walker/MyroC/include

# Set appropriate compiler flags
CFLAGS=-Wall -std=c11

# Set linker flags to include the relevant libraries
LDFLAGS=-L/home/walker/MyroC/lib -lm -lMyroC -lbluetooth -ljpeg -leSpeakPackage

#----------------------------------------------------------------------------
# cleanup rules: To invoke this command, type "make clean".
# Use this target to clean up your directory, deleting (without warning)
#   object files, old emacs source versions, and core dumps.

clean:
	rm -f *.o *~ core*