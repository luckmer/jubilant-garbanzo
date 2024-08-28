#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int for_of(){

  int  arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int  sum = 0;

  for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    sum+= arr[i];
  }


  return sum;
}


int is_palindrome(int x){
  std::string start = std::to_string(x);
  std::string reverse = start;
  std::reverse(reverse.begin(),reverse.end());

  return start == reverse;
}

int vectors(){

  vector<int> arr = {1,2,3,4};

  arr.push_back(5);
  arr.push_back(6);
  arr.push_back(7);
  arr.push_back(7);

  cout << arr.capacity() << endl;



  arr.insert(arr.begin(), 10);

  for(auto itr = arr.begin(); itr != arr.end(); itr++){
    cout << *itr << endl;
  }

  return 0;
}

int main(){
  // vectors();
  is_palindrome(121);
  // int result = for_of();  
  // printf("%d\n", result); 
}