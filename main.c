//program designed by Julien Gielen to test out the very basic functions of freeglut.
#include <stdlib.h>
#ifdef __APPLE_CC__
#include <GLUT/freeglut.h>
#else
#include <GL/freeglut.h> //This program uses function from freeglut.h instead of glut.h
#endif
#define WINDOWS_WIDTH 800
#define WINDOWS_HEIGHT 600
#define MAX_CH 25

void cube(){
    glTranslatef(0,0,0);//position of the 3D object HERE : CENTERED
    glColor3ub(255,0,120);//color of the objet RGB
    glutSolidCube(1);//draw a cube with the color and position specified before
    glutSwapBuffers();//reload buffer
}

void helloworld(){
    char string[MAX_CH]="Hello World";
    glColor3ub(0,255,120);//color of the text in RGB, to be used before glrasterpos
    glRasterPos2f(-0.2,0);//set the positon of the text;use in small increment
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,string);//dispaly text in string
    glutSwapBuffers();//reload buffer to display object
}


int main(int argc, char** argv) {
    glutInit(&argc, argv); //initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); //set the display mode. here : double and RGB buffered
    glutInitWindowSize(WINDOWS_WIDTH,WINDOWS_HEIGHT); //Set the windows size, in pixels
    glutInitWindowPosition(0,0); //Set the windows position, in pixels
    glutCreateWindow("Hello World"); //create the window with the title as argument
    glutDisplayFunc(helloworld); //fonction to display in the window, argument = name of the fonction, mandatory
    glutInitWindowPosition(1280,0);//change the position of the future windows created
    glutCreateWindow("Cube");
    glutDisplayFunc(cube);
    glutMainLoop(); //permanant loop, mandatory
return 0;
}