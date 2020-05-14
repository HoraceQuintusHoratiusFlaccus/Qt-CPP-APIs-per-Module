#include <QApplication>
#include <QtGui>
#include <QWidget>

class Widget : public QWidget
{
protected:
    void paintEvent(QPaintEvent *event) override;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

void Widget::paintEvent(QPaintEvent *event)
{
    QRegion Region(QRect(1, 1, 100, 100));
    QPainter Painter(this);

    /*
     * QRegion is used with QPainter::setClipRegion()
     * to limit the paint area to what needs to be painted.
    */
    Painter.setClipRegion(Region);
    Painter.drawLine(1, 1, 100, 100);
    /* Painter.drawLine(1, 1, 200, 200); */

    /*
     * It's the same result
     * because the screen area is limited by QRegion.
    */
}
