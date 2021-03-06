/**
* This file is part of Turtle.
*
* Copyright (C) 2018 SUN Hao, WU Mengxin, LIU Bohua Université Polythec Nice Sophia 
*
* Définition d’une classe PileL. Les élé©ments sont conservés dans une
* liste de type std::list<Robot>. Le sommet de pile est le premier
* élément de la pile. 
* 
*/

#pragma once 

#include "Robot.hpp" 
#include "Singleton.hpp"
#include <iterator>
#include <list>

class PileL: public Singleton<PileL>{ 
private: 
  std::list<Robot> l;
  std::string excp;
public:
  static PileL * getInstance() { return InstanceUnique(); }

  std::list<Robot> getList() { return this->l;}
  bool estVide() const { return this->l.size()==0; } 
  void empiler(Robot *r) { this->l.push_back(*r); }
  void depiler() { this->l.pop_back(); } 
  Robot sommet() const { return this->l.back(); }
  void setExp(std::string e) {this->excp = e;}
  std::string getExp() {return this->excp;}
  ~PileL(){}
}; 
