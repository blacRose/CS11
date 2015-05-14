#include "reversepoem.h"




void reversePoem<char>::input()
{
  char input[512] = "hi";
  cout << "char!";
  while (strncmp(input,"",512) != 0)
  {
    cout << "Enter lines, or an empty line to quit" << endl;
    cin.getline(input, 512);
    if (strncmp(input,"",512) == 0)
      break;
    for (size_t i=0; i<512; i++)
    {
      if (input[i]=='\0')
        break;
      initialQ.emplace(input[i]);
    }
  }
}

void reversePoem<string>::input()
{
  char input[512] = "hi";
  cout << "string!";
  while (strncmp(input,"",512) != 0)
  {
    cout << "Enter lines, or an empty line to quit" << endl;
    cin.getline(input, 512);
    if (strncmp(input,"",512) == 0)
      break;
    initialQ.emplace((string)input);
  }
}
void reversePoem<string>::printPoem()
{
  std::cout << "Your initial poem…" << std::endl;
  while (!initialQ.empty()) {
    std::cout << initialQ.front() << std::endl;
    initialQ.pop();
  }
  std::cout << "Your final poem…" << std::endl;
  while (!finalQ.empty()) {
    std::cout << finalQ.front() << std::endl;
    finalQ.pop();
  }
}
void reversePoem<string>::sortPoem() {
  queue<string> tempQ = initialQ;
  while (!initialQ.empty()) {
    finalQ.emplace(tempQ.front());
    tempQ.pop();
  }
}
void reversePoem<char>::printPoem()
{
  std::cout << "Your initial poem…" << std::endl;
  while (!initialQ.empty()) {
    std::cout << initialQ.front() << std::endl;
    initialQ.pop();
  }
  std::cout << "Your final poem…" << std::endl;
  while (!finalQ.empty()) {
    std::cout << finalQ.front() << std::endl;
    finalQ.pop();
  }
}
void reversePoem<char>::sortPoem() {
  queue<char> tempQ = initialQ;
  while (!initialQ.empty()) {
    finalQ.emplace(tempQ.front());
    tempQ.pop();
  }
}