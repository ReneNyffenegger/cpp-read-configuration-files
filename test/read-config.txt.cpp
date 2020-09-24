//
//  g++ ../ConfigFile.cpp ../Chameleon.cpp read-config.txt.cpp -o read-config.txt
//

#include "../ConfigFile.h"

#include <iostream>

int main() {
  ConfigFile cf("config.txt");

  std::string foo;
  std::string water;
  double      four;

  foo   = cf.Value("section_1","foo"  );
  water = cf.Value("section_2","water");
  four  = cf.Value("section_2","four" );

  std::cout << foo   << std::endl;
  std::cout << water << std::endl;
  std::cout << four  << std::endl;

  return 0;
}
