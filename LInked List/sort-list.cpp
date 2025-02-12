//https://leetcode.com/problems/sort-list/
ListNode* findMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast  != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right)
    {
        if(left == NULL)
        return right;
        if(right == NULL)
        return left;

        ListNode* head = new ListNode(-1);
        ListNode* tail = head;

        while(left != NULL && right != NULL)
        {
            if(left -> val < right -> val)
            {
                tail -> next = left;
                tail = left;
                left = left -> next;
            }
            else{
                tail -> next = right;
                tail = right;
                right= right -> next;
            }
        }
        while(left != NULL)
        {
            tail -> next = left;
            tail = left;
            left = left -> next;
        }
        while(right != NULL)
        {
            tail -> next = right;
            tail = right;
            right= right -> next;
        }
        head = head -> next;
        return head;

    }
    

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        
        ListNode* mid = findMid(head);
        
        ListNode* left = head;
        ListNode* right = mid -> next;

        mid -> next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);
        return result;
       
    }
