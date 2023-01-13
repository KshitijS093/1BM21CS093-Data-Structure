/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 typedef struct ListNode * Node;
bool hasCycle(struct ListNode *head) {                                    
    Node thej,dheere;
    if(head==NULL || head->next==NULL)
    return false;

    thej=NULL;
    dheere=head;

    while(thej!=dheere)
    {
        if (thej==NULL)
        {
        thej=dheere;
        }
        thej=thej->next->next;
        dheere=dheere->next;
        if(thej==dheere)
        {
            return true;
        }
        if(thej==NULL||thej->next==NULL)
        {
            return false;
        }
    }
    return false;
}
