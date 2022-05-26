/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> min_heap;
    for(int i=0;i<n;i++){
        min_heap.push(make_pair(A[i]->val,A[i]));
    }
    ListNode *prev=NULL;
    ListNode *head=NULL;
    while(min_heap.size()){
        pair<int,ListNode*> temp=min_heap.top();
        min_heap.pop();
        if(prev==NULL)
        {
            head=temp.second;
            prev=head;
        }
        else {
            prev->next=temp.second;
            prev=temp.second;
        }
        if(temp.second->next){
            min_heap.push(make_pair(temp.second->next->val,temp.second->next));
        }
    }
    prev->next=NULL;
    return head;
}
