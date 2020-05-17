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

    QLinearGradient Linear(1, 1, 100, 100);
    Linear.setColorAt(0, QColor::fromRgbF(0, 0, 0, 1));
    Linear.setColorAt(1, QColor::fromRgbF(0, 0, 0, 0));

    QBrush Brush(Linear);

    Painter.setBrush(Qt::BDiagPattern);
    Painter.drawRect(1, 1, 100, 100);
    Painter.fillRect(QRect(1, 1, 100, 100), Brush);
}
