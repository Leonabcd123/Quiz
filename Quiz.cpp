#include <iostream>
#include <limits>

int main(){
  const std::string questions[5] = {
    "1. What does the 'std::cout' statement do in C++?", 
    "2. What is the default value of an uninitialized int in C++?",
    "3. Which of the following is used to create a constant in C++?", 
    "4. In C++, what does '#include' do?", 
    "5. What is the size of an int in most 64-bit systems?"
  };

  const std::string answers[5][5] = {
    {"A) It stores data in a file.",
    "B) It prints data to the standard output (console).",
    "C) It performs mathematical operations.",
    "D) It scans input from the user."},
    
    {"A) 0",
    "B) Undefined (it could be any random value).",
    "C) NULL",
    "D) -1"},
    
    {"A) const",
    "B) constant",
    "C) final",
    "D) fixed"},
    
    {"A) It includes header files into the program.",
    "B) It executes a code block.",
    "C) It defines a constant.",
    "D) It imports a function from a library."},
    
    {"A) 2 bytes",
    "B) 4 bytes",
    "C) 8 bytes",
    "D) 16 bytes"}
  };

  const char correct[5] = {'B', 'B', 'A', 'A', 'B'};
  char answer;
  int score = 0;

  for (int i = 0; i < 5; i++){
    std::cout << questions[i] << '\n';

    for (int j = 0; j < 4; j++){
      std::cout << answers[i][j] << '\n';
    }


    while (true) {
            std::cout << "Your answer (A/B/C/D): ";
            std::cin >> answer;
            answer = toupper(answer); 

            if (std::cin.peek() == '\n' && (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D')) {
                break;
            } else {
                std::cout << "Invalid input! Please enter a single letter (A/B/C/D).\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

    if (answer == correct[i]){
      std::cout << "Correct Answer!\n";
      score++;
    } 
    else 
    {
      std::cout << "Incorrect Answer.\n";
    }

    std::cout << "=================================\n";

  }

    std::cout << "Your Score Is: " << score << " Out Of 5\n";
    std::cout << "You Got: " << (score / 5.0) * 100 << "% Of The Questions Right!\n";

  return 0;
}
