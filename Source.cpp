
#include<iostream>
#include<string>
#include"CharStack.h"
using namespace std;
int main() {
CharStack* stackPrt = new CharStack();
string userEquation;
int length;
bool evaluated = false;
cout << "Enter a math equation with parenthesis: ";
getline(cin, userEquation);
length = userEquation.length();
//traverse thru the equation string
for (int i = 0; i < length; i++) {
if (userEquation[i] == '(') {
stackPrt->push(userEquation[i]);
}
else if (userEquation[i] == ')') {
if (stackPrt->isEmpty() == true) { //extra closing parens
scenario
cout << "Your equation is not balanced";
evaluated = true;
break;
}
else if (stackPrt->isEmpty() == false) {
stackPrt->pop();
}
}
}//for (int i = 0; i < length; i++)
if (stackPrt->isEmpty() == true && evaluated == false) {
cout << "Your equation is balanced." << endl;
}
else if (stackPrt->isEmpty() == false && evaluated == false) {
cout << "Your equation is not balanced." << endl;
}
system("pause");
return 0;
}
