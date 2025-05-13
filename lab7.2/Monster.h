#pragma once
#include <iostream>

class Monster
{
private:
    std::string name;
    int health;
    int attack;
    int defense;

public:
    // �����������
    Monster(const std::string& n, int h, int a, int d);

    std::string getName();

    int getHealth();

    int getAttack();

    int getDefense();

    void setHealth(int h);

    void displayInfo() const;
};

