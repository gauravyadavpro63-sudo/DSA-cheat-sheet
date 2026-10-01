#DELETE MIDDLE NODE

// brute force solution tc=O(n+n/2); sc=O(1);
// node* middle_node_address(node* head){
// int count=0;
// node* temp=head;
// while(temp){
//     count++;
//     temp=temp->next;
// }
// int middle_node=((count)/2+1);
// temp=head;
// while(temp){
//     middle_node-=1;
//     if(middle_node==0){
//       return temp;
//     }
//     temp=temp->next;
// }
// optimal solution tc=O(n/2) sc=O(1);  rabbit and turtole solution
// node* middle_node_address(node* head){
// node* slow=head;
// node* fast=head;
// while(fast!=NULL&&fast->next!=NULL){
//   fast=fast->next->next;
//   slow=slow->next;
// }
// return slow;
// }



#REVERSE LINKED LIST



node* reverse_linked_list_itterative_and_recursive(node* head){
    // brute force tc=O(2n) sc=n
    // node* temp=head;
    // stack<int>st;
    // while(temp){
    //  st.push(temp->data);
    //  temp=temp->next;
    // }
    // temp=head;
    // while(temp){
    //     temp->data=st.top();
    //     st.pop();
    //     temp=temp->next;
    // }
    // return head;

//    optimal solution
//    tc-O(1) sc=O(1)
    // node* temp=head;
    // node* previousbox =nullptr;
    // while(temp){
    //     node* nextbox=temp->next;
    //     temp->next=previousbox;
    //     previousbox=temp;
    //     temp=nextbox;

    // }
    // return previousbox;
    // recursive solution   tc=O(n)  sc=O(n) {recursive call space}
//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     node* newhead=reverse_linked_list_itterative_and_recursive(head->next);
//     node* present=head->next;
//     present->next=head;
//     head->next=nullptr;
//     return newhead;
// }




#DETECT LOOP IN LINKED LIST 


bool detect_loop_in_linked_list(node* head){
    // brute force solution tc=O(n) sc=O(n)
//     unordered_map<node*,int>hashmap;
//     node* temp=head;
//     while(temp!=NULL){
//         if(hashmap.find(temp)!=hashmap.end()) return true;
//         hashmap[temp]++;
//         temp=temp->next;
//     }
//     return false;
// optimal solution tc=o(n) sc=O(1);  rabbit and turtole
// node* temp=head;
// node* fast=temp;
// node* slow=temp;
// while(fast!=NULL&&fast->next!=NULL){
//     fast=fast->next->next;
//     slow=slow->next;
//      if(fast==slow) return true;
// }
// return false;
// }



#STARTING POINT OF LOOP IN LINKED LIST 


node* starting_point_of_loop_in_ll(node* head){
    // brute force  tc=O(n) sc=O(1);
    // unordered_map<node*,int>hashmap;
    // node* temp=head;
    // while(temp!=NULL){
    //     if(hashmap.find(temp)!=hashmap.end()) return temp;
    //     hashmap[temp]++;
    //     temp=temp->next;
    // }
    // return NULL;
    // optimal solution tc=O(n) sc=O(1);
//     node* temp=head;
//     node* fast=temp;
//     node* slow=temp;
//     while(fast!=NULL&&fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             slow=head;
//             while(slow!=fast){
          
//           slow=slow->next;
//           fast=fast->next;
//         }
//         return slow;
//     }
// }
//     return NULL;
// }



#LENGTH OF LOOP IN LL

int length_of_loop_in_ll(node* head){
    // brute force tc=O(n) sc=(n);
    // node* temp=head;

    // unordered_map<node*,int>mpp;
    // int count=1;
    // while(temp!=NULL){
    //     if(mpp.find(temp)!=mpp.end()){
    //       int value=mpp[temp];
    //       return count-value;
    //     }
    //     mpp[temp]=count;
    //     count++;
    //     temp=temp->next;
        
    // }
    // return 0;
    // optimal solution tc=O(2n) sc=O(1);
//     node* temp=head;
//     node* fast=temp;
//     node* slow=temp;
//     while(fast!=NULL&&fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             int count=1;
//             fast=fast->next;
//             while(fast!=slow){
               
//                fast=fast->next;
//                count++;
//             }
//             return count;
//         }
//     }
//     return 0;
// }

#CHECK PALLINDROME

bool cheak_pallindrome(node* head){
    // brute force tc=O(2n) sc=O(n);
    // stack<int>st;
    // node* temp=head;
    // while(temp!=NULL){
    //     st.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     if(temp->data!=st.top()) return false;
    //     temp=temp->next;
    //     st.pop();
    // }
    // return true;

    // optimal solution tc=O(2n) sc=O(1);
    // node* temp=head;
    // node* slow=head;
    // node* fast=head;
    // while(fast->next!=NULL&&fast->next->next!=NULL){
    //     fast=fast->next->next;
    //     slow=slow->next;
    // }
    // node* secondhalf=reverse_linked_list_itterative_and_recursive(slow->next);
    // node* newhead=secondhalf;
    // while(newhead!=NULL){
        
    // if(newhead->data!=temp->data){
    //     reverse_linked_list_itterative_and_recursive(secondhalf);
    //     return false;
    // }
    // temp=temp->next;
    // newhead=newhead->next;
    

    // }
    // reverse_linked_list_itterative_and_recursive(secondhalf);
    // return true;
}

