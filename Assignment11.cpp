#include "Assignment11.h"
/*==========================================================================
  FUNCTION   : CRectangle()
  PARAMETERS : int input_width, int input_height
  RETURN     : 
  COMMENT    : The constructor function initializes the size of the rectangle
==========================================================================*/
CRectangle::CRectangle(int input_width, int input_height)
{
    width = input_width;
    height = input_height;
}
/*==========================================================================
  FUNCTION   : CLine()
  PARAMETERS : int input_length
  RETURN     :
  COMMENT    : The constructor function initializes the size of the CLine
==========================================================================*/
CLine::CLine(int input_length)
{
    length = input_length;
}
/*==========================================================================
  FUNCTION   : CCircle()
  PARAMETERS : int input_radium
  RETURN     :
  COMMENT    : The constructor function initializes the size of the CCircle
==========================================================================*/
CCircle::CCircle(int input_radium)
{
    radium = input_radium;
}
/*==========================================================================
  FUNCTION   : CSquare()
  PARAMETERS : int length_side
  RETURN     :
  COMMENT    : The constructor function initializes the size of the CSquare
==========================================================================*/
CSquare::CSquare(int length_side)
{
    width = length_side;
    height = length_side;
}
/*==========================================================================
  FUNCTION   : draw()
  PARAMETERS : int x, int y
  RETURN     : void
  COMMENT    : Function to draw a square
==========================================================================*/
void CRectangle::draw(int x, int y) {
    HPEN hPen;
    HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 0, 255));
    SelectObject(device_context, hPen);
    Rectangle(device_context, x, y, x + width, y + height);
    ReleaseDC(console_handle, device_context);
}
/*= ======================================================================== =
FUNCTION   : draw()
PARAMETERS : int x, int y
RETURN : void
COMMENT : Function to draw a Line
==========================================================================*/
void CLine::draw(int x, int y)
{
    HPEN hPen;
    HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 0, 255));
    SelectObject(device_context, hPen);
    MoveToEx(device_context, x, y, (LPPOINT)NULL);
    LineTo(device_context, x + length, y);
}
/*= ======================================================================== =
FUNCTION   : draw()
PARAMETERS : int x, int y
RETURN : void
COMMENT : Function to draw a Circle
==========================================================================*/
void CCircle::draw(int x, int y)
{
    HPEN hPen;
    HWND console_handle = GetConsoleWindow();
    HDC device_context = GetDC(console_handle);
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 0, 255));
    SelectObject(device_context, hPen);
    Ellipse(device_context, x, y, x + 2 * radium, y + 2 * radium);
}
int main() {
    int x;
    int y;
    cout << "Enter the coordinates of the drawing on the console screen" << endl;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    CPicture cPicture;
    int Temp[4];
    cPicture.Arr_ptr[0] = new CRectangle(30, 60);//initialize a Rectangle of width 30, height 60
    cPicture.Arr_ptr[1] = new CLine(40);//initialize a Line of length 40
    cPicture.Arr_ptr[2] = new CCircle(20);//initialize a Circle of radium 20
    cPicture.Arr_ptr[3] = new CSquare(30);//initialize a Square of width 30, height 30
    cout << "===================MENU=========================" << endl;
    cout << "Enter the order to display 4 pictures in turn " << endl;
    cout << "1: CRectangle " << endl;
    cout << "2: CLine " << endl;
    cout << "3: CCircle " << endl;
    cout << "4: CSquare " << endl;
    cout << "Example: 1234 " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> Temp[i];
    }
    for (int i = 0; i < 4; i++ ) {
        cPicture.Arr_ptr[(Temp[i])-1]->draw(x, y);
        x = x + 100;
    }
    Sleep(5000);
}
