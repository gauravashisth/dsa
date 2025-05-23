// Enter the half-length of a diamond: 5
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include <cstdio>
void star_pyramid(int &len) {
  char s = '*';
  char S = ' ';
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len - 1; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < (2 * i) + 1; k++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}
void inverted_star_pyramid(int &len) {
  char s = '*';
  char S = ' ';
  for (int i = 1; i < len; i++) {
    for (int j = 0; j < i; j++) {
      printf("%c ", S);
    }
    for (int k = 0; k < 2 * len - (2 * i + 1); k++) {
      printf("%c ", s);
    }
    printf("%c", '\n');
  }
}

int main() {
  int len;
  printf("%s", "Enter the half-length of a diamond: ");
  scanf("%d", &len);

  star_pyramid(len);
  inverted_star_pyramid(len);
}
