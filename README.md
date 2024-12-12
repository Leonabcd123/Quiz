# C++ Quiz Program
## Description
This C++ program is a simple multiple-choice quiz designed to test your knowledge of basic C++ concepts. The quiz consists of 5 questions, each with 4 possible answers. After the user selects an answer, the program will inform them if the answer is correct or not and keep track of the score. At the end of the quiz, the program will display the user's score out of 5 and the percentage of correct answers.
## Features
- 5 multiple-choice questions about C++.
- Input validation to ensure only valid answers (A, B, C, D) are accepted.
- Score tracking and feedback after each answer.
- Final score and percentage displayed at the end of the quiz.
## How to Run the Program
1. Copy the code into a C++ IDE or text editor.
2. Compile the code using a C++ compiler (e.g., g++ for GCC).
3. Run the executable produced by the compiler.
4. Follow the on-screen instructions to answer the questions.
## Questions and Answers
The quiz contains the following questions with 4 multiple-choice answers:
1. **What does the 'std::cout' statement do in C++?**

A) It stores data in a file.
B) It prints data to the standard output (console).
C) It performs mathematical operations.
D) It scans input from the user.
2. **What is the default value of an uninitialized int in C++?**

A) 0
B) Undefined (it could be any random value).
C) NULL
D) -1
3. **Which of the following is used to create a constant in C++?**

A) const
B) constant
C) final
D) fixed
4. **In C++, what does '#include' do?**

A) It includes header files into the program.
B) It executes a code block.
C) It defines a constant.
D) It imports a function from a library.
5. **What is the size of an int in most 64-bit systems?**

A) 2 bytes
B) 4 bytes
C) 8 bytes
D) 16 bytes
## Input Validation
The program prompts the user to enter one of the valid answer options (A/B/C/D) for each question. If the user enters an invalid input (anything other than A, B, C, or D), the program will ask them to try again until a valid input is entered.

## Scoring
- After answering all questions, the program will display the total score out of 5.
- It also calculates and displays the percentage of correct answers.
## Example Output
```mathematica
1. What does the 'std::cout' statement do in C++?
A) It stores data in a file.
B) It prints data to the standard output (console).
C) It performs mathematical operations.
D) It scans input from the user.
Your answer (A/B/C/D): B
Correct Answer!

=================================

2. What is the default value of an uninitialized int in C++?
A) 0
B) Undefined (it could be any random value).
C) NULL
D) -1
Your answer (A/B/C/D): B
Correct Answer!

=================================

...

Your Score Is: 4 Out Of 5
You Got: 80% Of The Questions Right!
```
## License
This project is open-source and available for personal or educational use. You can modify and distribute the code as needed.
