#include <iostream>
using namespace std;


int for_of(){

  int  arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int  sum = 0;

  for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
    sum+= arr[i];
  }


  printf("%d\n", sum);
  return sum;
}

int main(){
  for_of();
}