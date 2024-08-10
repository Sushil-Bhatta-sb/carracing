#include<iostream>
#include<string>
#include<vector>
using namespace std;
class vector
{
    float x,y,z;
    public:
    vector():x(0),y(0),z(0) {}
    vector(float x,float y,float z):x(x),y(y),z(z){}
    //for storing the positon ,movement,direction and orientation of vehicle and for collison determination
    float getx() const { return x;}
    float gety() const { return y;}
    float getz() const { return z;}
};
class vehicle
{
    protected:
    vector position;
    float speed;
    float acceleration;
    float handling;
    public:
    vehicle():speed(0),acceleration(0),handling(0),position(0,0,0){}
}
