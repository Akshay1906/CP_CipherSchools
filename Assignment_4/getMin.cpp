#include <bits/stdc++.h>
using namespace std;
class Stack 
{ 
    public:
    stack<int> s; 
    int minimum; 
  
    
    void getMin() 
    { 
        if (s.empty()) 
            cout << "Stack is empty\n"; 
  
        
        else
            cout <<"Minimum Element in the stack is: "
                 << minimum << "\n"; 
    } 
  
  
    void peek() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty "; 
            return; 
        } 
  
        int t = s.top(); 
  
        cout << "Top Most Element is: "; 
  
        
        (t < minimum)? cout << minimum: cout << t; 
    } 
  
   
    void pop() 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
        cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 

        if (t < minimum) 
        { 
            cout << minimum << "\n"; 
            minimum = 2*minimum - t; 
        } 
  
        else
            cout << t << "\n"; 
    } 
  
 
    void push(int x) 
    { 
        
        if (s.empty()) 
        { 
            minimum = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        } 
  
       
        if (x < minimum) 
        { 
            s.push(2*x - minimum); 
            minimum = x; 
        } 
  
        else
           s.push(x); 
  
        cout <<  "Number Inserted: " << x << "\n"; 
    } 
}; 
  

int main() 
{ 
    Stack s; 
    s.push(3); 
    s.push(5); 
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
    s.peek(); 
  
    return 0; 
} 

