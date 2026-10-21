//     //  stack and queue theory and basics

//     A data structure is simply a way of organizing and storing data so that it can be used efficiently.

//     The clothes are the data, and the cupboard's organization is the data structure.

// Data Structure	        Think of it as	            Best for
// Array	               Books on a shelf	         Fast access by index
// Linked List	          Train compartments	        Easy insertion/deletion
// Stack	              Stack of plates	           Undo, recursion
// Queue	              People waiting in line	        Scheduling, BFS
// Tree	             Family tree	                Hierarchical data
// Graph	            Cities connected by roads	      Networks, maps
// Hash Map	            Dictionary	            Fast searching by key




#IMPLEMENTATIN OF STACK USING ARRAY

// class stackk{
//     int arr[100];
//     int topp=-1;

//     public:
//      void push(int x){
//         if(topp>=99) return;   //or throw overflow_error("stack is full")
//         topp=topp+1;
//         arr[topp]=x;
//      }
//      void pop(){
//         if(topp==-1) return;     //or throw runtime_error("stack is empty")
//         topp=topp-1;

//      }
//      int  top(){
//         if(topp==-1) return -1;
//         return arr[topp];
//      }
//      int size(){
//         return topp+1;
//      }

// };


#IMPLEMENT QUEUE USING ARRAY


// class queuee{
//    static const int size=4;
//     int arr[size];
//     int start=-1;
//     int end=-1;
//     int currentsize=0;
//     public:
//     void push(int x){
//         if(currentsize==size) return;
//         if(currentsize==0){
//             start=0;
//             end=0;
//         }
//         else{
//             end=(end+1)%size;
//         }
//         arr[end]=x;
//         currentsize=currentsize+1;
//     }
//     void pop(){
//         if(currentsize==0) return;
//         int element=arr[start];
//         if(currentsize==1){
//             start=-1;
//             end=-1;
//         }
//         else{
//             start=(start+1)%size;
//         }
//         currentsize=currentsize-1;
//     }

//     int front(){
//         if(currentsize==0) return -1;
//         return arr[start];
//     }
//     int sizee(){
//         return currentsize;
//     }

// };



#IMPLEMENT STACK USING LL



// class stackk{
// public:
// node* top;
// int size=0 ;
// stackk(){
//     top=nullptr;
// }
// void push(int x){
//     node* temp=new node(x);
//     temp->next=top;
//     top=temp;
//     size=size+1;
// }
// void pop(){
//     if(top==nullptr) return;
//     node* temp=top;
//     top=top->next;
//     delete temp;
//     size=size-1;
// }
// int peek(){
//     if(top==nullptr){
//         return -1;
//     }
//     return top->data;
// }
// int sizeoff(){
//     return size;
// }
// };


#IMPLEMENT QUEUE USING LL



// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=nullptr;
//     }
// };
// class queuee{
//  public:
//  node* start;
//  node* end;
//  int size;
//     queuee(){
//          start=nullptr;
//          end=nullptr;
//          size=0;
//     }
//     void push(int x){
//         node* temp=new node( x);
//         if(end==nullptr){
//             start=temp;
//             end=temp;
//         }
//          else{
//         end->next=temp;
//         end=temp;
//               }
//               size=size+1;
//             }
//     void pop(){
//       if(start==nullptr) return;
//       node* newnode=start;
//       start=start->next;
//       delete newnode;
//       if(start==nullptr) end=nullptr;
//       size=size-1;
//     }

//     int peek(){
//         if(start==nullptr) return -1;
//         return start->data;
//     }
//     int sizeoff(){
//         return size;
//     }
// };

#IMPLEMENT STACK USING QUEUE

// class stackk
// {

// public:
//     queue<int> qu;

//     void pushh(int x)
//     {
//         qu.push(x);
//         int size = qu.size();
//         for (int i = 1; i < size; i++)
//         {

//             qu.push(qu.front());
//             qu.pop();
//         }
//     }

//     void popp()
//     {
//         if (qu.empty()) return ;
//          qu.pop();
//     }
//     int topp()
//     {
//         if (qu.empty())
//             return -1;
//         return qu.front();
//     }
// };


