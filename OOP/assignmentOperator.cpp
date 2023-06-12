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
  void display();
  void operator = (const constructor &a){
    name = a.name;
    id = a.id;
    cgp = a.cgp;
  }
};

void constructor::display(){
  cout << "Name: " << name << endl;
  cout << "ID: " << id << endl;
  cout << "CGPA: " << cgp << endl;
  cout << endl;
}

int main(){
  constructor cons("Nipen Paul", 174038, 3.13);
  cons.display();
  constructor cp = cons;
  constructor cc = cp;
  cc.display();
  cp.display();
  return 0;
}
