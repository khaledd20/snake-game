#ifndef POS_H
#define POS_H

class POS
{
private:
    int x, y;

public:
    POS()
    {
        x = -50;
        y = 0;
    }

    int getX() { return x; }
    void setX(int x) { this->x = x; }

    int getY() { return y; }
    void setY(int y) { this->y = y; }
};

#endif