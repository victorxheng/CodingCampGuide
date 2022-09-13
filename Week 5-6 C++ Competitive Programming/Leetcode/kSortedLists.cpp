#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution1
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode list(0), *current = &list;
        while (true)
        { // loop until all lists are empty
            bool areAllListsEmpty = true;
            int minVal = INT_MAX, minIndex = 0;
            // find the maximum and check if all are empty
            for (int i = 0; i < lists.size(); i++)
            {
                if (lists[i])
                {
                    areAllListsEmpty = false;
                    if (lists[i]->val < minVal)
                    {
                        minVal = lists[i]->val;
                        minIndex = i;
                    }
                }
            }
            if (areAllListsEmpty)
                break;
            // add to list
            current->next = new ListNode(minVal);
            current = current->next;
            lists[minIndex] = lists[minIndex] ? lists[minIndex]->next : lists[minIndex]; // increment
        }
        return list.next;
    }
};
class Solution2
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0)
            return NULL;
        vector<int> v;
        for (int i = 0; i < lists.size(); i++)
        {
            while (lists[i])
            {
                v.push_back(lists[i]->val);
                lists[i] = lists[i] ? lists[i]->next : lists[i]; // increment
            }
        }
        ListNode list(0), *current = &list;
        sort(v.begin(), v.end());
        for (int i : v)
        {
            current->next = new ListNode(i);
            current = current->next;
        }
        return list.next;
    }
};
class Solution1
{
    struct comp
    {
        bool operator()(ListNode *l1, ListNode *l2)
        {
            return l1->val > l2->val;
        }
    };
};
int main()
{

    return 0;
}