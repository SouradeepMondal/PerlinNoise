#include <bits/stdc++.h>
int main(){
 FILE *imageFile;
 int x,y,pixel,height=2,width=3;

 imageFile=fopen("image.ppm","wb");
 if(imageFile==NULL){
  perror("ERROR: Cannot open output file");
  exit(EXIT_FAILURE);
 }

 fprintf(imageFile,"P3\n");           // P3 filetype
 fprintf(imageFile,"%d %d\n",width,height);   // dimensions
 fprintf(imageFile,"255\n");          // Max pixel
  int pix[100] {200,200,200, 100,100,100, 0,0,0, 255,0,0, 0,255,0, 0,0,255};


       fwrite(pix,1,18,imageFile);


fclose(imageFile);
}
