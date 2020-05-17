#include <QApplication>
#include <QBitmap>  /* <QPixmap> provides a clearer image. */
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /* Set the file path, ex) C:\\Cho-yeon.png */
    /* QPixmap Pixmap("C:\\Cho-yeon.png"); */
    QBitmap Bitmap("C:\\Cho-yeon.png");
    QLabel Label;
    Label.setPixmap(Bitmap);
    Label.show();
    return a.exec();
}
