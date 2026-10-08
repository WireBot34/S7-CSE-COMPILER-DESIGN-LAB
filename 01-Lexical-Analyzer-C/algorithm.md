# Algorithm

1. Start the program.
2. Open the input file for reading and the output file for writing.
3. Initialize token and line counters.
4. Read the input character by character.
5. If the character is an operator, classify it as an operator.
6. If the character is a special symbol, classify it as a special symbol.
7. If the character is a digit, collect the complete number and classify it as a number.
8. If the character is an alphabet, collect the complete word.
9. Compare the word with the predefined keyword list.
10. If it matches a keyword, classify it as a keyword; otherwise classify it as an identifier.
11. If a newline is found, increment the line number.
12. Write the token information to the output file.
13. Close the files and stop the program.
