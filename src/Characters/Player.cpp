#include <iostream>
#include "../include/characters/Player.hpp"

Player::Player() : name("Unnamed"), health(100), attackPower(10) {
    std::cout << "Player " << name << " created with " << health << " health and " << attackPower << " attack power." << std::endl;
}

Player::Player(const std::string& name) : name(name), health(100), attackPower(10) {
    std::cout << "Player " << name << " created with " << health << " health and " << attackPower << " attack power." << std::endl;
}

Player::~Player() {
    std::cout << "Player " << name << " destroyed." << std::endl;
}
void Player::Move(int dx, int dy) {
    std::cout << name << " moves to (" << dx << ", " << dy << ")." << std::endl;
}

void Player::Attack() {
    std::cout << name << " attacks with " << attackPower << " damage!" << std::endl;
}
