#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
struct Node{
    int data;
    struct Node* next;
};
// count no of nodes
int count(struct Node* head){
    int cnt=0;
    while(head!=NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}
// delete middle node
struct Node* deleteMid(struct Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    struct Node* temp=head;
    int cnt=count(head);
    int mid=cnt/2;
    while(mid-- >1){
        head=head->next;
    }
    head->next =head->next->next;
    return temp;
}
void print(struct Node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data <<"->";
        ptr=ptr->next;
    }cout<<"NULL"<<endl;
}
// to create new node
Node* newnode(int data){
    struct Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    return temp;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

struct Node* head=newnode(1);
head->next= newnode(2);
head->next=newnode(3);
cout << "Given Linked List\n"; 
    print(head); 
    head = deleteMid(head); 
    cout << "Linked List after deletion of middle\n"; 
    print(head); 
return 0;
}