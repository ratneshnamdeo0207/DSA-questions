//https://leetcode.com/problems/merge-two-sorted-lists/
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        return list2;
        if(list2 == NULL)
        return list1;
        ListNode* temp = NULL;
        ListNode* prev = NULL;
        ListNode* curr = NULL;
        int i;
        if(list1 -> val <= list2 -> val)
        {
            i = 1;
            temp = list2;
            prev = list1;
            curr = list1 -> next;
        }
        else{
            i = 0;
            cout<<"in";
            temp = list1;
            prev = list2;
            curr = list2 -> next;
        }
        
      
        while(curr != NULL && temp != NULL)
        {
            if(prev -> val <= temp -> val && temp -> val <= curr -> val)
            {
                ListNode* m = temp;
                temp = temp -> next;
                prev -> next = m;
                m -> next = curr;
                prev = m;
                continue;
            }
            prev = curr;
            curr = curr -> next;
        }
        if(curr == NULL && temp != NULL)
        {
            prev -> next = temp;
        }
        if(i == 1)
        list1 = list1;
        if(i == 0)
        list1 = list2;
        return list1;
    }
