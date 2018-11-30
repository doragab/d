#include <boost/filesystem.hpp>
#include <iostream>

using namespace std;
using namespace boost::filesystem;

void search_for_java (path p, int& count){

  if(is_regular_file(p)){
    string java = ".java";
      if(!java.compare(extension(p))){
      //  cout << p.string() << endl;
        count++;
      }
  } else if(is_directory(p)){
    for(auto entry : directory_iterator ( p ) )
      search_for_java (entry.path(), count);
  }
}

int main(){

  path p = {"/home/dora/Asztal/jdk/src"};

  cout << p.relative_path() << '\n';

  int count = 0;
  search_for_java(p, count);

  cout << count << endl;

  return 0;
}
