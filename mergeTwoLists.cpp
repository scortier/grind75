class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
            return list2;
        if (list2 == nullptr)
            return list1;

        if (list1->val > list2->val)
        {
            swap(list1, list2);
        }
        ListNode *result = list1;
        while (list1 != nullptr && list2 != nullptr)
        {
            ListNode *tempNode = nullptr;
            while (list1 != nullptr && list1->val <= list2->val)
            {
                tempNode = list1;
                list1 = list1->next;
            }
            tempNode->next = list2;
            swap(list1, list2);
        }
        return result;
    }
};