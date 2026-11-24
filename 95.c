include <stdio.h>
#include <string.h>

int main() {
  char date[20];
  char result[20];

  printf("Enter date (dd/04/yyyy): ");
  scanf("%19s", date);

  strncpy(result, date, 2);
  result[2] = '\0';

  strcat(result, "-Apг-");
  strcat(result, date + 6);

  printf("New date format: %s\n", result);
return 0;
}
