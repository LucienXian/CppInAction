#include <iostream>
#include <memory>

class Node
{
private:
    int value;
public:
    std::shared_ptr<Node> leftPtr;
    std::shared_ptr<Node> rightPtr;

    std::weak_ptr<Node> parentPtr;
    Node(int val) : value(val) {
        std::cout<<"Contructor"<<std::endl;
    }
    ~Node() {
        std::cout<<"Destructor"<<std::endl;
    }
};

int main()
{
    std::shared_ptr<Node> ptr = std::make_shared<Node>(4);
    ptr->leftPtr = std::make_shared<Node>(2);
    ptr->rightPtr = std::make_shared<Node>(5);
    ptr->leftPtr->parentPtr = ptr;
    ptr->rightPtr->parentPtr = ptr;
    std::cout<<"ptr reference count = "<<ptr.use_count()<<std::endl;
    std::cout<<"ptr->leftPtr reference count = "<<ptr->leftPtr.use_count()<<std::endl;
    std::cout<<"ptr->rightPtr reference count = "<<ptr->rightPtr.use_count()<<std::endl;
    std::cout<<"ptr->rightPtr->parentPtr reference count = "<<ptr->rightPtr->parentPtr.lock().use_count()<<std::endl;
    std::cout<<"ptr->leftPtr->parentPtr reference count = "<<ptr->leftPtr->parentPtr.lock().use_count()<<std::endl;

    return 0;
}