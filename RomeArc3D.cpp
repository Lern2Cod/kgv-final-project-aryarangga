#include <Windows.h>
#include <glut.h>

int w = 1000, h = 1000, z = -290;
int x1 = 0, y1 = 0, sudut = 0, z1 = 0;

void rome() {
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glColor3ub(205,224,23); //warna alas
    glTranslatef(0, -22, 0); //posisi objek x,y,z
    glRotatef(90, 1, 0, 0);  //untuk memutar objek sesuai sudut
    glScalef(7, 7, 0.1);       //skala objek x,y,z
    glutSolidCube(30);       //besar kubus dengan warna solid
    glPopMatrix();

    //alas bangunan
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glColor3ub(220, 220, 190);
    glTranslatef(0, -15, 0);
    glScalef(4.5, 0.4, 5);
    glutSolidCube(30);
    glPopMatrix();

    //dinding tangga
    glPushMatrix();
    glColor3ub(220, 220, 190);
    glTranslatef(-20, -15, 82);
    glScalef(0.5, 0.7, 0.8);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(220, 220, 190);
    glTranslatef(20, -15, 82);
    glScalef(0.5, 0.7, 0.8);
    glutSolidCube(20);
    glPopMatrix();

    //tangga
    glPushMatrix();
    glColor3ub(64,64,64);
    glTranslatef(0, -14, 82);
    glScalef(1.8, 0.2, 0.4);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(64, 64, 64);
    glTranslatef(0, -19, 86);
    glScalef(1.8, 0.3, 0.4);
    glutSolidCube(20);
    glPopMatrix();

    //isi kotak
    glPushMatrix();
    glColor3ub(121, 124, 90);
    glTranslatef(0, 16, -15);
    glScalef(4.5, 2.5, 4);
    glutSolidCube(20);
    glPopMatrix();

    //pintu
    glPushMatrix();
    glColor3ub(64, 64, 64);
    glTranslatef(0, 0, 25);
    glScalef(1, 2.5, 0.1);
    glutSolidCube(20);
    glPopMatrix();

    //pilar kiri

    //1
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar1
    glTranslatef(-60, 10, 0);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, -7, 0);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, 40, 0);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //2
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar2
    glTranslatef(-60, 10, -25);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, -7, -25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, 40, -25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //3
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar3
    glTranslatef(-60, 10, -50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, -7, -50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, 40, -50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //4
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar4
    glTranslatef(-60, 10, 25);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, -7, 25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, 40, 25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //5
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar5
    glTranslatef(-60, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-60, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //pilar kanan

    //1
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar1
    glTranslatef(60, 10, 0);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, -7, 0);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, 40, 0);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //2
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar2
    glTranslatef(60, 10, -25);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, -7, -25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, 40, -25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //3
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar3
    glTranslatef(60, 10, -50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, -7, -50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, 40, -50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //4
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar4
    glTranslatef(60, 10, 25);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, -7, 25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, 40, 25);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //5
    glPushMatrix();
    glColor3ub(141, 150, 60);  //pilar5
    glTranslatef(60, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(60, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //pilar depan

    //1
    glPushMatrix();
    glColor3ub(141,150,60); 
    glTranslatef(40, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(40, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(40, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //2
    glPushMatrix();
    glColor3ub(141, 150, 60); 
    glTranslatef(15, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(15, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(15, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //3
    glPushMatrix();
    glColor3ub(141, 150, 60);  
    glTranslatef(-15, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-15, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-15, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //4
    glPushMatrix();
    glColor3ub(141, 150, 60);  
    glTranslatef(-40, 10, 50);
    glScalef(0.5, 3.2, 0.5);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-40, -7, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(160, 170, 80);
    glTranslatef(-40, 40, 50);
    glScalef(0.7, 0.2, 0.7);
    glutSolidCube(20);
    glPopMatrix();

    //alas atap
    glTranslatef(0, 0, 0);
    glPushMatrix();
    glColor3ub(220, 220, 190);
    glTranslatef(0, 45, 0);
    glScalef(4.5, 0.3, 4);
    glutSolidCube(30);
    glPopMatrix();

    //atap
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 219);
    //depan
    glVertex3f(0.0f, 98.0f, 55.0f);
    glVertex3f(70.0f, 48.0f, 55.0f);
    glVertex3f(-70.0f, 48.0f, 55.0f);
    //belakang
    glVertex3f(0.0f, 98.0f, -55.0f);
    glVertex3f(70.0f, 48.0f, -55.0f);
    glVertex3f(-70.0f, 48.0f, -55.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 219);
    //kiri
    glVertex3f(-70.0f, 48.0f, 55.0f);
    glVertex3f(0.0f, 98.0f, 55.0f);
    glVertex3f(0.0f, 98.0f, -55.0f);
    glVertex3f(-70.0f, 48.0f, -55.0f);
    //kanan
    glVertex3f(70.0f, 48.0f, -55.0f);
    glVertex3f(0.0f, 98.0f, -55.0f);
    glVertex3f(0.0f, 98.0f, 55.0f);
    glVertex3f(70.0f, 48.0f, 55.0f);
    glEnd();

    
}





void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(10, 0, z);
    glRotatef(sudut, x1, y1, z1);
    rome();
    glutSwapBuffers();
}

void resize(int w1, int h1) {
    glViewport(0, 0, w1, h1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (float)w1 / (float)h1, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void myKeyboard(unsigned char key, int x, int y) {
    if (key == '=')
        z += 5;
    else if (key == '-')
        z -= 5;
    else if (key == 'y') {
        x1 = 1;
        y1 = 0;
        z1 = 0;
        sudut += 10;
    }
    else if (key == 't') {
        x1 = 1;
        y1 = 0;
        z1 = 0;
        sudut += -10;
    }
    else if (key == 'x') {
        x1 = 0;
        y1 = 1;
        z1 = 0;
        sudut += -10;
    }
    else if (key == 'c') {
        x1 = 0;
        y1 = 1;
        z1 = 0;
        sudut += 10;
    }
    else if (key == 'z') {
        x1 = 0;
        y1 = 0;
        z1 = 1;
        sudut += -10;
    }
}

void init() {
    glClearColor(203.0f / 255.0f, 203.0f / 255.0f, 203.0f / 255.0f, 0.0f);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (GLdouble)w / (GLdouble)h, 1.0, 300.0);
    glMatrixMode(GL_MODELVIEW);
}

void idle() {
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("uaskgv");
    gluOrtho2D(-w, w, -h, h);
    glutDisplayFunc(renderScene);
    glutReshapeFunc(resize);
    glutKeyboardFunc(myKeyboard);
    glutIdleFunc(idle);
    init();
    glutMainLoop();
}