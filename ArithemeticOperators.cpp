#include <iostream>
using namespace std;
int main(){
    int first = 21, second = 10 , result;
    result = first % second;
    cout << "first % second of result is :" << result << endl;
    result = first++;
    // first++;
    cout << "first++ of result is :" << result << endl;
    result = first--;
    cout << "first-- of result is :" << result << endl;
    result = ++first;
    cout << "++first of result is :" << result << endl;
    first = 21;
    result -=  first;
    cout << "-= Operator,value of result is :" << result << endl;
    result *=  first;
    cout << "*= Operator,value of result is :" << result << endl;
    result /=  first;
    cout << "/= Operator,value of result is :" << result << endl;
    cout << "=====================================================" << endl;
    first %=  result;
    cout << "%= Operator,value of result is :" << first << endl;
    return 0;
}