#ifndef REGION_HPP
#define REGION_HPP
#include <cstddef>
#include <string>
#include "Location.hpp"
#include <vector>

class Region{
public:
  Region(std::string name, std::vector<Location*> locations, std::string climate, std::string terrain, int suggestedLevel);
  ~Region();
  Location* getLocation(std::size_t id);
  std::string getName() { return name; }
private:
  std::string name;
  std::vector<Location*> locations;
  std::string climate; // e.g., tropical, arid, temperate
  std::string terrain; // e.g., mountainous, plains, forest
  int suggestedLevel;
};

#endif
