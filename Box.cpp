#include "Box.h"

// Implement setters and getters
void Box::setLength(float l)
{
  length = l;
}
void Box::setWidth(float w)
{
  width = w;
}
void Box::setHeight(float h)
{
  height = h;
}
float Box::getLength()
{
  return length;
}
float Box::getWidth()
{
  return width;
}
float Box::getHeight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (length * width * height);
}
