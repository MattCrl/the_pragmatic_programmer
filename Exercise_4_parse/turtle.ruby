# We want to implement a mini-language to control a simple turtle-graphics system.
# The language consists of single-letter commands, some followed by a single number.
# For example, the following input would draw a rectangle :
# P 2 -> select pen 2
# D   -> pen down
# W 2 -> draw west 2cm
# N 1 -> then north 1cm
# E 2 -> then east 2cm
# S 1 -> then south 1cm
# U   -> pen up
# Implement the code that parses this language.
# It should be designed so that it is simple to add new commands.

# MY SOLUTION (see turtle.c for the Book solution)

def selectPen
end

def penDown
end

def penDrawDir
end

def penUp
end

commands = [
  ["P", "ARG",    selectPen],
  ["D", "NO_ARG", penDown],
  ["W", "ARG",    penDrawDir],
  ["N", "ARG",    penDrawDir],
  ["E", "ARG",    penDrawDir],
  ["S", "ARG",    penDrawDir],
  ["U", "NO_ARG", penUp]
]
