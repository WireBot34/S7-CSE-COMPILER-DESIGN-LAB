# Compiler Design Lab

A collection of **Compiler Design Lab algorithms and programs** implemented in **C and LEX**.

This repository contains the programs covered in the Compiler Design Lab record, organized into individual folders for easy access, study, and execution.

## 📚 Programs

| No. | Program                                         | File                 |
| --- | ----------------------------------------------- | -------------------- |
| 01  | Lexical Analyzer using C                        | `lexical_analyzer.c` |
| 02  | Lexical Analyzer using LEX                      | `lexical.l`          |
| 03  | Count Lines, Words, Spaces, Tabs and Characters | `count.l`            |
| 04  | Conversion of Substring `abc` to `ABC`          | `substring.l`        |
| 05  | Count Vowels and Consonants                     | `vowels.l`           |
| 06  | NFA to DFA Conversion                           | `nfa_dfa.c`          |
| 07  | Recursive Descent Parser                        | `recursive.c`        |
| 08  | Shift Reduce Parser                             | `shift_reduce.c`     |
| 09  | Intermediate Code Generation                    | `intermediate.c`     |
| 10  | Constant Propagation                            | `constant.c`         |

## 📁 Repository Structure

```text
Compiler-Design-Lab-Codes/
│
├── 01-lexical-analyzer-c/
│   ├── lexical_analyzer.c
│   └── algorithm.md
│
├── 02-lexical-analyzer-lex/
│   ├── lexical.l
│   └── algorithm.md
│
├── 03-count-lines-words-spaces-tabs/
│   ├── count.l
│   └── algorithm.md
│
├── 04-substring-abc-to-ABC/
│   ├── substring.l
│   └── algorithm.md
│
├── 05-vowels-consonants/
│   ├── vowels.l
│   └── algorithm.md
│
├── 06-nfa-to-dfa/
│   ├── nfa_dfa.c
│   └── algorithm.md
│
├── 07-recursive-descent-parser/
│   ├── recursive.c
│   └── algorithm.md
│
├── 08-shift-reduce-parser/
│   ├── shift_reduce.c
│   └── algorithm.md
│
├── 09-intermediate-code-generation/
│   ├── intermediate.c
│   └── algorithm.md
│
└── 10-constant-propagation/
    ├── constant.c
    └── algorithm.md
```

## 🧪 Topics Covered

The repository covers important concepts from compiler design, including:

* **Lexical Analysis**
* **LEX / Lexical Analyzer Generation**
* **Pattern Matching**
* **Finite Automata**
* **NFA to DFA Conversion**
* **Syntax Analysis**
* **Recursive Descent Parsing**
* **Shift-Reduce Parsing**
* **Intermediate Code Generation**
* **Code Optimization**
* **Constant Propagation**

## 💻 Languages & Tools

* **C**
* **LEX / Lex/Flex**
* GCC or another C compiler
* A LEX-compatible scanner generator

## 🚀 How to Use

Each program is stored in its own folder along with its corresponding algorithm.

For C programs, compile using:

```bash
gcc filename.c -o program
```

Then run:

```bash
./program
```

For LEX programs, generate the scanner first:

```bash
lex filename.l
```

Then compile the generated C file:

```bash
gcc lex.yy.c -o program -ll
```

Run the program:

```bash
./program
```

> The exact LEX/Flex compilation command may vary depending on the operating system and installed scanner library.

## 🎯 Purpose

This repository is intended for:

* Compiler Design Lab practicals
* Academic reference
* Algorithm revision
* Program practice
* Lab-record preparation
* Quick revision before practical examinations

## 📝 Note

The programs and algorithms are organized according to the supplied Compiler Design Lab record. The original program order and overall structure have been retained, with obvious transcription/syntax issues corrected for readability and usability.

## ⭐ Programs at a Glance

```text
Lexical Analyzer
       ↓
LEX Lexical Analyzer
       ↓
LEX Counting Program
       ↓
abc → ABC
       ↓
Vowels & Consonants
       ↓
NFA → DFA
       ↓
Recursive Descent Parser
       ↓
Shift Reduce Parser
       ↓
Intermediate Code Generation
       ↓
Constant Propagation
```

---

**Compiler Design Lab — Algorithms & Programs**
