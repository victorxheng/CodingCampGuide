
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode list(0), *current = &list;
        int carryOver = 0, value;
        while(l1 || l2 || carryOver){
            value = (l1?l1->val:0) + (l2?l2->val:0) + carryOver;
            current->next = new ListNode(value % 10);
            carryOver = value / 10;
            
            current = current->next;
            l1 = l1?l1->next:l1;
            l2 = l2?l2->next:l2;
        }
        return list.next;
    }
};