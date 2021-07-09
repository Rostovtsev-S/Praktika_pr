#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main() {
    
   ifstream file("massiv.txt");
   if (!file.is_open()) {
       cout << "Error! File is not found!";
   }
   else  {
       vector<int> vec;
       copy(
           istream_iterator<int>(file),
           istream_iterator<int>(),
           back_inserter(vec)); 
       int _min = *min_element(vec.begin(), vec.end());

       cout << "Min: " << _min << endl;

       file.close();
   
    }
    return 0;
}