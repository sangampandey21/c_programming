#include <stdio.h>
int setRightmostUnsetBit(int num){
    return num|(num+1);
       }
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
 int result = setRightmostUnsetBit(number);
  printf("Result after setting the rightmost unset bit of %d: %d\n", number, result);
 return 0;
}
