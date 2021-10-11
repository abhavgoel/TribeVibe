// class ListNode{
//     public:
//         int val;
//         ListNode *next;
//         ListNode(int value){
//             val=value;
//             next=NULL;
//         }
// }
class MyLinkedList {
public:
    /** Initialize your data structure here. */
    ListNode *curr=NULL,*head=NULL,*tail=NULL,*prev=NULL;
    int nodes=0;
    MyLinkedList() {
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        // cout<<nodes<<" ";
        if(index>=nodes)
            return -1;
        curr=head;
        while(index--)
            curr=curr->next;
        return curr->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        ListNode *tmp=new ListNode(val);
        if(head==NULL){
            head=tmp;
            tail=tmp;
        }
        else{
            tmp->next=head;
            head=tmp;
        }
        nodes++;
        // cout<<nodes<<" ";
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        ListNode *tmp=new ListNode(val);
        if(head==NULL){
            head=tmp;
            tail=tmp;
        }
        else{
            tail->next=tmp;
            tail=tmp;
        }
        nodes++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        // cout<<" check"
        ListNode *tmp=new ListNode(val);
        if(index>nodes)
            return;
        if(index==0){
            tmp->next=head;
            head=tmp;
            // nodes++;
        }
        else if (index==nodes){
            tail->next=tmp;
            tail=tmp;
            // nodes++;
        }
        else{
            curr=head;
            prev=NULL;
            while(index--){
                prev=curr;
                curr=curr->next;
            }
            
            prev->next=tmp;
            tmp->next=curr;
            
        }
        nodes++;
        // cout<<nodes<<" ";
            
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=nodes)
            return;
        prev=NULL;
        curr=head;
        if(index==0){
            head=head->next;
        }
        else if(index==nodes-1){
            curr=head;
            prev=NULL;
            while(curr->next){
                prev=curr;
                curr=curr->next;
            }
            prev->next=NULL;
            tail=prev;
        }
        else  {  
            while(index--){
                prev=curr;
                curr=curr->next;
            }
             prev->next=curr->next;
        }
        nodes--;
       // cout<<nodes<<" ";
        // free(curr);
    }
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