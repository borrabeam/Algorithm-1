#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef string ValueType;
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
    int n;
    Stack container;
    string com;
    string name;


    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> com;
        if (com == "Sleep")
        {
            cin >> name;
            container.push(name);
        }
        else if (com == "Kick" and !container.is_empty())
        {
            container.pop();
        }
        else if (com == "Test")
        {
            if (container.is_empty())
            {
                cout << "Not in a dream" << endl;
            }
            else cout << container.top() << endl;

        }
    }
}