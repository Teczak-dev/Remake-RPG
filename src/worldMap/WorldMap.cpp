#include <iostream>
#include "../../include/worldMap/WorldMap.hpp"
#include "../../include/worldMap/Region.hpp"
#include "../../include/worldMap/Location.hpp"

WorldMap::WorldMap(){
  regions = {
    new Region("Forest of Beginnings", 
               {new Location("Whispering Glade", 2, "A serene glade filled with ancient trees and soft whispers of the wind.", "village"),
                new Location("Mossy Hollow", 3, "A damp, shaded hollow where moss covers every surface.", "dungeon")},
               "temperate", "forest", 1),
    new Region("Desert of Trials", 
               {new Location("Scorching Dunes", 6, "Endless dunes that shimmer under the blazing sun.", "plains"),
                new Location("Oasis of Mirages", 5, "A rare oasis that appears and disappears like a mirage.", "city")},
               "arid", "desert", 5),
    new Region("Mountains of Echoes", 
               {new Location("Echoing Peak", 7, "A towering peak where every sound is amplified.", "dungeon"),
                new Location("Crystal Cavern", 4, "A cavern filled with sparkling crystals that reflect light in all directions.", "village")},
               "cold", "mountainous", 10)
  }; 
  std::cout<<"Stworzono mapę"<<std::endl;

}
WorldMap::~WorldMap(){
  for(auto region : regions){
    delete region;
  }
  regions.clear();
  std::cout<<"Zniszczono mapę"<<std::endl;
}
