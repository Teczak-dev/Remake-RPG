#ifndef WORLDMAP_HPP
#define WORLDMAP_HPP
#include "Location.hpp"
#include "Region.hpp"
#include <cstddef>
#include <vector>
class WorldMap{
public:
  WorldMap();
  ~WorldMap();
  void setActiveRegion(Region* region);
  void setActiveLocation(Location* location);
  Region* getActiveRegion();
  Location* getActiveLocation();
  Region* getRegion(std::size_t id);
private:
  std::vector<Region*> regions;  
  Region* activeRegion = nullptr;
  Location* activeLocation = nullptr;
};
#endif 
