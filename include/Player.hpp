#include <string>
#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
public:
    Player(const std::string& name);
    Player();
    ~Player();
    void Move(int dx, int dy);
    void Attack();
private:
    std::string name;
    int health;
    int attackPower;
    std::string inventory[10];
};

#endif // PLAYER_HPP