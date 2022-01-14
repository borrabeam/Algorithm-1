#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef double ValueType;
struct ListNode {
  ValueType val;
  ListNode* next;
  ListNode(ValueType v, ListNode* nxt=0)
    : val(v), next(nxt) {}
};

class Stack {
private:
  ListNode* top_node;
public:
  Stack()
    : top_node(0) {}
  ~Stack();
  
  void push(ValueType v);
  ValueType pop();
  ValueType top() { return top_node->val; }
  bool is_empty() { return top_node == 0; }
};

void Stack::push(ValueType v)
{
  ListNode* new_node = new ListNode(v,top_node);
  top_node = new_node;
}

ValueType Stack::pop()
{
  // your code here... 
    ListNode *tmp = top_node;
    ValueType tmp2 = tmp->val;
    top_node = top_node -> next;
    delete tmp;
    return tmp2;
}


Stack::~Stack()
{
  while(top_node != 0) {
    ListNode* tmp = top_node;
    top_node = top_node->next;
    delete tmp;
  }
}

int main()
{
  string buffer;

  Stack operands;

  do {
    cin >> buffer;
    if(buffer.at(0) == '=') {
      break;
    } else if((buffer.at(0) >= '0') && (buffer.at(0) <= '9')) {
      double val = stod(buffer);
      operands.push(val);
    } else {
    
            ValueType first = operands.pop();
            ValueType second = operands.pop();
            ValueType final;
            if (buffer.at(0) == '+')
            {
                final = second+first;
            }
            else if (buffer.at(0) == '-')
            {
                final = second-first;
            }
            else if (buffer.at(0) == '*')
            {
                final = second*first;
            }
            else if (buffer.at(0) == '/')
            {
                final = second/first;
            }
            operands.push(final);
    }
  } while(true);
  cout << fixed << setprecision(4) << operands.top() << endl;
}