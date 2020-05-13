#include <QApplication>
#include <QtGui>    /* QPainter Painter(this); */
#include <QWidget>  /* class Widget : public QWidget */

class Widget : public QWidget
{
protected:
    /* Requirement for using QPainter */
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
    /* QPainter can paint on QWidget only in paintEvent(QPaintEvent *) */
    QPainter Painter(this);
    Painter.drawLine(1, 1, 100, 100);
}
