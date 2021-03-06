/*
* This file is part of Turtle.
*
* Copyright (C) 2018 SUN Hao, WU Mengxin, LIU Bohua Université Polythec Nice Sophia 
*
* Définition d'une classe MyArea qui créer un interface grphique  
* et dessiner le robot et son trace.
*/

#ifndef GTKMM_EXAMPLE_MYAREA_H
#define GTKMM_EXAMPLE_MYAREA_H

#include <gtkmm/drawingarea.h>
#include "PileL.hpp"
#define WIDTH 600
#define HEIGHT 600
class MyArea : public Gtk::DrawingArea{
public:
  MyArea();
  virtual ~MyArea();
  void update(PileL *info);
protected:
  PileL *rl;
  bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
  void axe(const Cairo::RefPtr<Cairo::Context>& cr);
  void drawRobot(const Cairo::RefPtr<Cairo::Context>& cr);
  void drawLine(const Cairo::RefPtr<Cairo::Context>& cr);
  double transX(const double x);
  double transY(const double y);
    
};

#endif
