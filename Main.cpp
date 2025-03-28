#include "Serie.hpp"
#include<iostream>
#include<ftxui/dom/element.hpp>
#include<ftxui/screen/screen.hpp>

using namespace ftxui;


int main(int argc, char const*argv[])
{
  Screen pantalla = Screen::Create{
    Dimension::Full(),
    Dimension::Full()

  };


  auto document = ftxui::hbox({
    ftxui::vbox(spiner(1,1))
  });

  ftxui::Render(pantalla,document);

  return EXIT_SUCCESS;}