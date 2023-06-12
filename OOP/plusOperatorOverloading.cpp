#include<bits/stdc++.h>

using namespace std;

class constructor
{
private:
  string name;
  int id;
  float cgp;
public:
  constructor(){

  }
  constructor(string name, int id, float cgp){
    this->name = name;
    this->id = id;
    this->cgp = cgp;
  }
  ~constructor(){

  }
  void display();
  constructor operator + (const constructor &a){
    constructor tem;
    tem.name = name + a.name;;
    tem.id = id + a.id;
    tem.cgp = cgp + a.cgp;
    return tem;
  }
};

void constructor::display(){
  cout << "Name: " << name << endl;
  cout << "ID: " << id << endl;
  cout << "CGPA: " << cgp << endl;
}

int main(){
  constructor cons("Nipen Paul", 174038, 3.13);
  cons.display();
  constructor cp = cons;
  cp.display();
  constructor add;
  add = cp + cons;
  add.display();
  return 0;
}
