#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\n#include <sys/types.h>\n#include <unistd.h>\n#include <time.h>\n\nvoid srand(unsigned int seed) {}\nint rand(void) { return 6; }\n' > /tmp/hack.c
gcc -shared -fPIC -o /tmp/hack.so /tmp/hack.c
export LD_PRELOAD=/tmp/hack.so

