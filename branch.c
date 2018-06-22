#include <stdio.h>

#define MAX 100

int i, j;
char *img, *message;


int write(char *img, char *message){
  for(i = 0, j = 0; i < sizeof(img); i++){
    if(!(i %4))
      img[i] = message[j++];
  }
  return 0;
}
void getimg(char *img){
  printf("Select Image (jpeg)");
  fgets(img_file, MAX, stdin);
  img[] = system("xxd -p img_file");
}
void getmessage(char *message){
  printf("Type message");
  fgets(message, MAX, stdin);
}
int main(){
  getimg(&img);
  getmessage(&message);
  write(&img, &message);
  return 0;
}
