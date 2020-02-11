#include <stdio.h>

int main() {
	  //  printf("\033[1;4;33mhello\033[0m \033[4;redmcolor\033[0m\n");
	  char str[60];
	  scanf("%[^\n]", &str);
	  printf("%s\n", str);
	  return 0;  
}
