#include<bits/stdc++.h>

using namespace std;

class constructor
{
private:
  string name;
  int id;
  float cgp;
public:
  constructor(string name, int id, float cgp){
    this->name = name;
    this->id = id;
    this->cgp = cgp;
  }
  ~constructor(){

  }
  void display(){
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "CGPA: " << cgp << endl;
  }
};

int main(){
  constructor cons("Nipen Paul", 174038, 3.13);
  cons.display();
  return 0;
}
