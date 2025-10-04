#include <iostream>
#include "../../include/worldMap/Location.hpp"

Location::Location(){
  std::cout<<"Stworzono lokację"<<std::endl;
}
Location::Location(std::string name, int terminalColor, std::string description, std::string type)
: name(name), terminalColor(terminalColor), description(description), type(type) {
  std::cout<<"Stworzono lokację: "<<name<<std::endl;
}
Location::~Location(){
  std::cout<<"Zniszczono lokację"<<std::endl;
}
