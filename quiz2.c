#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revSubstring (string rev1, string str1, int substrLen, string strLen) {
    rev1 =
}

int main(int argc, char **argv) {
  char *str1 = (char *)malloc(sizeof(char*) * strlen(argv[1]));
  char *str2 = (char *)malloc(sizeof(char*) * strlen(argv[2]));
  int str1_len = atoi(argv[3]);
  int str2_len = atoi(argv[4]);

  for(int i = 0; i < strlen(argv[1]); i++){
    str1[i] = argv[1][i];
  }
  for(int j = 0; j < strlen(argv[2]); j++){
    str2[j] = argv[2][j];
  }

  printf("%d ", str1);
  printf("%d", str2);
  
  free(str1);
  free(str2);
  
  return 0;
}
