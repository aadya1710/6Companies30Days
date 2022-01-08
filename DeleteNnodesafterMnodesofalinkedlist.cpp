class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        while(head){
            //skipping m nodes
            for(int i=0;i<M-1 && head!=NULL ;i++){
                head=head->next;
            }
            if(head==NULL){
                 return;
            }
            Node* temp=head->next;
            //deleting n nodes
            for(int i=0;i<N && temp!=NULL;i++){
                temp=temp->next;
            }
            head->next=temp;
            head=temp;
        }
        return;
    }
};
