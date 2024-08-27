class MyLinkedList
{
public:
    struct Node
    {
        int val;
        Node *next;
        Node(int x)
        {
            val = x;
            next = NULL;
        }
    };

    int get(int index)
    {
        if (index < 0 || index >= len)
            return -1;
        Node *cur = dummy.next;
        for (int i = 0; i < index; i++)
        {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val)
    {
        Node *head = dummy.next;
        Node *node = new Node(val);
        node->next = head;
        dummy.next = node;
        ++len;
    }

    void addAtTail(int val)
    {
        Node *cur = &dummy;
        while (cur->next)
        {
            cur = cur->next;
        }
        cur->next = new Node(val);
        ++len;
    }

    void addAtIndex(int index, int val)
    {
        if (index > len)
            return;
        Node *cur = &dummy;
        for (int i = 0; i < index; i++)
        {
            cur = cur->next;
        }
        Node *cache = cur->next;
        Node *node = new Node(val);
        cur->next = node;
        node->next = cache;
        ++len;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= len)
            return;
        Node *cur = &dummy;
        for (int i = 0; i < index; i++)
        {
            cur = cur->next;
        }
        Node *cache = cur->next;
        cur->next = cache->next;
        --len;
        delete cache;
    }
    int len = 0;
    Node dummy = Node(0);
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */