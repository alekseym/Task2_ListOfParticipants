#include <vector>
#include <iostream>
#include "recogniser.h"

using namespace std;

void testOfRecogniserCreation()
{
  Recognizer t;
  vector<vector<int>> data;

  t.load("test.pnm");
  data = t.recognise();

  cout<< "test testOfRecogniserCreation - OK"<<endl;
}

int main()
{
  testOfRecogniserCreation();

}