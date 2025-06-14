#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2;

void midPoint(void)
{

    double dx=(X2-X1),dy=(Y2-Y1),l;
    float Ds, De, Dne, x=X1,y=Y1;

    Ds=2*dy-dx;
    De=2*dy;
    Dne=2*(dy-dx);

    if(abs(dx)>abs(dy))
        l=(abs(dx));
    else
        l=(abs(dy));

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x,y);

    for(int i=0; i<l; i++)
    {
        if (Ds > 0){
            x += 1;
            y += 1;
            glVertex2d(round(x), round(y));
            Ds += Dne;
        }
        else if (Ds < 0){
            x += 1;
            glVertex2d(round(x), round(y));
            Ds += De;
        }
    }
    glEnd();

    glFlush();

}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 640.0,-100.0, 480.0);
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("Midpoint Line");

    cout<<"Enter an initial points:\t";
    cin>>X1;
    cin>>Y1;
    cout<<"Enter the final points:\t";
    cin>>X2;
    cin>>Y2;
    glutDisplayFunc(midPoint);
    myInit ();
    glutMainLoop();

}
