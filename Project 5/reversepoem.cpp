#include "reversepoem.h"

void reversePoem<char>::input()
{
  char input[512] = "hi";
  string huh = "bob";
  while (!huh.empty())
  {
    cout << "Enter lines, or an empty line to quit" << endl;
    cin.getline(input, 512);
    cout << input << endl;
    huh = (string)input;
    if (huh.empty())
    {
      break;
    } else {
      for (size_t i=0; i<512; i++)
      {
        if (input[i]=='\0')
          break;
        initialQ.emplace_front(input[i]);
      }
    }
  }
}

void reversePoem<string>::input()
{
  string huh = "bob";
  char input[512] = "hi";
  cout << "string!";
  while (!huh.empty())
  {
    cout << "Enter lines, or an empty line to quit" << endl;
    cin.getline(input, 512);
    huh = (string)input;
    if (huh.empty())
    {
      break;
    } else {
      initialQ.emplace_front((string)input);
    }
  }
}
void reversePoem<string>::printPoem()
{
  deque<string> tempQ = initialQ;
  // std::cout << "Your initial poem…" << std::endl;
  while (!initialQ.empty()) {
    std::cout << initialQ.back() << std::endl;
    initialQ.pop_back();
  }
  // std::cout << "Your final poem…" << std::endl;
  while (!tempQ.empty()) {
    std::cout << tempQ.front() << std::endl;
    tempQ.pop_front();
  }
}
void reversePoem<char>::printPoem()
{
  deque<char> tempQ = initialQ;
  // std::cout << "Your initial poem…" << std::endl;
  while (!initialQ.empty()) {
    std::cout << initialQ.back() << std::endl;
    initialQ.pop_back();
  }
  // std::cout << "Your final poem…" << std::endl;
  while (!tempQ.empty()) {
    std::cout << tempQ.front() << std::endl;
    tempQ.pop_front();
  }
}