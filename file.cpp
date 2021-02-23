#include <iostream>

#include <fstream>

#include <sstream>

using namespace std;

int main() {

	  string filename;

	  ofstream files;

	  for (int i = 1; i <= 100; i++) {

	    stringstream a;

	    a << i;

	    filename =a.str();

	    filename += ".cpp";


	    files.open(filename.c_str(), ios::out);

	    files.close();
	  }
	  return 0;

	}