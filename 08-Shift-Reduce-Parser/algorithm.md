# Algorithm

1. Start the program.
2. Read the input expression.
3. Initialize the stack and input pointer.
4. Shift the next input symbol onto the stack.
5. If the top symbol is i, reduce i to E.
6. If the stack contains E+E, reduce E+E to E.
7. Continue shifting and reducing until input is consumed.
8. If the stack contains only E, accept; otherwise reject.
9. Stop the program.
