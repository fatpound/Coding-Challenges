struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* list = NULL;
    struct ListNode* end;

    int sum = 0;

    while (l1 != NULL || l2 != NULL)
    {
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        
        if (list == NULL)
        {
            list = (struct ListNode*) malloc(sizeof(struct ListNode));
            end = list;
        }
        else
        {
            end->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            end = end->next;
        }
        
        end->next = NULL;
        end->val = sum % 10;
        sum /= 10;
    }

    if (sum != 0)
    {
        sum %= 10;

        end->next = (struct ListNode*) malloc(sizeof(struct ListNode));
        end = end->next;
        end->val = sum;
        end->next = NULL;
    }

    return list;
}
