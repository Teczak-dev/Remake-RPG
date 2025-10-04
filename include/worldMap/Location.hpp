#ifndef LOCATION_HPP
#define LOCATION_HPP
#include <string>

class Location{
public:
  Location();
  Location(std::string name, int terminalColor, std::string description, std::string type);
  ~Location();
private:
  std::string name;
  int terminalColor; // Color code for terminal display
  std::string description;
  std::string type; // e.g., city, village, dungeon
};



#endif
