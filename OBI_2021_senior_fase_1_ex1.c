// Author's code: Rafael Henrique Nogalha de Lima
//                November 2021                  

#include <stdio.h>
#include <stdlib.h>

int oldestSon = 0;

// Function for see the oldest son
void max(int f) {
  
  if (f > oldestSon){
    oldestSon = f;
  }
 
}

int countAgeThirdSon(int m, int f1, int f2){
  int f3 = m - (f1+f2); // Monica's son age 3 calculation
  return f3;
}

void main(){
  int m;
  scanf("%d", &m);   // Monica's age
  int f1; 
  scanf("%d", &f1);  // Monica's son age 1
  max(f1); // See if it's the oldest Son
  int f2;
  scanf("%d", &f2); // Monica's son age 2
  max(f2); // See if it's the oldest Son
  int f3 = countAgeThirdSon(m,f1,f2);
  max(f3); // See if it's the oldest Son
  
  printf("%d\n",oldestSon);  // Print the oldest Son
}
