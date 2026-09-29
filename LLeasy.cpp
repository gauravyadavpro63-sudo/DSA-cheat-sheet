#LINKED LIST  BASIC STRUCTURE

// #include <bits/stdc++.h>
// using namespace std;
// class node{    
//    public:
//    int data;
//    node*next;      

//    public:
//    node(int data1, node*next1){
//     data=data1;
//     next=next1;
//    }
// };
// int main(){
// vector<int>arr={2,5,8,7};
// node*y=new node(arr[0],nullptr);    Create a node containing 2, make its next point to nothing, and store that node's address inside y.
// cout<<y<<endl;         prints the address stored in y
// cout<<y->data<<endl;   Go to the object whose address is stored in y, then access its data.
// cout<<y->next;        go to that node → get the address of the next node
// }


#CONVERT ARRAY TO LINKED LIST


// class node{
//    public:
//    int data;
//    node* next;
//    public:
//    node(int data1,node* next1){
//       data=data1;
//       next=next1;
//    }
//    node(int data1){
//       data=data1;
//       next=nullptr;
//    }
// };
// node* convertarrtoLL(vector<int>&arr){
//    node* head=new node(arr[0]);
//    node* mover=head;
//    for(int i=1;i<arr.size();i++){
//       node* temp=new node(arr[i]);
//       mover->next=temp;
//       mover=temp;
//    }
//    return head;
// }



#TRAVERSING IN LL

//    node*temp=head;
   // while(temp){
   //    cout<<temp->data<<" ";
   //    temp=temp->next;

   // }



   #LENGTH OF LINKED LIST


//    int length_of_linked_list(node* head){
//    int count=0;
//    node* temp=head;
//    while(temp){
//       // cout<<temp->data<<" ";
//       temp=temp->next;
//       count++;
//    }
//    return count;
// }


SEARCH IN LL 



// bool search(node* head,int n){
// node* temp=head;
// while(temp){
//    if(temp->data==n) return true;
//    temp=temp->next;
// }
// return false;
// }


#DELETE HEAD

//  node* removedhead(node* head){
//     if(head==NULL) return head;
//     node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;
//  }



#DELETE TAIL



//  node* removetail(node* head){
//     if(head==NULL||head->next==NULL) return head;
//     node* temp=head;
//     while(temp->next->next!=nullptr){
//         temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=nullptr;
//     return head;
//  }



#DELETE ANY POSITION


//  node* delete_any_position(node* head,int k){
//    if(head==NULL) return head;
//    if(k==1){
//      node* temp=head;
//      head=head->next;
//      delete temp;
//      return head;
//    }
//    int count=0;
//    node* temp=head;
//    node* previous=NULL;
//    while(temp!=NULL){
//       count++;
//     if(count==k){
//       previous->next=previous->next->next;
//       delete temp;
//       break;
//    }
//    previous=temp;
//    temp=temp->next;
   
//  }
//  return head;
// }



#DELETE NODE WITH VALUE


// node* delete_node_with_value(node* head,int value){
//    if(head==NULL) return head;
//    if(value==head->data){
//       node* temp=head;
//       head=head->next;
//       delete temp;
//       return head;
//    }
//    node* temp=head;
//    node* previous=NULL;
//    while(temp!=NULL){
//       if(temp->data==value){
//            previous->next=previous->next->next;
//            delete temp;
//            break;
//       }
//       previous=temp;
//       temp=temp->next;
//    }
//    return head;
   
// }


    #INSERT IN HEAD 


//        node* inserting_in_head(node* head,int value){
//          node* temp=new node(value,head);
//          return temp;
//    }


   #INSET IN TAIL


//    node* inserting_in_tail(node* head,int value){
//       if(head==NULL){
//        return  node* temp=new node(value);
//       }
//       node* temp=head;
//       while(temp->next!=NULL){
//          temp=temp->next;
//       }
//       temp->next=new node(value);
//       return head;
//    }


#INSERTION IN KTH POSITION


//    node* inserting_in_k_position(node* head,int k){
//       if(head==NULL){
//          if(k==1){
//          node* temp=new node(32);
//          return temp;
//          }
//          else return NULL;
//       }
//       if(k==1){
//          node* temp=new node(32,head);
//          return temp;

//       }
//       int count=0;
//       node* temp=head;
//       while(temp!=NULL){
          
//          count++;
//          if(count==(k-1)){
//            node* box=new node(32);
//            box->next=temp->next;
//            temp->next=box;
//            break;

//          }
//          temp=temp->next;
//       }
//       return head;
      
//    }


#INSERTING BEFORE VALUE


//    node* inserting_before_value(node* head,int value){
//    if(head==NULL){
//       return NULL;
//    }
//    if(value==head->data){
//       node* temp=new node(32,head);
//       return temp;
//    }
//    node* temp=head;
//    while(temp->next!=NULL){
//       if(temp->next->data==value){
//          node* box=new node(32);
//          box->next=temp->next;
//          temp->next=box;
//          break;
//       }
//       temp=temp->next;
//    }
//    return head;
//    }