#include<iostream>
#include <windows.h>
#include <GL/glut.h>
using namespace std;

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void displayTranslation() {
    int edgeNum;
    cout << "Enter the no. of edges: ";
    cin >> edgeNum;
    float vertexes[edgeNum][2];
    for(int i = 0; i < edgeNum; i++) {
        cout << "Enter the co-ordinates of vertex " << i + 1 << " : ";
        cin >> vertexes[i][0] >> vertexes[i][1];
    }
    float translationFactor[2];
    cout << "Enter the translation factor for x and y:";
    cin >> translationFactor[0] >> translationFactor[1];
    cout << "Translation factor :" << translationFactor[0] << '\t' << translationFactor[1] << endl;

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    /// Drawing the actual polygon in green
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    for(int i = 0; i < edgeNum; i++) {
        glVertex2f(vertexes[i][0], vertexes[i][1]);
    }
    glEnd();

    /// Drawing after translation in red
    glTranslatef(translationFactor[0], translationFactor[1], 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    for(int i = 0; i < edgeNum; i++) {
        glVertex2f(vertexes[i][0], vertexes[i][1]);
    }
    glEnd();

    glFlush(); // Render now
}

void displayScaling()
{
    int edgeNum;
    cout << "Enter the no. of edges: ";
    cin >> edgeNum;
    float vertexes[edgeNum][2];
    for(int i = 0; i < edgeNum; i++) {
        cout << "Enter the co-ordinates of vertex " << i + 1 << " : ";
        cin >> vertexes[i][0] >> vertexes[i][1];
    }
    float scalingFactor[2];
    cout << "Enter the scaling factor for x and y:";
    cin >> scalingFactor[0] >> scalingFactor[1];
    cout << "Scaling factor :" << scalingFactor[0] << '\t' << scalingFactor[1] << endl;

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    
    /// Drawing the actual polygon in green
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    for(int i = 0; i < edgeNum; i++) {
        glVertex2f(vertexes[i][0], vertexes[i][1]);
    }
    glEnd();
    
    /// Drawing after scaling in red
    glScalef(scalingFactor[0], scalingFactor[1], 0.0f);
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    for(int i = 0; i < edgeNum; i++) {
       glVertex2f(vertexes[i][0], vertexes[i][1]);
    }
    glEnd();

    glFlush(); // Render now
}



int main(int argc, char** argv) {
    glutInit(&argc, argv); /// Initialize GLUT
    glutInitWindowSize(320, 320); /// Set the window's initial width & height - non-square
    glutInitWindowPosition(50, 50); /// Position the window's initial top-left corner
    int choice;
    bool running = true;

    cout << "1.  Translation" << endl;
    cout << "2.  Scaling" << endl;
    cout << "3.  Exit" << endl;

    while(running) {
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                glutCreateWindow("Model Transform");
                glutDisplayFunc(displayTranslation);
                initGL();
                glutMainLoop();
                break;
            case 2:
                glutCreateWindow("Model scaling");
                glutDisplayFunc(displayScaling);
                initGL();
                glutMainLoop();
                break;
            case 3:
                cout << "Program terminated" << endl;
                running = false;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
                break;
        }
    }
    return 0;
}
