#include <iostream>
#include "../../include/worldMap/Region.hpp"
#include "../../include/worldMap/Location.hpp"

Region::Region(std::string name, std::vector<Location*> locations, std::string climate, std::string terrain, int suggestedLevel)
: name(name), locations(locations), climate(climate), terrain(terrain), suggestedLevel(suggestedLevel) {
  std::cout<<"Stworzono region: "<<name<<std::endl;
}

Region::~Region(){
  for(auto location : locations){
    delete location;
  }
  locations.clear();
  std::cout<<"Zniszczono region"<<std::endl;
}
