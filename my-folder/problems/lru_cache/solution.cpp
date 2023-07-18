class LRUCache {
public:
    class node{
        public:
            int key,val;
            node* next;
            node* prev;
            node(int newkey,int newval){
                key=newkey,val=newval;
            }
    };
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int storecap; 
    unordered_map<int,node*> mp;
    LRUCache(int capacity) {
        storecap=capacity;
        head->next=tail;
        tail->prev=head; 
    }
    
    void addnode(node* newnode){
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }

    void deletenode(node* delnode){
        node* delprev=delnode->prev;
        node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }

    int get(int keyfind) {
        if(mp.find(keyfind)!=mp.end()){
            node* resnode=mp[keyfind];
            int result=resnode->val;
            mp.erase(keyfind);
            deletenode(resnode);
            addnode(resnode);
            mp[keyfind]=head->next; 
            return result;
        }
        return -1;
    }
    
    void put(int keytoput, int value) {
        if(mp.find(keytoput)!=mp.end()){ 
            node* existnode=mp[keytoput]; 
            mp.erase(keytoput);
            deletenode(existnode); 
        }
        if(mp.size()==storecap){ 
            mp.erase(tail->prev->key); 
            deletenode(tail->prev); 
        }
        node* nodetoput=new node(keytoput,value);
        addnode(nodetoput); 
        mp[keytoput]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */