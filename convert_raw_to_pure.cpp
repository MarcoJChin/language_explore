#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

//usage: ./exe 
//inFile: raw_dictionary.txt
//outFile: pure_dictionary.txt
bool isParentWord(string input){
  if(input.empty())//check if the string is empty
    return false;
  //checks if all letters are capital english letters  
  unordered_set <char> capital_letters ({'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'});
  for (char c : input){
    if (capital_letters.find(c) == capital_letters.end()){//not found
      return false; 
    }
  }
  return true;
}



int main (int argc, char *argv[]){
  ifstream raw_file ("raw_dictionary.txt"); 

  string line;
  while(getline (raw_file, line)){
    if(isParentWord(line)){
      cout<<line<<endl;
    }
  }

  raw_file.close();

  //get defn
  
  ofstream pure_file ("pure_dictionary.txt"); 
}
