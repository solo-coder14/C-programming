#include <stdio.h>

void main() {
  FILE *file;
  file=fopen("text.txt","r");
  if (file==NULL) printf("Exist");
    else
    {
    fseek(file,0, SEEK_END);
     long size=ftell(file);
        if(size==0) printf("Exist");
  else{
    printf("Want to do something");
  }
  }


}
