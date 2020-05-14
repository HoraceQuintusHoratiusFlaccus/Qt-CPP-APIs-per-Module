#include <QApplication>
#include <QWindow>
#include <QBackingStore>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWindow Window;
    QRegion Region(QRect(1, 1, 100, 100));
    QBackingStore BackingStore(&Window);
    BackingStore.beginPaint(Region);

    QPaintDevice * PaintDevice = BackingStore.paintDevice();
    QPainter Painter(PaintDevice);
    Painter.drawLine(1, 1, 100, 100);

    Painter.end();
    BackingStore.endPaint();
    BackingStore.flush(Region);

    Window.show();
    return a.exec();
}
