#include<iostream>
using namespace std;
int top=-1;
	int a;
	int* arr= NULL;
	void push(){
 	int value;
 	if (arr == NULL) {
        cout << "Enter the size of array = ";
        cin >> a;
        arr = new int[a];
    }
 	for(int i=0;i<a;i++){    //stack will overflow
	       cout<<"Enter the value in array= ";
		 	cin>>value;
 		if(top==a-1){
 			cout<<"Stack overflow!"<<endl;
		 }
		 else{
		 	top++;
		 	arr[top]=value;
		 	cout<< value << " Successfully pushed!"<<endl;;
		 }
	 }
 }
 void display(){
 	if (top == -1) {
        cout << "Stack is empty!" << endl;
    } 
    else {
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
 }
 bool isEmpty() {
    if (top == -1) {
        return true;   // Stack empty hai
    } 
    else {
        return false;  // Stack me elements hain
    }
}

 void pop(){
 	 for(int i=top;i>=0;i--){ 
		 	if (top == -1) {
        cout << "Stack Underflow! Cannot pop from an empty stack.\n";
    }
         else{
		 
		 	cout << "Popped element: " << arr[top] << endl;
                 top--;
            }     
		 }
		
         
	 }

 int main(){
 	int choice;
 	cout<<"1. push"<<endl;
 	cout<<"2. pop"<<endl;
 	cout<<"3. display"<<endl;
 	cout<<"4. isEmpty"<<endl;
 	for(int i=0;i<4;i++){
	 
 	cout<<"Enter your choice(from 1 to 4)= ";
 	cin>>choice;
 	if(choice==1){
 		push();
	 }
	 else if(choice==2){
	 	pop();
	 }
	 else if(choice==3){
	 	display();
	 }
	 else if(choice==4){
	 	if (isEmpty()) {
        cout << "Stack is empty!" << endl;
    } 
    else {
        cout << "Stack has some elements!" << endl;
    }
    }
    else{
    	cout<<"invalid choice!!"<<endl;
	}
	 
	 }
	 delete[] arr;
 	return 0;
 }
