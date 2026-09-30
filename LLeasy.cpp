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



                                        #DOUBLE LINKED LIST



#ARRAY TO DOUBLE LL


// class node{
//     public:
//     int value;
//     node* next;
//     node* previous;
    
//     public:
//     node(int value1){
//         value=value1;
//         next=nullptr;
//         previous=nullptr;
//     }
//      public:
//     node(int value1,node* next1,node* previous1){
//         value=value1;
//         next=next1;
//         previous=previous1;
//     }
    
// };

// node* arrtodoubleLL(vector<int>arr){
//     node* head=new node(arr[0]);
//     node* prev =head;
//     for(int i=1;i<arr.size();i++){
//         node* temp=new node(arr[i]);
//         temp->previous=prev;
//         prev->next=temp;
//         prev=prev->next;
//     }
//     return head;
// }
// void print(node* head){
// node* temp=head;
// while(temp){
// cout<<temp->value<<" ";
// temp=temp->next;
// }
// }




 #DELETE HEAD 


//  node* delete_head(node* head){
//     if(head==NULL||head->next==NULL){
//         return NULL;
//     }
//     node* temp=head;
//     head=head->next;
//     head->previous=nullptr;
//      temp->next=nullptr;
//      delete temp;
//      return head;
// }


#DELETE TAIL

// node* delete_tail(node* head){
//     if(head==NULL||head->next==NULL){
//         return NULL;
//     }
//     node* mover=head;
//     while(mover->next!=nullptr){
//         mover=mover->next;
//     }
//     node* prev=mover->previous;
//     mover->previous=nullptr;
//     prev->next=nullptr;
//     delete mover;
//     return head;

// }


#DELETE ANY K ELEMET

// node* delete_any_k_element(node* head,int k ){
//     node* temp=head;
//     int count=0;
//     while(temp){
//          count++;
//         if(count==k) break;
        
//          temp=temp->next;
//     }
//     node* prevbox= temp->previous;
//     node* nextbox=temp->next;
//     if(temp->next==NULL&&temp->previous==NULL){
//         delete temp;
//         return NULL;
//     }
//     else if(temp->previous==NULL){
//        return  delete_head(head);
//     }
//     else if(temp->next==NULL){
//            return delete_tail(head);
//     }
//     else{
//          prevbox->next=nextbox;
//          nextbox->previous=prevbox;
//          temp->next=nullptr;
//          temp->previous=nullptr;
//          delete temp;
//          return head;
//     }
// }


#DELETE ANY NODE


void delete_node(node* box){
    node* temp=box;
    node* prevbox=temp->previous;
    node* nextbox=temp->next;
    if(temp->next==NULL){
        prevbox->next=nullptr;
        temp->previous=nullptr;
        delete temp;
    }
    else{
        prevbox->next=nextbox;
        nextbox->previous=prevbox;
        temp->next=nullptr;
        temp->previous=nullptr;
        delete temp;

    }

}


#INSERT BEFORE HEAD 


// node* insert_before_head(node* head,int data){
//     if(head==nullptr) return NULL;
//     node* box=new node(data);
//     box->next=head;
//     head->previous=box;
//     head=box;
//     return head;
// }


#INSERT BEFORE TAIL


// node* insert_befor_tail(node* head,int data){
//     if(head==NULL) return head;
//     if(head->next==NULL){
//         return insert_before_head(head,data);
//     }
//     node* tail=head;
//     while(tail->next!=NULL){
//         tail=tail->next;
//     }
//     node* previousbox=tail->previous;
//     node* box=new node(data,tail,previousbox);
//     previousbox->next=box;
//     tail->previous=box;
//     return head;
// }


#INSERT BEFORE K ELEMENT


// node* insert_before_k_element(node* head,int data,int k){
//      if(k==1){
//         return insert_before_head(head,data);
//      }
//      else{
//         int count=0;
//         node* temp=head;
//         while(temp->next!=NULL){
//             count++;
//             if(count==k) break;
//             temp=temp->next;
//         }
//         node* previousbox=temp->previous;
//         node* box=new node(data,temp,previousbox);
//         previousbox->next=box;
//         temp->previous=box;
//         return head;
//      }
// }


# INSERT BEFORE NODE

// void insert_before_node(node*  box,int data){
// node* previousbox=box->previous;
// node* newbox=new node(data,box,previousbox);
// previousbox->next=newbox;
// box->previous=newbox;
// }



###################################################################################################################
                                        GOD GIVE ME EVERYTHING
###################################################################################################################