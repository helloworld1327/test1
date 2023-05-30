#CWE-459, resources should be closed

int fun() {
  FILE *f = fopen("file", "r");
  if (f == NULL) {
    return -1;
  }
  // ...
  return 0; // Noncompliant, file f has not been closed
}
