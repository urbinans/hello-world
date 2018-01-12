// hello.cpp: Nelson Urbina
// Description: A program that prints "Hello World!"
// Now, let's play a little with it

#include <iostream>
#include <iomanip>
#include <string>

int main(){
  std::cout << "Hello World!" << '\n';
  /** 
   * This idea came out from a post I read in the Q&A section of Sololearn:
   *  Let's make a piramid!
   **/
  std::string s = "Hello World!";
  for (int i = s.length();i >= 0;--i){
    std::cout << s.substr(0,s.length()-i) << '\n';
  }
  // And the other way around
  for (int i = 0;i < s.length();++i){
    std::cout << s.substr(0,s.length()-i) << '\n';
  }
  
  std::cout.width(50);
  std::cout.fill('-');
  std::cout << '\n';
  std::cout.fill(' ');

  /**
   * Ok, so now lets print "Hello World!" in a field of 17 spaces 4 times on a line for 6 lines
   * using for-loops. This one is from "Google for Education"
   **/
  for (int i = 0;i < 6;++i){
    for (int j = 0;j < 4; ++j){
      std::cout.width(17);
      std::cout << s;
    }
    std::cout << '\n';
  }

  /**
   * Let's do the last one again but this time with left aligment and using the iomanip library
   **/
  std::cout << std::setw(69) << std::setfill('-') << '\n' << std::setfill(' ');

  for (int i = 0;i < 6;++i){
    for (int j = 0;j < 4; ++j){
      std::cout << std::setw(17) << std::left << s;
    }
    std::cout << '\n';
  }

  return 0;
}
