#ifndef THIEF_H
#define THIEF_H


class Thief
{
public:
    Thief();
    void setLocation(float _x, float _y);
    void takeExtraResource(/* player &p */);
private:
    float x;
    float y;
};

#endif // THIEF_H
