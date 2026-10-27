 class Node{
        public:
        int key;
        int value;
        Node* prev;
        Node* next;
        Node(int k,int v){
            key=k;
            value=v;
            next=nullptr;
            prev=nullptr;
        }
    };
class LRUCache {
public:
    Node* head;
    Node* tail;
    int capacity;
    unordered_map<int,Node*> mp;
    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;

    }

    void addNode(Node* node){
        Node* prevNode=tail->prev;
        node->next=tail;
        node->prev=prevNode;

        prevNode->next=node;
        tail->prev=node;
    }

    void deleteNode(Node* node){
        Node* prevNode=node->prev;
        Node* nextNode=node->next;

        prevNode->next=nextNode;
        nextNode->prev=prevNode;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;

        Node* node=mp[key];

        deleteNode(node);
        addNode(node);

        return node->value;
    }
    
    void put(int key, int value) {
     if(mp.find(key)!=mp.end()){
        Node* node=mp[key];
        node->value=value;

        deleteNode(node);
        addNode(node);

        return;
     }   

     if(mp.size()==capacity){
        Node* lru=head->next;

        deleteNode(lru);
        mp.erase(lru->key);
        delete lru;
     }
     Node* newNode=new Node(key,value);

     addNode(newNode);
     mp[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */