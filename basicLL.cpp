#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

struct NODE{
int data;
NODE *link;
};
struct LIST{
  NODE *head;
};

NODE* emptyLIST();
void printLIST(NODE *printNODE);
NODE *makeNULL(NODE *null);

int main()
{
  NODE *node;
  node = new NODE;

  node = emptyLIST();
  printLIST(node);
}
NODE* emptyLIST(){
  NODE *newNode;
  NODE *top;
  int num = 1;

  newNode = new NODE;
  top = new NODE;

 do{
  makeNULL(newNode);
  newNode = new NODE;
  cout << "Enter digit: " << endl;
  cin >> num;
  newNode->data = num;
  newNode->link = top->link;
  top->link = newNode;
  newNode = newNode->link;
 }while(num != 99);
  return newNode;
}
void printLIST(NODE *printNODE){
  int a = 0;

  while(a != 10){
    cout << "data: " << printNODE->data << endl;
    printNODE = printNODE->link;
    a++;
  }

}
NODE *makeNULL(NODE *null){
  null = new NODE;
  null->data = 0;
  null->link = 0;
  return null;
}
