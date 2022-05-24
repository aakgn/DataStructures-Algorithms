#include <iostream>
class IntSLLNode{
public:
    IntSLLNode(){
        next = 0;
    }
    IntSLLNode(int i, IntSLLNode *in = 0) {
        info = i, next = in;
    }
    int info;
    IntSLLNode *next;
};
int main()
{
    IntSLLNode *p = new IntSLLNode(3);
    std::cout << p->info << std::endl;

}
