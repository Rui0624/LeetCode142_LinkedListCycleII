//
//  main.cpp
//  LeetCode142_LinkedListCycleII
//
//  Created by Rui on 1/14/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}



//Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* begin = head;
        
        while(true)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(!fast || !fast -> next)
                return NULL;
            
            if(slow == fast)
                break;
        }
        
        while(true)
        {
            if(slow == begin)
                return slow;
            slow = slow -> next;
            begin = begin -> next;
            
            if(slow == begin)
                break;
        }
        
        return slow;
        
    }
};
