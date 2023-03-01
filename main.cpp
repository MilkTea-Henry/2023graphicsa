#include <GL/glut.h>
float X=0,Y=0;///02-4設定X Y
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///02-5清個背景
    glPushMatrix();///備份

        glTranslatef(X,Y,0);///加了還不夠黑
        glutSolidTeapot(0.3);///畫出一個實心茶壺,它的大小0.3
    glPopMatrix();///還原

    glutSwapBuffers();///請GLUT把畫面swap送到顯示的地方

}
#include<stdio.h>
void mouse(int button,int state,int x,int y)
{///02-2滑鼠幫大忙
    ///printf("%d %d %d %d\n",button,state,x,y);
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;///02-3修改X Y(口決:都減150再除150.0 Y要負號)
}
int main(int argc, char *argv[])

{///上面是特別的main()函式 有很多參數

	glutInit(&argc, argv);///把GLUT開起來

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///顯示設定

    glutCreateWindow("GLUT Shapes");///要開視窗

	glutDisplayFunc(display);///要顯示對應的函式

	glutMouseFunc(mouse);///02-1加入滑鼠

	glutMainLoop();///最後用main迴圈,壓在最後面

}
