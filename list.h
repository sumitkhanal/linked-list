class Node
{
public:
        int info;
        Node *next;
};

class List
{
private:
    Node *HEAD;
    Node *TAIL;
public:
    List();
    ~List();

    bool isEmpty();
    void addToHead(int data);
    void add (int data, Node* predecessor);
    void addToTail(int data);
    void removefromHead();
    void traverse();
    bool retrive(int data, Node *outputptr);
};
