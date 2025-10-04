#ifndef WORLDMAP_HPP
#define WORLDMAP_HPP
#include "Region.hpp"
#include <vector>
class WorldMap{
public:
  WorldMap();
  ~WorldMap();
private:
  std::vector<Region*> regions;  
};
#endif 
