#include "snakeBody.hpp"

void snakeBody::draw()
{
    for (int i = 0; i < length; i++)
    {
        setcolor(BLUE);
        rectangle(arr[i].getX(), arr[i].getY(), arr[i].getX() + 30, arr[i].getY() + 30);
        if (i == 0)
            setfillstyle(SOLID_FILL, GREEN);
        else
            setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(arr[i].getX() + 15, arr[i].getY() + 15, BLUE);
    }
}

void snakeBody::appendSnake()
{
    if (length < 30)
        length++;
}

void snakeBody::changeDirTo(int newdir)
{
    if (newdir == LEFT || newdir == RIGHT)
    {
        if (direction == UP || direction == DOWN)
            direction = newdir;
    }
    else if (newdir == UP || newdir == DOWN)
    {
        if (direction == LEFT || direction == RIGHT)
            direction = newdir;
    }
}

int snakeBody::update()
{
    for (int i = 1; i < length; ++i)
    {
        if (arr[0].getX() == arr[i].getX() && arr[0].getY() == arr[i].getY())
        {
            return 0;
        }
    }
    for (int i = length; i >= 0; --i)
    {
        if (i == 0)
        {
            arr[1].setX(arr[0].getX());
            arr[1].setY(arr[0].getY());
        }
        else
        {
            arr[i].setX(arr[i - 1].getX());
            arr[i].setY(arr[i - 1].getY());
        }
    }
    if (direction == LEFT)
    {
        arr[0].setX(arr[0].getX() - 30);
        if (arr[0].getX() == 0)
        {
            arr[0].setX(450);
        }
    }
    else if (direction == RIGHT)
    {
        arr[0].setX(arr[0].getX() + 30);
        if (arr[0].getX() == 480)
        {
            arr[0].setX(30);
        }
    }
    else if (direction == UP)
    {
        arr[0].setY(arr[0].getY() - 30);
        if (arr[0].getY() == 0)
        {
            arr[0].setY(450);
        }
    }
    else if (direction == DOWN)
    {
        arr[0].setY(arr[0].getY() + 30);
        if (arr[0].getY() == 480)
        {
            arr[0].setY(30);
        }
    }
    return 1;
}

int snakeBody::getPosx()
{
    return arr[0].getX();
}

int snakeBody::getPosy()
{
    return arr[0].getY();
}

int snakeBody::getlength()
{
    return length;
}
