
#include<iostream>
#include"DoubleArrayStack.h"
using namespace std;
DoubleArrayStack::DoubleArrayStack() {
top = -1;
}
bool DoubleArrayStack::isEmpty() const {
return top < 0;
}
void DoubleArrayStack::push(const double& newEntry) {
if (top < MAXSTACK - 1) { //does the stack have room for newEntry
top++;
items[top] = newEntry;
}
}
double DoubleArrayStack::pop() {
double poppedItem = 0;
if (!isEmpty()) { //if the stack is not empty
poppedItem = items[top];
top--;
return poppedItem;
}
else {
cout << "Stcack is empty, cannot pop";
}
return -1.0;
}
double DoubleArrayStack::peek() const {
if (!isEmpty()) {
return items[top];
}
else {
cout << "Stack is empty, cannot peek." << endl;
return -1;
}
}
void DoubleArrayStack::display() {
if (top == 0) {
cout << "No elements to display" << endl;
}
for (int i = 0; i <= top; i++)
{
cout << items[i] << " ";
}
cout << endl;
}
