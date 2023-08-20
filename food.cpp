#include "food.hpp"

void food::draw() // DRAW THE FOOD
{
     setcolor(RED);
     rectangle(foodPos.getX(), foodPos.getY(), foodPos.getX() + 30, foodPos.getY() + 30);
     setfillstyle(INTERLEAVE_FILL, RED);
     floodfill(foodPos.getX() + 15, foodPos.getY() + 15, RED);
}

void food::generate(int snakeHeadx, int snakeHeady) // GENERATE NEW POSITION FOR THE PARTICLE
{
     srand(time(0));
     foodPos.setX(30 * (rand() % 15 + 1));
     srand(time(0));
     foodPos.setY(30 * (rand() % 15 + 1));
     if (foodPos.getX() == snakeHeadx && foodPos.getY() == snakeHeady)
          generate(snakeHeadx, snakeHeady);
}

bool food::update(int snakeHeadx, int snakeHeady) // GIVE US THE STATUS OF THAT DAMN FOOD !!
{
     if (foodPos.getX() == snakeHeadx && foodPos.getY() == snakeHeady)
          return true;
     else
          return false;
}
