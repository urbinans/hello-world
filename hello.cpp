// hello.cpp: Nelson Urbina
// Description: A program that prints "Hello World!"
// Now, let's play a little with it

#include <iostream>
#include <string>

int main(){
  std::cout << "Hello World!" << '\n';
  /** 
   * This idea came out from a post I read in the Q&A section of Sololearn:
   *  Let's make a piramid!
   **/
  std::string s = "Hello World!";
  for (int i = s.length(); i >= 0;--i){
    std::cout << s.substr(0,s.length()-i) << '\n';
  }
  // And the other way around
  for (int i = 0; i < s.length();++i){
    std::cout << s.substr(0,s.length()-i) << '\n';
  }
  return 0;
}
