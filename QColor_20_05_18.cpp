#include <QApplication>
#include <QWidget>
#include <QPainter>

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
    QPainter Painter(this);

    /*
     * The alpha channel of a color specifies
     * the transparency effect
     * 0 represents a fully transparent color
     * while 255 represents a fully opaque color.
    */

    Painter.setBrush(QColor(255, 0, 0, 127));
    Painter.drawRect(0, 0, width() / 2, height());

    Painter.setBrush(QColor(0, 0, 255, 127));
    Painter.drawRect(0, 0, width(), height() / 2);
}
