#CWE-416, Freed memory should not be used

char *cp = malloc(sizeof(char)*10);

// ...
free(cp);

cp[9] = 0;
