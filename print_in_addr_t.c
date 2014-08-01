//
// Copied from www.gidforums.com
//

#include <stdio.h> 
#include <arpa/inet.h> 

int main() 
{ 
  in_addr_t x; 
  char *z; /* well set this equal to the IP string address returned by inet_ntoa */ 
  char *y = (char *)&x; /* so that we can address the individual bytes */ 
  y[0] = 12; 
  y[1] = 34; 
  y[2] = 56; 
  y[3] = 78; 
  z = inet_ntoa(*(struct in_addr *)&x); /* cast x as a struct in_addr */ 
  printf("z = %s\n", z); 
  return 0; 
} 
