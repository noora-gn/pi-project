#include <iostream>
#include <vector> // for vectors 

int main() {
  const std::vector<int> evens{2,4,6,8,10};
  std::cout << "My vector elements are: ";
  for (auto it = evens.begin(); it < evens.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << "\n";
  
  return 0; 
}
