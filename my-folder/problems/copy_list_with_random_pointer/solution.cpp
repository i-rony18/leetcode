/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> nodeMap;
        Node* dummy = new Node(0);
        Node* current = dummy;
        Node* originalNode = head;
        while (originalNode) {
            Node* copiedNode = new Node(originalNode->val);
            nodeMap[originalNode] = copiedNode;
            current->next = copiedNode;
            originalNode = originalNode->next;
            current = current->next;
        }
        originalNode = head; 
        current = dummy->next; 
        
        while (originalNode) {
            if (originalNode->random) {
                current->random = nodeMap[originalNode->random];
            }
            originalNode = originalNode->next;
            current = current->next;
        }
        return dummy->next;
    }
};