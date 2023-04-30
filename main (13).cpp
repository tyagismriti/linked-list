#include <iostream>
using namespace std;
// linked list is a linear d.s in which non contiguous allocation is done
// no memory wastage
// dynamically shrink and grow at run time
class node{
public:
int data;
node*next;
node(){
  this->data=0;
  this->next=NULL;
  cout<<"default constructor called"<<endl;
}
node(int data){
  this->data=data;
  this->next=NULL;
  cout<<"para constructor called"<<endl;
}
};
int main() {
  // static object
  node head(67);
  // dynamic object
  node*first=new node(78);
}