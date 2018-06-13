#include <stdio.h>
#include <stdlib.h>

int what, image, text;
char buf[100
0];

int main() {
  printf("Would you like to encode or decode a file?\nType 0 to encode, and 1 to decode.\n>");
  scanf("%d", &what);

  if(what == 0){
    /* encode*/
    /* get image */
    printf("\nType the path of the image you want to use (jpeg works best)\n>");
    scanf("%s",&image);

    printf("\nType the path of the data you wish to encode.\nType '0' if you want to type it instead.\n>");
    scanf("%s",&text);

    if(text == 0){
      printf("\nPlease type your message and hit ENTER.\n>");
      scanf("%s",&text);

    }

   /* strcpy(command, "xxd -p %i", text);
    system(command);
    return(text);

    command = "xxd -p %i", image);
    system(command);
    return(image);
*/

    text = snprintf(buf, sizeof(buf), "xxd -p %s",&text); 
    /*text = system(buf);*/
    

    image = snprintf(buf, sizeof(buf), "xxd -p %s",&image); 
    /*image = system(buf);*/
    

    FILE *out = fopen("/home/jonathan/out.jpg","a");

    fprintf(out, "%s",&text);
    fprintf(out, "%s",&image);

    fclose(out);

    printf("Done! I think...");

  }
  else {
    /*decode*/
    printf("Type the path of the image you want to decode.\n>");
    scanf("%s",&image);

    /*strcpy(command, "xxd -p %i", image);
    system(command);
    return(text);*/

    snprintf(buf, sizeof(buf), "xxd -r -p %s",&image); 
    text = system(buf);

    printf("Decoded text:\n\n%s",&text);

  }
}
