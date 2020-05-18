#include <QApplication>
#include <QPixmap>
#include <QClipboard>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap Pixmap("C:\\Cho-yeon.png");
    
    QClipboard * Clipboard = QGuiApplication::clipboard();
    Clipboard -> setPixmap(Pixmap);
    
    QPixmap Copy(Clipboard -> pixmap());
    
    QLabel Label;
    Label.setPixmap(Copy);
    Label.show();
    return a.exec();
}
