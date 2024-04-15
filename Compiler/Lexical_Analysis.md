# Lexical Analysis


**Lexical analyzer is the part of the compiler that reads the source text.**

Sometimes, lexical analyzers are divided into a cascade of two processes:
- Scanning consists of the simple processes that do not require tokenization of the input, such as deletion of comments and compaction of consecutive whitespace characters into one.

- Lexical analysis proper is the more complex portion, where the scanner produces the sequence of tokens as output.

**Tokens, Patterns, and Lexemes**
- A token is a pair consisting of a token name and an optional attribute value.
- A pattern is a description of the form that the lexemes of a token may take.
- A lexeme is a sequence of characters in the source program that matches the pattern for a token and is identified by the lexical analyzer as an instance of that token.




