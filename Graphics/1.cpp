// Must include : g++ file.cpp -o file -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
#include<graphics.h>
#include<iostream>
using namespace std;
int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm,(char*)"");
   rectangle(100,100,200,200);
   getch();
   closegraph();
   return 0;
}
