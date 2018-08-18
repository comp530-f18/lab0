#include <unistd.h>

#define BUFLEN 80
char inbuf[BUFLEN + 1];
char outbuf[BUFLEN + 1];
#define standard_in 0
#define standard_out 1

int main () {
  int eof = 0;
  int rv;
  int outbuf_idx = 0;
  int inbuf_idx = 0;
  
  do {
    int valid_chars;
    
    // Read in a buffer's worth of text.  Be sure to check for errors

    for (int i = 0; i < valid_chars; i++) {

      // Special-case the newline

      // Special-case for %%

      // Copy the char

      // Handle the case where the inbuf is full
    }
 
  } while (!eof);
  return rv;
}
