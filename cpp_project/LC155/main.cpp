// https://leetcode.com/problems/min-stack/

#include <iostream>
#include "min-stack.h"

using namespace std;

int main()
{
   MinStack ms;
   ms.push(18);
   ms.push(19);
   ms.push(29);
   ms.push(15);
   cout << ms.getMin() << endl;
   ms.pop();
   cout << ms.getMin() << endl;
   ms.pop();
   cout << ms.getMin() << endl;
   return 0;
}