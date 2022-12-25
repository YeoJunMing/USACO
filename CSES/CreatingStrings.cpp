#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main () {
  std::string input;
  std::cin >> input;
  std::vector<std::string> vec; 

  std::sort(input.begin(), input.end()); //sort so next_permutation gives all possible permutations
  while (std::next_permutation(input.begin(), input.end())) {
    vec.push_back(input); 
  }

  int answer = vec.size() + 1; //plus original input
  std::cout << answer << "\n";
  for (std::string input : vec) {
    std::cout << input << "\n";
  }
}
