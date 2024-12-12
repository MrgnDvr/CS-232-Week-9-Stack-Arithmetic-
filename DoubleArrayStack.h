
#ifndef _DOUBLE_ARRAY_STACK
#define _DOUBLE_ARRAY_STACK
const int MAXSTACK = 100; //i.e., the maximum stack size
class DoubleArrayStack {
private:
double items[MAXSTACK] = {0};
int top; //index to the top of the stack
public:
DoubleArrayStack(); //default constructor
bool isEmpty() const;
void push(const double& newEntry);
double pop();
double peek() const;
void display();
};
#endif
