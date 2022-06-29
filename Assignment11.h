#pragma once
#include<iostream>
#include <Windows.h>
using namespace std;
class CShape {
private:
    int color;
public:
    virtual void draw(int x, int y) = 0;//x, y are coordinates to draw the figure, passed in when calling the function
};
class CRectangle : public CShape {
public:
    int width, height;
public:
    void draw(int x, int y);//Function to perform drawing
    CRectangle() {};
    CRectangle(int input_width, int input_height);//The constructor function initializes the size of the rectangle
};
class CLine : public CShape
{
private:
    int length;
public:
    void draw(int x, int y);//Function to perform drawing
    CLine(int length);//The constructor function initializes the size of the line
};
class CCircle : public CShape
{
private:
    int radium;
public:
    void draw(int x, int y);//Function to perform drawing
    CCircle(int radium);//The constructor function initializes the size of the circle
};
class CSquare : public CRectangle
{
public:
    CSquare(int side);//;//The constructor function initializes the size of the CSquare
};
class CPicture
{
public:
    CShape* Arr_ptr[4];//Pointers are used to hold the addresses of 4 objects
};
