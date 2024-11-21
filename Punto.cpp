#include<iostream>
#include<string>
using namespace std;

class Punto{
private:
int x;
int y;
public:
Punto():x{0},y{0}{}

Punto(int x, int y): x{x},y{y}{}

void setX(int x)
{
  this->x=x;
}
int getX()const
{
    return x;
}
void setY(const int y)
{
  this->y=y;
}
int getY()const
{
    return y;
}

bool operator==(Punto const &punto1)const
{
  return x == punto1.x && y == punto1.y;
}
bool operator!=(Punto const & punto1)const
{
  return x!=punto1.x || y!=punto1.y;
}
    
void display() const {
 cout << "(" << x << ", " << y << ")";
    }
};
