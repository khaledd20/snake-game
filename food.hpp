#ifndef FOOD_H
#define FOOD_H

#include <graphics.h>
#include "Obstacle.hpp"
#include "POS.hpp"
#include <ctime> // required for generating random numbers

class food : public Obstacle
{
private:
    POS foodPos; // position
public:
    void draw();             // functtion to draw the food on the graphics window
    void generate(int, int); // function to generate food everytime snake eats it
    bool update(int, int);   // this is to give us the status of food(whether it is been eaten or not)
};

#endif