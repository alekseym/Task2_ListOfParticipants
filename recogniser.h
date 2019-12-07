#pragma once

#include <string>
#include <iostream>
#include <vector>
//#include <opencv>
//#include <Mat>

using namespace std;


class Recognizer
{
public:

  Recognizer();
  void load(string fname);
  vector<vector<int>> recognise();
};






