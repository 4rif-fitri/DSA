#include<iostream>
#include "Square.h"
using namespace std;

//void Square::Square() {
Square::Square() {
	heigh = 0;
	width = 0;
}
//void Square::~Square() {}
Square::~Square(){ }

void Square::setData(float p, float l) {
	//p = heigh;
	heigh = p;
	width = l;
}
//void Square::getHeight()b {
void Square::getHeight() {
	cout << heigh;
}
void Square::getWidth() {
	cout << width;
}
void Square::area() {
	cout << heigh * width;
}

//float Square::perimeter() {
void Square::perimeter() {
	cout << (heigh * 2) + (width * 2);
}