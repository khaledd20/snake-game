//Name: Ahmed Tarek Mohamed Ali Elbasiouni
//Matric No: A20MJ4011
//Section: 15
#ifndef SNAKEBODY_H
#define SNAKEBODY_H

#include <graphics.h>
#include "Obstacle.hpp"
#include "POS.hpp"

enum DIR
{
        LEFT,
        UP,
        RIGHT,
        DOWN
};

class snakeBody : public Obstacle
{
private:
        POS arr[31];
        int direction;
        int length;

public:
        snakeBody()
        {
                arr[0].setX(30);
                arr[0].setY(30);
                length = 2;
                direction = RIGHT;
        }
        void draw();
        void appendSnake();
        void changeDirTo(int);
        int update();
        int getPosx();
        int getPosy();
        int getlength();
};

#endif